#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <TlHelp32.h>

#include <cstdint>
#include <string_view>

class StealthyMemory
{
private:
    std::uintptr_t pid = 0;
    void* procHandle = nullptr;


public:
    StealthyMemory(const std::string_view procName) noexcept
    {
        ::PROCESSENTRY32 pe = { };
        pe.dwSize = sizeof(::PROCESSENTRY32);

        const auto ss = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

        while (::Process32Next(ss, &pe))
        {
            if (!procName.compare(pe.szExeFile))
            {
                pid = pe.th32ProcessID;
                procHandle = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
                break;
            }
        }

        if (ss)
            ::CloseHandle(ss);
    }

    ~StealthyMemory()
    {
        if (procHandle)
            ::CloseHandle(procHandle);
    }

    const std::uintptr_t GetModuleAddr(const std::string_view modName) const noexcept
    {
        ::MODULEENTRY32 me = { };
        me.dwSize = sizeof(::MODULEENTRY32);

        const auto ss = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);

        std::uintptr_t result = 0;

        while (::Module32Next(ss, &me))
        {
            if (!modName.compare(me.szModule))
            {
                result = reinterpret_cast<std::uintptr_t>(me.modBaseAddr);
                break;
            }
        }

        if (ss)
            ::CloseHandle(ss);

        return result;
    }

    template <typename T>
    constexpr const T ReadMem(const std::uintptr_t& addr) const noexcept
    {
        T val = { };
        ::ReadProcessMemory(procHandle, reinterpret_cast<const void*>(addr), &val, sizeof(T), NULL);
        return val;
    }

    template <typename T>
    constexpr void WriteMem(const std::uintptr_t& addr, const T& val) const noexcept
    {
        ::WriteProcessMemory(procHandle, reinterpret_cast<void*>(addr), &val, sizeof(T), NULL);
    }
};
