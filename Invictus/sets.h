#pragma once
#include <cstdint>

// 2023-04-23 16:01:43.924993100 UTC

namespace sets {

		constexpr auto cs_gamerules_data = 0x0;
		constexpr auto m_ArmorValue = 0x117CC;
		constexpr auto m_Collision = 0x320;
		constexpr auto m_CollisionGroup = 0x474;
		constexpr auto m_Local = 0x2FCC;
		constexpr auto m_MoveType = 0x25C;
		constexpr auto m_OriginalOwnerXuidHigh = 0x31D4;
		constexpr auto m_OriginalOwnerXuidLow = 0x31D0;
		constexpr auto m_SurvivalGameRuleDecisionTypes = 0x1328;
		constexpr auto m_SurvivalRules = 0xD00;
		constexpr auto m_aimPunchAngle = 0x303C;
		constexpr auto m_aimPunchAngleVel = 0x3048;
		constexpr auto m_angEyeAnglesX = 0x117D0;
		constexpr auto m_angEyeAnglesY = 0x117D4;
		constexpr auto m_bBombDefused = 0x29C0;
		constexpr auto m_bBombPlanted = 0x9A5;
		constexpr auto m_bBombTicking = 0x2990;
		constexpr auto m_bFreezePeriod = 0x20;
		constexpr auto m_bGunGameImmunity = 0x9990;
		constexpr auto m_bHasDefuser = 0x117DC;
		constexpr auto m_bHasHelmet = 0x117C0;
		constexpr auto m_bInReload = 0x32B5;
		constexpr auto m_bIsDefusing = 0x997C;
		constexpr auto m_bIsQueuedMatchmaking = 0x74;
		constexpr auto m_bIsScoped = 0x9974;
		constexpr auto m_bIsValveDS = 0x7C;
		constexpr auto m_bSpotted = 0x93D;
		constexpr auto m_bSpottedByMask = 0x980;
		constexpr auto m_bStartedArming = 0x3400;
		constexpr auto m_bUseCustomAutoExposureMax = 0x9D9;
		constexpr auto m_bUseCustomAutoExposureMin = 0x9D8;
		constexpr auto m_bUseCustomBloomScale = 0x9DA;
		constexpr auto m_clrRender = 0x70;
		constexpr auto m_dwBoneMatrix = 0x26A8;
		constexpr auto m_fAccuracyPenalty = 0x3340;
		constexpr auto m_fFlags = 0x104;
		constexpr auto m_flC4Blow = 0x29A0;
		constexpr auto m_flCustomAutoExposureMax = 0x9E0;
		constexpr auto m_flCustomAutoExposureMin = 0x9DC;
		constexpr auto m_flCustomBloomScale = 0x9E4;
		constexpr auto m_flDefuseCountDown = 0x29BC;
		constexpr auto m_flDefuseLength = 0x29B8;
		constexpr auto m_flFallbackWear = 0x31E0;
		constexpr auto m_flFlashDuration = 0x10470;
		constexpr auto m_flFlashMaxAlpha = 0x1046C;
		constexpr auto m_flLastBoneSetupTime = 0x2928;
		constexpr auto m_flLowerBodyYawTarget = 0x9ADC;
		constexpr auto m_flNextAttack = 0x2D80;
		constexpr auto m_flNextPrimaryAttack = 0x3248;
		constexpr auto m_flSimulationTime = 0x268;
		constexpr auto m_flTimerLength = 0x29A4;
		constexpr auto m_hActiveWeapon = 0x2F08;
		constexpr auto m_hBombDefuser = 0x29C4;
		constexpr auto m_hMyWeapons = 0x2E08;
		constexpr auto m_hObserverTarget = 0x339C;
		constexpr auto m_hOwner = 0x29DC;
		constexpr auto m_hOwnerEntity = 0x14C;
		constexpr auto m_hViewModel = 0x3308;
		constexpr auto m_iAccountID = 0x2FD8;
		constexpr auto m_iClip1 = 0x3274;
		constexpr auto m_iCompetitiveRanking = 0x1A84;
		constexpr auto m_iCompetitiveWins = 0x1B88;
		constexpr auto m_iCrosshairId = 0x11838;
		constexpr auto m_iDefaultFOV = 0x333C;
		constexpr auto m_iEntityQuality = 0x2FBC;
		constexpr auto m_iFOV = 0x31F4;
		constexpr auto m_iFOVStart = 0x31F8;
		constexpr auto m_iGlowIndex = 0x10488;
		constexpr auto m_iHealth = 0x100;
		constexpr auto m_iItemDefinitionIndex = 0x2FBA;
		constexpr auto m_iItemIDHigh = 0x2FD0;
		constexpr auto m_iMostRecentModelBoneCounter = 0x2690;
		constexpr auto m_iObserverMode = 0x3388;
		constexpr auto m_iShotsFired = 0x103E0;
		constexpr auto m_iState = 0x3268;
		constexpr auto m_iTeamNum = 0xF4;
		constexpr auto m_lifeState = 0x25F;
		constexpr auto m_nBombSite = 0x2994;
		constexpr auto m_nFallbackPaintKit = 0x31D8;
		constexpr auto m_nFallbackSeed = 0x31DC;
		constexpr auto m_nFallbackStatTrak = 0x31E4;
		constexpr auto m_nForceBone = 0x268C;
		constexpr auto m_nModelIndex = 0x258;
		constexpr auto m_nTickBase = 0x3440;
		constexpr auto m_nViewModelIndex = 0x29D0;
		constexpr auto m_rgflCoordinateFrame = 0x444;
		constexpr auto m_szCustomName = 0x304C;
		constexpr auto m_szLastPlaceName = 0x35C4;
		constexpr auto m_thirdPersonViewAngles = 0x31E8;
		constexpr auto m_vecOrigin = 0x138;
		constexpr auto m_vecVelocity = 0x114;
		constexpr auto m_vecViewOffset = 0x108;
		constexpr auto m_viewPunchAngle = 0x3030;
		constexpr auto m_zoomLevel = 0x33E0;
		constexpr auto anim_overlays = 0x2990;
		constexpr auto clientstate_choked_commands = 0x4D30;
		constexpr auto clientstate_delta_ticks = 0x174;
		constexpr auto clientstate_last_outgoing_command = 0x4D2C;
		constexpr auto clientstate_net_channel = 0x9C;
		constexpr auto convar_name_hash_table = 0x301A0;
		constexpr auto dwClientState = 0x59F19C;
		constexpr auto dwClientState_GetLocalPlayer = 0x180;
		constexpr auto dwClientState_IsHLTV = 0x4D48;
		constexpr auto dwClientState_Map = 0x28C;
		constexpr auto dwClientState_MapDirectory = 0x188;
		constexpr auto dwClientState_MaxPlayer = 0x388;
		constexpr auto dwClientState_PlayerInfo = 0x52C0;
		constexpr auto dwClientState_State = 0x108;
		constexpr auto dwClientState_ViewAngles = 0x4D90;
		constexpr auto dwEntityList = 0x4DFFFB4;
		constexpr auto dwForceAttack = 0x322DDEC;
		constexpr auto dwForceAttack2 = 0x322DDF8;
		constexpr auto dwForceBackward = 0x322DE40;
		constexpr auto dwForceForward = 0x322DE34;
		constexpr auto dwForceJump = 0x52BBD48;
		constexpr auto dwForceLeft = 0x322DE4C;
		constexpr auto dwForceRight = 0x322DDB0;
		constexpr auto dwGameDir = 0x63AD80;
		constexpr auto dwGameRulesProxy = 0x532F56C;
		constexpr auto dwGetAllClasses = 0xE0BF8C;
		constexpr auto dwGlobalVars = 0x59EE60;
		constexpr auto dwGlowObjectManager = 0x535AA70;
		constexpr auto dwInput = 0x525D588;
		constexpr auto dwInterfaceLinkList = 0x99C224;
		constexpr auto dwLocalPlayer = 0xDEA964;
		constexpr auto dwMouseEnable = 0x52391E8;
		constexpr auto dwMouseEnablePtr = 0x52391B8;
		constexpr auto dwPlayerResource = 0x322C160;
		constexpr auto dwRadarBase = 0x5236A8C;
		constexpr auto dwSensitivity = 0xDEEB80;
		constexpr auto dwSensitivityPtr = 0xDEEB80;
		constexpr auto dwSetClanTag = 0x8DA80;
		constexpr auto dwViewMatrix = 0x4DF0DE4;
		constexpr auto dwWeaponTable = 0x525E664;
		constexpr auto dwWeaponTableIndex = 0x326C;
		constexpr auto dwYawPtr = 0xDEE910;
		constexpr auto dwZoomSensitivityRatioPtr = 0xDF4380;
		constexpr auto dwbSendPackets = 0xDD2B2;
		constexpr auto dwppDirect3DDevice9 = 0xA62C0;
		constexpr auto find_hud_element = 0x5AE80090;
		constexpr auto force_update_spectator_glow = 0x3D96FA;
		constexpr auto interface_engine_cvar = 0x3FA9C;
		constexpr auto is_c4_owner = 0x3E6F10;
		constexpr auto m_bDormant = 0xED;
		constexpr auto m_bIsLocalPlayer = 0x3628;
		constexpr auto m_flSpawnTime = 0x103C0;
		constexpr auto m_pStudioHdr = 0x2950;
		constexpr auto m_pitchClassPtr = 0x52390E0;
		constexpr auto m_yawClassPtr = 0xDEE910;
		constexpr auto model_ambient_min = 0x5A1194;
		constexpr auto set_abs_angles = 0x1E76F0;
		constexpr auto set_abs_origin = 0x1E7530;
	} 
 