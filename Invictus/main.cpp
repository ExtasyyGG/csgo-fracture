#include <iostream>
#include <windows.h>
#include <random>
#include "memory.h"
#include "sets.h"

// Abstract base class
class CheatFeature {
public:
    virtual void Execute(StealthyMemory& mem, uintptr_t client) = 0;
};

// Derived class for the glow feature
class GlowFeature : public CheatFeature {
public:
    void Execute(StealthyMemory& mem, uintptr_t client) override {
        const auto localPlayer = mem.ReadMem<std::uintptr_t>(client + sets::dwLocalPlayer);
        const auto glowManager = mem.ReadMem<std::uintptr_t>(client + sets::dwGlowObjectManager);

        for (auto i = 0; i < 64; ++i) {
            const auto entity = mem.ReadMem<std::uintptr_t>(client + sets::dwEntityList + i * 0x10);
            if (mem.ReadMem<std::uintptr_t>(entity + sets::m_iTeamNum) == mem.ReadMem<std::uintptr_t>(localPlayer + sets::m_iTeamNum))
                continue;

            const auto glowIdx = mem.ReadMem<std::int32_t>(entity + sets::m_iGlowIndex);

            mem.WriteMem<float>(glowManager + (glowIdx * 0x38) + 0x8, 1.f);
            mem.WriteMem<float>(glowManager + (glowIdx * 0x38) + 0xC, 0.f);
            mem.WriteMem<float>(glowManager + (glowIdx * 0x38) + 0x10, 0.f);
            mem.WriteMem<float>(glowManager + (glowIdx * 0x38) + 0x14, 1.f);

            mem.WriteMem<bool>(glowManager + (glowIdx * 0x38) + 0x27, true);
            mem.WriteMem<bool>(glowManager + (glowIdx * 0x38) + 0x28, true);
        }
    }
};

int main() {
    auto mem = StealthyMemory{ "csgo.exe" };
    const auto client = mem.GetModuleAddr("client.dll");
    CheatFeature* glow = new GlowFeature();

    while (true) {
        glow->Execute(mem, client);
        Sleep(1);
    }

    delete glow;
    return 0;
}
