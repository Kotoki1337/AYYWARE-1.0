/*
Syn's AyyWare Framework 2015
*/

#pragma once

#include "MiscDefinitions.h"
#include "ClientRecvProps.h"
#include "offsets.h"
#include "Vector.h"

#define TEAM_CS_T 2
#define TEAM_CS_CT 3

#define BONE_USED_BY_HITBOX			0x00000100

#define ptr( x, x1, x2 ) *(x*)( (DWORD)x1 + (DWORD)x2 )

class IClientRenderable;
class IClientNetworkable;
class IClientUnknown;
class IClientThinkable;
class IClientEntity;
class CSWeaponInfo;

class CSWeaponInfo
{
public:
	char _0x0000[20];
	__int32 max_clip;			//0x0014 
	char _0x0018[12];
	__int32 max_reserved_ammo;	//0x0024 
	char _0x0028[96];
	char* hud_name;				//0x0088 
	char* weapon_name;			//0x008C 
	char _0x0090[60];
	__int32 type;				//0x00CC 
	__int32 price;				//0x00D0 
	__int32 reward;				//0x00D4 
	char _0x00D8[20];
	BYTE full_auto;				//0x00EC 
	char _0x00ED[3];
	__int32 damage;				//0x00F0 
	float armor_ratio;			//0x00F4 
	__int32 bullets;			//0x00F8 
	float penetration;			//0x00FC 
	char _0x0100[8];
	float range;				//0x0108 
	float range_modifier;		//0x010C 
	char _0x0110[16];
	BYTE silencer;				//0x0120 
	char _0x0121[15];
	float max_speed;			//0x0130 
	float max_speed_alt;		//0x0134 
	char _0x0138[76];
	__int32 recoil_seed;		//0x0184 
	char _0x0188[32];

};//Size=0x240

enum class CSGOClassID
{
	CTestTraceline = 217,
	CTEWorldDecal = 218,
	CTESpriteSpray = 215,
	CTESprite = 214,
	CTESparks = 213,
	CTESmoke = 212,
	CTEShowLine = 210,
	CTEProjectedDecal = 207,
	CFEPlayerDecal = 69,
	CTEPlayerDecal = 206,
	CTEPhysicsProp = 203,
	CTEParticleSystem = 202,
	CTEMuzzleFlash = 201,
	CTELargeFunnel = 199,
	CTEKillPlayerAttachments = 198,
	CTEImpact = 197,
	CTEGlowSprite = 196,
	CTEShatterSurface = 209,
	CTEFootprintDecal = 193,
	CTEFizz = 192,
	CTEExplosion = 190,
	CTEEnergySplash = 189,
	CTEEffectDispatch = 188,
	CTEDynamicLight = 187,
	CTEDecal = 185,
	CTEClientProjectile = 184,
	CTEBubbleTrail = 183,
	CTEBubbles = 182,
	CTEBSPDecal = 181,
	CTEBreakModel = 180,
	CTEBloodStream = 179,
	CTEBloodSprite = 178,
	CTEBeamSpline = 177,
	CTEBeamRingPoint = 176,
	CTEBeamRing = 175,
	CTEBeamPoints = 174,
	CTEBeamLaser = 173,
	CTEBeamFollow = 172,
	CTEBeamEnts = 171,
	CTEBeamEntPoint = 170,
	CTEBaseBeam = 169,
	CTEArmorRicochet = 168,
	CTEMetalSparks = 200,
	CSteamJet = 161,
	CSmokeStack = 154,
	DustTrail = 268,
	CFireTrail = 72,
	SporeTrail = 274,
	SporeExplosion = 273,
	RocketTrail = 271,
	SmokeTrail = 272,
	CPropVehicleDriveable = 141,
	ParticleSmokeGrenade = 270,
	CParticleFire = 114,
	MovieExplosion = 269,
	CTEGaussExplosion = 195,
	CEnvQuadraticBeam = 64,
	CEmbers = 53,
	CEnvWind = 68,
	CPrecipitation = 134,
	CPrecipitationBlocker = 135,
	CBaseTempEntity = 18,
	NextBotCombatCharacter = 0,
	CEconWearable = 52,
	CBaseAttributableItem = 4,
	CEconEntity = 51,
	CWeaponXM1014 = 265,
	CWeaponTaser = 260,
	CTablet = 165,
	CSmokeGrenade = 152,
	CWeaponSG552 = 257,
	CSensorGrenade = 148,
	CWeaponSawedoff = 253,
	CWeaponNOVA = 249,
	CIncendiaryGrenade = 97,
	CMolotovGrenade = 110,
	CMelee = 109,
	CWeaponM3 = 241,
	CKnifeGG = 106,
	CKnife = 105,
	CHEGrenade = 94,
	CFlashbang = 75,
	CFists = 74,
	CWeaponElite = 232,
	CDecoyGrenade = 45,
	CDEagle = 44,
	CWeaponUSP = 264,
	CWeaponM249 = 240,
	CWeaponUMP45 = 263,
	CWeaponTMP = 262,
	CWeaponTec9 = 261,
	CWeaponSSG08 = 259,
	CWeaponSG556 = 258,
	CWeaponSG550 = 256,
	CWeaponScout = 255,
	CWeaponSCAR20 = 254,
	CSCAR17 = 146,
	CWeaponP90 = 252,
	CWeaponP250 = 251,
	CWeaponP228 = 250,
	CWeaponNegev = 248,
	CWeaponMP9 = 247,
	CWeaponMP7 = 246,
	CWeaponMP5Navy = 245,
	CWeaponMag7 = 244,
	CWeaponMAC10 = 243,
	CWeaponM4A1 = 242,
	CWeaponHKP2000 = 239,
	CWeaponGlock = 238,
	CWeaponGalilAR = 237,
	CWeaponGalil = 236,
	CWeaponG3SG1 = 235,
	CWeaponFiveSeven = 234,
	CWeaponFamas = 233,
	CWeaponBizon = 228,
	CWeaponAWP = 226,
	CWeaponAug = 225,
	CAK47 = 1,
	CWeaponCSBaseGun = 230,
	CWeaponCSBase = 229,
	CC4 = 32,
	CBreachCharge = 28,
	CBreachChargeProjectile = 29,
	CWeaponBaseItem = 227,
	CBaseCSGrenade = 8,
	CSmokeGrenadeProjectile = 153,
	CSensorGrenadeProjectile = 149,
	CMolotovProjectile = 111,
	CItem_Healthshot = 102,
	CItemDogtags = 104,
	CDecoyProjectile = 46,
	CPhysPropRadarJammer = 124,
	CPhysPropWeaponUpgrade = 125,
	CPhysPropAmmoBox = 122,
	CPhysPropLootCrate = 123,
	CItemCash = 103,
	CEnvGasCanister = 61,
	CDronegun = 48,
	CParadropChopper = 113,
	CSurvivalSpawnChopper = 164,
	CBRC4Target = 27,
	CInfoMapRegion = 100,
	CFireCrackerBlast = 70,
	CInferno = 98,
	CChicken = 34,
	CDrone = 47,
	CFootstepControl = 77,
	CCSGameRulesProxy = 37,
	CWeaponCubemap = 0,
	CWeaponCycler = 231,
	CTEPlantBomb = 204,
	CTEFireBullets = 191,
	CTERadioIcon = 208,
	CPlantedC4 = 126,
	CCSTeam = 41,
	CCSPlayerResource = 39,
	CCSPlayer = 38,
	CCSRagdoll = 40,
	CTEPlayerAnimEvent = 205,
	CHostage = 95,
	CHostageCarriableProp = 96,
	CBaseCSGrenadeProjectile = 9,
	CHandleTest = 93,
	CTeamplayRoundBasedRulesProxy = 167,
	CSpriteTrail = 159,
	CSpriteOriented = 158,
	CSprite = 157,
	CRagdollPropAttached = 144,
	CRagdollProp = 143,
	CPropCounter = 138,
	CPredictedViewModel = 136,
	CPoseController = 132,
	CGrassBurn = 92,
	CGameRulesProxy = 91,
	CInfoLadderDismount = 99,
	CFuncLadder = 83,
	CTEFoundryHelpers = 194,
	CEnvDetailController = 59,
	CDangerZone = 42,
	CDangerZoneController = 43,
	CWorldVguiText = 267,
	CWorld = 266,
	CWaterLODControl = 224,
	CWaterBullet = 223,
	CVoteController = 222,
	CVGuiScreen = 221,
	CPropJeep = 140,
	CPropVehicleChoreoGeneric = 0,
	CTriggerSoundOperator = 220,
	CBaseVPhysicsTrigger = 22,
	CTriggerPlayerMovement = 219,
	CBaseTrigger = 20,
	CTest_ProxyToggle_Networkable = 216,
	CTesla = 211,
	CBaseTeamObjectiveResource = 17,
	CTeam = 166,
	CSunlightShadowControl = 163,
	CSun = 162,
	CParticlePerformanceMonitor = 115,
	CSpotlightEnd = 156,
	CSpatialEntity = 155,
	CSlideshowDisplay = 151,
	CShadowControl = 150,
	CSceneEntity = 147,
	CRopeKeyframe = 145,
	CRagdollManager = 142,
	CPhysicsPropMultiplayer = 120,
	CPhysBoxMultiplayer = 118,
	CPropDoorRotating = 139,
	CBasePropDoor = 16,
	CDynamicProp = 50,
	CProp_Hallucination = 137,
	CPostProcessController = 133,
	CPointWorldText = 131,
	CPointCommentaryNode = 130,
	CPointCamera = 129,
	CPlayerResource = 128,
	CPlasma = 127,
	CPhysMagnet = 121,
	CPhysicsProp = 119,
	CStatueProp = 160,
	CPhysBox = 117,
	CParticleSystem = 116,
	CMovieDisplay = 112,
	CMaterialModifyControl = 108,
	CLightGlow = 107,
	CItemAssaultSuitUseable = 0,
	CItem = 0,
	CInfoOverlayAccessor = 101,
	CFuncTrackTrain = 90,
	CFuncSmokeVolume = 89,
	CFuncRotating = 88,
	CFuncReflectiveGlass = 87,
	CFuncOccluder = 86,
	CFuncMoveLinear = 85,
	CFuncMonitor = 84,
	CFunc_LOD = 79,
	CTEDust = 186,
	CFunc_Dust = 78,
	CFuncConveyor = 82,
	CFuncBrush = 81,
	CBreakableSurface = 31,
	CFuncAreaPortalWindow = 80,
	CFish = 73,
	CFireSmoke = 71,
	CEnvTonemapController = 67,
	CEnvScreenEffect = 65,
	CEnvScreenOverlay = 66,
	CEnvProjectedTexture = 63,
	CEnvParticleScript = 62,
	CFogController = 76,
	CEnvDOFController = 60,
	CCascadeLight = 33,
	CEnvAmbientLight = 58,
	CEntityParticleTrail = 57,
	CEntityFreezing = 56,
	CEntityFlame = 55,
	CEntityDissolve = 54,
	CDynamicLight = 49,
	CColorCorrectionVolume = 36,
	CColorCorrection = 35,
	CBreakableProp = 30,
	CBeamSpotlight = 25,
	CBaseButton = 5,
	CBaseToggle = 19,
	CBasePlayer = 15,
	CBaseFlex = 12,
	CBaseEntity = 11,
	CBaseDoor = 10,
	CBaseCombatCharacter = 6,
	CBaseAnimatingOverlay = 3,
	CBoneFollower = 26,
	CBaseAnimating = 2,
	CAI_BaseNPC = 0,
	CBeam = 24,
	CBaseViewModel = 21,
	CBaseParticleEntity = 14,
	CBaseGrenade = 13,
	CBaseCombatWeapon = 7,
	CBaseWeaponWorldModel = 23
};

enum moveTypes
{
	MOVETYPE_NONE = 0,			// never moves
	MOVETYPE_ISOMETRIC,					// For players -- in TF2 commander view, etc.
	MOVETYPE_WALK,						// Player only - moving on the ground
	MOVETYPE_STEP,						// gravity, special edge handling -- monsters use this
	MOVETYPE_FLY,						// No gravity, but still collides with stuff
	MOVETYPE_FLYGRAVITY,				// flies through the air + is affected by gravity
	MOVETYPE_VPHYSICS,					// uses VPHYSICS for simulation
	MOVETYPE_PUSH,						// no clip to world, push and crush
	MOVETYPE_NOCLIP,					// No gravity, no collisions, still do velocity/avelocity
	MOVETYPE_LADDER,					// Used by players only when going onto a ladder
	MOVETYPE_OBSERVER,					// Observer movement, depends on player's observer mode
	MOVETYPE_CUSTOM,					// Allows the entity to describe its own physics
	MOVETYPE_LAST = MOVETYPE_CUSTOM,	// should always be defined as the last item in the list
	MOVETYPE_MAX_BITS = 4
};

enum class CSGOHitboxID
{
	Head,
	Neck,
	Pelvis,
	Stomach,
	LowerChest,
	Chest,
	UpperChest,
	RightThigh,
	LeftThigh,
	RightShin,
	LeftShin,
	RightFoot,
	LeftFoot,
	RightHand,
	LeftHand,
	RightUpperArm,
	RightLowerArm,
	LeftUpperArm,
	LeftLowerArm,
	Max,
};

// Weapon IDs
enum ItemDefinitionIndex : short
{
	ITEM_NONE = 0,
	WEAPON_DEAGLE = 1,
	WEAPON_ELITE = 2,
	WEAPON_FIVESEVEN = 3,
	WEAPON_GLOCK = 4,
	WEAPON_AK47 = 7,
	WEAPON_AUG = 8,
	WEAPON_AWP = 9,
	WEAPON_FAMAS = 10,
	WEAPON_G3SG1 = 11,
	WEAPON_GALILAR = 13,
	WEAPON_M249 = 14,
	WEAPON_M4A1 = 16,
	WEAPON_MAC10 = 17,
	WEAPON_P90 = 19,
	WEAPON_UMP45 = 24,
	WEAPON_XM1014 = 25,
	WEAPON_BIZON = 26,
	WEAPON_MAG7 = 27,
	WEAPON_NEGEV = 28,
	WEAPON_SAWEDOFF = 29,
	WEAPON_TEC9 = 30,
	WEAPON_TASER = 31,
	WEAPON_HKP2000 = 32,
	WEAPON_MP7 = 33,
	WEAPON_MP9 = 34,
	WEAPON_NOVA = 35,
	WEAPON_P250 = 36,
	WEAPON_SCAR20 = 38,
	WEAPON_SG556 = 39,
	WEAPON_SSG08 = 40,
	WEAPON_KNIFE = 42,
	WEAPON_FLASHBANG = 43,
	WEAPON_HEGRENADE = 44,
	WEAPON_SMOKEGRENADE = 45,
	WEAPON_MOLOTOV = 46,
	WEAPON_DECOY = 47,
	WEAPON_INCGRENADE = 48,
	WEAPON_C4 = 49,
	WEAPON_KNIFE_T = 59,
	WEAPON_M4A1_SILENCER = 60,
	WEAPON_USP_SILENCER = 61,
	WEAPON_CZ75A = 63,
	WEAPON_REVOLVER = 64,
	WEAPON_KNIFE_BAYONET = 500,
	WEAPON_KNIFE_FLIP = 505,
	WEAPON_KNIFE_GUT = 506,
	WEAPON_KNIFE_KARAMBIT = 507,
	WEAPON_KNIFE_M9_BAYONET = 508,
	WEAPON_KNIFE_TACTICAL = 509,
	WEAPON_KNIFE_FALCHION = 512,
	WEAPON_KNIFE_SURVIVAL_BOWIE = 514,
	WEAPON_KNIFE_BUTTERFLY = 515,
	WEAPON_KNIFE_PUSH = 516,
	GLOVE_STUDDED_BLOODHOUND = 5027,
	GLOVE_T_SIDE = 5028,
	GLOVE_CT_SIDE = 5029,
	GLOVE_SPORTY = 5030,
	GLOVE_SLICK = 5031,
	GLOVE_LEATHER_WRAP = 5032,
	GLOVE_MOTORCYCLE = 5033,
	GLOVE_SPECIALIST = 5034,
	MAX_ITEMDEFINITIONINDEX
};

class ScriptCreatedItem
{
public:
	CPNETVAR_FUNC(short*, ItemDefinitionIndex, 0xE67AB3B8); //m_iItemDefinitionIndex
	CPNETVAR_FUNC(int*, ItemIDHigh, 0x714778A); //m_iItemIDHigh
	CPNETVAR_FUNC(int*, ItemIDLow, 0x3A3DFC74); //m_iItemIDLow
	CPNETVAR_FUNC(int*, AccountID, 0x24abbea8); //m_iAccountID
};

class AttributeContainer
{
public:
	CPNETVAR_FUNC(ScriptCreatedItem*, m_Item, 0x7E029CE5);
};

class CBaseCombatWeapon
{
public:
	CNETVAR_FUNC(float, GetNextPrimaryAttack, 0xDB7B106E); //m_flNextPrimaryAttack
	CNETVAR_FUNC(int, GetAmmoInClip, 0x97B6F70C); //m_iClip1
	CNETVAR_FUNC(HANDLE, GetOwnerHandle, 0xC32DF98D); //m_hOwner
	CNETVAR_FUNC(float, GetAccuracyPenalty, 0xE2958A63); //m_fAccuracyPenalty
	CNETVAR_FUNC(Vector, GetOrigin, 0x1231CE10); //m_vecOrigin
	CPNETVAR_FUNC(int*, FallbackPaintKit, 0xADE4C870);
	CPNETVAR_FUNC(int*, FallbackSeed, 0xC2D0683D); // m_nFallbackSeed
	CPNETVAR_FUNC(float*, FallbackWear, 0xA263576C); //m_flFallbackWear
	CPNETVAR_FUNC(int*, FallbackStatTrak, 0x1ED78768); //m_nFallbackStatTrak
	CPNETVAR_FUNC(int*, OwnerXuidLow, 0xAD8D897F);
	CPNETVAR_FUNC(int*, OwnerXuidHigh, 0x90511E77);
	CPNETVAR_FUNC(int*, ViewModelIndex, 0x7F7C89C1);
	CPNETVAR_FUNC(int*, ModelIndex, 0x27016F83);
	CPNETVAR_FUNC(int*, WorldModelIndex, 0x4D8AD9F3);
	CPNETVAR_FUNC(char*, szCustomName, 0x0);
	CPNETVAR_FUNC(AttributeContainer*, m_AttributeManager, 0xCFFCE089);
	CNETVAR_FUNC(int, GetZoomLevel, 0x26553F1A);

	float GetInaccuracy()
	{
		typedef float(__thiscall* oInaccuracy)(PVOID);
		return call_vfunc< oInaccuracy >(this, 471)
			(this);
	}

	float GetSpread()
	{
		typedef float(__thiscall *OrigFn)(void *);
		return call_vfunc<OrigFn>(this, 439)(this);
	}

	void PreDataUpdate(int updateType)
	{
		PVOID pNetworkable = (PVOID)((DWORD)(this) + 0x8);
		typedef void(__thiscall* OriginalFn)(PVOID, int);
		return call_vfunc<OriginalFn>(pNetworkable, 6)(pNetworkable, updateType);
	}

	void UpdateAccPenalty()
	{
		typedef void(__thiscall *OrigFn)(void *);
		return call_vfunc<OrigFn>(this, 472)(this);
	}

	bool IsScoped(int x = 0)
	{
		return GetZoomLevel() > 0;
	}

	CSWeaponInfo* GetCSWpnData()
	{
		if (!this)
			return nullptr;
		typedef CSWeaponInfo*(__thiscall* OriginalFn)(void*);
		return call_vfunc< OriginalFn >(this, 448)(this);
		return nullptr;
	}
};

class CCSBomb
{
public:
	float GetC4DefuseCountDown()
	{
		return *(float*)((uintptr_t)this + GET_NETVAR("DT_PlantedC4", "m_flDefuseCountDown"));
	}
	int GetBombDefuser()
	{
		return *(int*)((uintptr_t)this + GET_NETVAR("DT_PlantedC4", "m_hBombDefuser"));
	}
	float GetC4BlowTime()
	{
		return *(float*)((uintptr_t)this + GET_NETVAR("DT_PlantedC4", "m_flC4Blow"));
	}
	bool IsBombDefused()
	{
		return *(bool*)((uintptr_t)this + GET_NETVAR("DT_PlantedC4", "m_bBombDefused"));
	}
};

class CLocalPlayerExclusive
{
public:
	CNETVAR_FUNC(Vector, GetViewPunchAngle, 0x68F014C0);//m_viewPunchAngle
	CNETVAR_FUNC(Vector, GetAimPunchAngle, 0xBF25C290);//m_aimPunchAngle
	CNETVAR_FUNC(Vector, GetAimPunchAngleVel, 0x8425E045);//m_aimPunchAngleVel
};

class CollisionProperty
{
public:
	CNETVAR_FUNC(Vector, GetMins, 0xF6F78BAB);//m_vecMins
	CNETVAR_FUNC(Vector, GetMaxs, 0xE47C6FC4);//m_vecMaxs
	CNETVAR_FUNC(unsigned char, GetSolidType, 0xB86722A1);//m_nSolidType
	CNETVAR_FUNC(unsigned short, GetSolidFlags, 0x63BB24C1);//m_usSolidFlags
	CNETVAR_FUNC(int, GetSurroundsType, 0xB677A0BB); //m_nSurroundType
	bool IsSolid()
	{
		return (GetSolidType() != SOLID_NONE) && ((GetSolidFlags() & FSOLID_NOT_SOLID) == 0);
	}
};

class IClientRenderable
{
public:
	//virtual void*					GetIClientUnknown() = 0;
	virtual Vector const&			GetRenderOrigin(void) = 0;
	virtual Vector const&			GetRenderAngles(void) = 0;
	virtual bool					ShouldDraw(void) = 0;
	virtual bool					IsTransparent(void) = 0;
	virtual bool					UsesPowerOfTwoFrameBufferTexture() = 0;
	virtual bool					UsesFullFrameBufferTexture() = 0;
	virtual void					GetShadowHandle() const = 0;
	virtual void*					RenderHandle() = 0;
	virtual const model_t*				GetModel() const = 0;
	virtual int						DrawModel(int flags) = 0;
	virtual int						GetBody() = 0;
	virtual void					ComputeFxBlend() = 0;

	bool SetupBones(matrix3x4 *pBoneToWorldOut, int nMaxBones, int boneMask, float currentTime)
	{
		typedef bool(__thiscall* oSetupBones)(PVOID, matrix3x4*, int, int, float);
		return call_vfunc< oSetupBones>(this, 13)(this, pBoneToWorldOut, nMaxBones, boneMask, currentTime);
	}
};

class IClientNetworkable
{
public:
	virtual IClientUnknown*	GetIClientUnknown() = 0;
	virtual void			Release() = 0;
	virtual ClientClass*	GetClientClass() = 0;// FOR NETVARS FIND YOURSELF ClientClass* stuffs
	virtual void			NotifyShouldTransmit( /* ShouldTransmitState_t state*/) = 0;
	virtual void			OnPreDataChanged( /*DataUpdateType_t updateType*/) = 0;
	virtual void			OnDataChanged( /*DataUpdateType_t updateType*/) = 0;
	virtual void			PreDataUpdate( /*DataUpdateType_t updateType*/) = 0;
	virtual void			PostDataUpdate( /*DataUpdateType_t updateType*/) = 0;
	virtual void			unknown();
	virtual bool			IsDormant(void) = 0;
	virtual int				GetIndex(void) const = 0;
	virtual void			ReceiveMessage(int classID /*, bf_read &msg*/) = 0;
	virtual void*			GetDataTableBasePtr() = 0;
	virtual void			SetDestroyedOnRecreateEntities(void) = 0;
};
class ICollideable
{
public:
	virtual void pad0();
	virtual const Vector& OBBMins() const;
	virtual const Vector& OBBMaxs() const;
};
class IClientUnknown
{
public:
	ICollideable * GetCollideable()
	{
		return (ICollideable*)((DWORD)this + 0x318);
	}
	virtual IClientNetworkable*	GetClientNetworkable() = 0;
	virtual IClientRenderable*	GetClientRenderable() = 0;
	virtual IClientEntity*		GetIClientEntity() = 0;
	virtual IClientEntity*		GetBaseEntity() = 0;
	virtual IClientThinkable*	GetClientThinkable() = 0;
	IClientRenderable* GetRenderable()
	{
		return reinterpret_cast<IClientRenderable*>((DWORD)this + 0x4);
	}
};

class IClientThinkable
{
public:
	virtual IClientUnknown*		GetIClientUnknown() = 0;
	virtual void				ClientThink() = 0;
	virtual void*				GetThinkHandle() = 0;
	virtual void				SetThinkHandle(void* hThink) = 0;
	virtual void				Release() = 0;
};

class CBaseClients
{
public:
	char pad[3];
	char bUnknown; //0x4
	char pad2[91];
	void* pBaseEntity; //0x60
	void* pActiveWeapon; //0x64
	void* pLastActiveWeapon; //0x68
	float m_flLastClientSideUpdateTime; //0x6C
	int m_iLastClientSideUpdateFramecount; //0x70
	float m_flEyePitch; //0x74
	float m_flEyeYaw; //0x78
	float m_flPitch; //0x7C
	float m_flGoalFeetYaw; //0x80
	float m_flCurrentFeetYaw; //0x84
	float m_flCurrentTorsoYaw; //0x88
	float m_flUnknownVelocityLean; //0x8C //changes when moving/jumping/hitting ground
	float m_flLeanAmount; //0x90
	char pad4[4]; //NaN
	float m_flFeetCycle; //0x98 0 to 1
	float m_flFeetYawRate; //0x9C 0 to 1
	float m_fUnknown2;
	float m_fDuckAmount; //0xA4
	float m_fLandingDuckAdditiveSomething; //0xA8
	float m_fUnknown3; //0xAC
	Vector m_vOrigin; //0xB0, 0xB4, 0xB8
	Vector m_vLastOrigin; //0xBC, 0xC0, 0xC4
	float m_vVelocityX; //0xC8
	float m_vVelocityY; //0xCC
	char pad5[4];
	float m_flUnknownFloat1; //0xD4 Affected by movement and direction
	char pad6[8];
	float m_flUnknownFloat2; //0xE0 //from -1 to 1 when moving and affected by direction
	float m_flUnknownFloat3; //0xE4 //from -1 to 1 when moving and affected by direction
	float m_unknown; //0xE8
	float speed_2d; //0xEC
	float flUpVelocity; //0xF0
	float m_flSpeedNormalized; //0xF4 //from 0 to 1
	float m_flFeetSpeedForwardsOrSideWays; //0xF8 //from 0 to 2. something  is 1 when walking, 2.something when running, 0.653 when crouch walking
	float m_flFeetSpeedUnknownForwardOrSideways; //0xFC //from 0 to 3. something
	float m_flTimeSinceStartedMoving; //0x100
	float m_flTimeSinceStoppedMoving; //0x104
	unsigned char m_bOnGround; //0x108
	unsigned char m_bInHitGround; //0x109
	char pad7[10];
	float m_flLastOriginZ; //0x114
	float m_flHeadHeightOrOffsetFromHittingGround; //0x118 from 0 to 1, is 1 when standing
	float m_flStopToFullRunningFraction; //0x11C from 0 to 1, doesnt change when walking or crouching, only running
	char pad8[4]; //NaN
	float m_flUnknownFraction; //0x124 affected while jumping and running, or when just jumping, 0 to 1
	char pad9[4]; //NaN
	float m_flUnknown3;
	char pad10[528];
};

class __declspec (novtable)IClientEntity : public IClientUnknown, public IClientRenderable, public IClientNetworkable, public IClientThinkable
{
public:
public:
	virtual void			Release(void) = 0;
	virtual void			blahblahpad(void) = 0;
	virtual Vector&	GetAbsOrigin(void) const = 0;//in broken place use GetOrigin Below
	virtual const Vector&	GetAbsAngles(void) const = 0;

	//---                 NetVars                  ---//

	int GetGlowIndex()
	{
		return *(int*)(this + 0xA330);
	}

	CPNETVAR_FUNC(CLocalPlayerExclusive*, localPlayerExclusive, 0x7177BC3E);// m_Local
	CPNETVAR_FUNC(CollisionProperty*, collisionProperty, 0xE477CBD0);//m_Collision
	CPNETVAR_FUNC(Vector*, GetOriginPtr, 0x1231CE10); //m_vecOrigin
	CNETVAR_FUNC(float, GetLowerBodyYaw, 0xE6996CCF); //m_flLowerBodyYawTarget
	CNETVAR_FUNC(int, GetFlags, 0xE456D580); //m_fFlags
	CNETVAR_FUNC(int, GetAmmoInClip, 0x97B6F70C); //m_iClip
	CNETVAR_FUNC(float, GetTargetYaw, 0xE6996CCF);
	CNETVAR_FUNC(Vector, GetOrigin, 0x1231CE10); //m_vecOrigin 0x0134
	CNETVAR_FUNC(Vector, GetRotation, 0x6BEA197A); //m_angRotation
	CNETVAR_FUNC(int, GetTeamNum, 0xC08B6C6E); //m_iTeamNum
	CNETVAR_FUNC(int*, GetPointerFlags, 0xE456D580); //m_fFlags
	CNETVAR_FUNC(HANDLE, GetOwnerHandle, 0xC32DF98D); //m_hOwner
	CNETVAR_FUNC(int, GetMaxHealth, 0xC52E1C28); //m_iMaxHealth
	CNETVAR_FUNC(int, GetHealth, 0xA93054E3); //m_iHealth
	CNETVAR_FUNC(bool, IsDefusing, 0xA2C14106); //m_bIsDefusing
	CNETVAR_FUNC(float, GetFlashDuration, 0x4B5938D5); //m_flFlashDuration
	CNETVAR_FUNC(float, GetFlashAlpha, 0xFE79FB98); //m_flFlashMaxAlpha
	CNETVAR_FUNC(unsigned char, GetLifeState, 0xD795CCFC); //m_lifeState
	CNETVAR_FUNC(HANDLE, GetActiveWeaponHandle, 0xB4FECDA3); //m_hActiveWeapon
	CNETVAR_FUNC(int, GetTickBase, 0xD472B079); //m_nTickBase
	CNETVAR_FUNC(Vector, GetViewOffset, 0xA9F74931); //m_vecViewOffset[0]
	CNETVAR_FUNC(Vector, GetViewPunch, 0x68F014C0);
	CNETVAR_FUNC(int, GetMoney, 0xF4B3E183); //m_iAccount
	CNETVAR_FUNC(Vector, GetPunch, 0xBF25C290);
	CNETVAR_FUNC(Vector, GetVelocity, 0x40C1CA24); //GetVelocity[0]
	CNETVAR_FUNC(bool, HasGunGameImmunity, 0x6AD6FA0D); //m_bGunGameImmunity
	CNETVAR_FUNC(int, ArmorValue, 0x3898634); //m_ArmorValue
	CNETVAR_FUNC(bool, HasHelmet, 0x7B97F18A); //m_bHasHelmet
	CNETVAR_FUNC(int, GetObserverMode, 0x2441D093); // m_iObserverMode
	CNETVAR_FUNC(HANDLE, GetObserverTargetHandle, 0x8660FD83); //m_hObserverTarget
	CNETVAR_FUNC(bool, HasDefuser, 0x32D0F325); //m_bHasDefuser
	CNETVAR_FUNC(int, GetShotsFired, 0x3F2F6C66); //m_nTickBase
	CNETVAR_FUNC(float, GetSimulationTime, 0xC4560E44); //m_flSimulationTime
	CNETVAR_FUNC(float, GetAnimTime, 0xD27E8416);
	CNETVAR_FUNC(bool, IsScoped, 0x61B9C22C); //m_bIsScoped	//CNETVAR_FUNC(int, GetPlayerCompRank, 0x75671F7F);
	// ----------------------------------------------//

	bool IsAlive()
	{
		return (GetLifeState() == LIFE_ALIVE && GetHealth() > 0);
	}

	int GetMoveType() 
	{
		if (!this)
			return 0;

		return ptr(int, this, 0x258);
	}

	void UpdateClientSideAnimation()
	{
		typedef void(__thiscall* original)(void*);
		return call_vfunc<original>(this, 219)(this);
	}

	Vector get_ragdoll_pos()
	{
		return *reinterpret_cast<Vector*>(uintptr_t(this) + GET_NETVAR("DT_Ragdoll", "m_ragPos"));

	}

	void SetAbsAngles(Vector angles)
	{
		using Fn = void(__thiscall*)(IClientEntity*, const Vector &angles);
		static Fn func;

		if (!func)
			func = (Fn)(Utilities::Memory::FindPattern("client_panorama.dll", (BYTE*)"\x55\x8B\xEC\x83\xE4\xF8\x83\xEC\x64\x53\x56\x57\x8B\xF1\xE8", "xxxxxxxxxxxxxxx"));

		func(this, angles);
	}

	CBaseClients* GetAnimState()
	{
		//0x3900
		return *reinterpret_cast<CBaseClients**>(uintptr_t(this) + (DWORD)0x3900);
	}

	bool& client_side_animation()
	{
		return *reinterpret_cast<bool*>(uintptr_t(this) + GET_NETVAR("DT_BaseAnimating", "m_bClientSideAnimation"));
	}

	QAngle* GetEyeAnglesPointer()
	{
		return reinterpret_cast<QAngle*>((DWORD)this + (DWORD)0x528C);
	}

	QAngle GetEyeAngles()
	{
		return *reinterpret_cast<QAngle*>((DWORD)this + (DWORD)0x528C);
	}

	QAngle GetEyeAnglesXY()
	{
		return *(QAngle*)((DWORD)this + GET_NETVAR("DT_CSPlayer", "m_angEyeAngles"));
	}

	/*
	QAngle* GetEyeAnglesXY()
	{
		return (QAngle*)((DWORD)this + GET_NETVAR("DT_CSPlayer", "m_angEyeAngles"));
	}
	*/

	Vector GetBonePos(int i)
	{
		matrix3x4 boneMatrix[128];
		if (this->SetupBones(boneMatrix, 128, BONE_USED_BY_HITBOX, GetTickCount64()))
		{
			return Vector(boneMatrix[i][0][3], boneMatrix[i][1][3], boneMatrix[i][2][3]);
		}
		return Vector(0, 0, 0);
	}

	Vector GetHeadPos()
	{
		return this->GetBonePos(6);
	}

	Vector GetHeadAngle()
	{
		return GetAbsOrigin() + GetViewOffset();
	}

	bool IsPlayer()
	{
		return GetClientClass()->m_ClassID == (int)CSGOClassID::CCSPlayer;
	}

	Vector GetOrigin2() {
		return *(Vector*)((DWORD)this + 0x00000134);
	}

	Vector GetViewAngles2() {
		return *(Vector*)((DWORD)this + 0x00000104);
	}

	Vector GetAbsOrigin2() {
		__asm {
			MOV ECX, this
			MOV EAX, DWORD PTR DS : [ECX]
			CALL DWORD PTR DS : [EAX + 0x28]
		}
	}

	Vector GetAbsAngles2() {
		__asm {
			MOV ECX, this;
			MOV EAX, DWORD PTR DS : [ECX];
			CALL DWORD PTR DS : [EAX + 0x2C]
		}
	}
	
	Vector GetEyePosition() {
		Vector Origin = *(Vector*)((DWORD)this + 0x00000134);
		Vector View = *(Vector*)((DWORD)this + 0x00000104);
		return(Origin + View);
	}

	Vector GetAimPunch() {
		return *(Vector*)((DWORD)this + 0x00003018);
	}

	bool IsImmune() {
		return *(bool*)((DWORD)this + 0x000038A0);
	}

	ClientClass *GetClientClass2() {
		PVOID Networkable = (PVOID)((DWORD)(this) + 0x8);
		using Original = ClientClass * (__thiscall*)(PVOID);
		return call_vfunc<Original>(Networkable, 2)(Networkable);
	}

	HANDLE GetWeaponHandle() {
		return *(HANDLE*)((DWORD)this + 0x00002EE8);
	}
};