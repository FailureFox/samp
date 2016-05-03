// ==========================================================
//
// Next available letter:
// er
//
// Free letters:
// ed, en
//
// ==========================================================

	// netrpc (client)
	#define RPC_ServerJoin					"xy"
	#define RPC_ServerQuit					"ab"	
	#define RPC_InitGame					"ac"

	#define RPC_VehicleSpawn				"am"
	#define RPC_VehicleDestroy				"an"
	#define RPC_SetCheckpoint				"ao"
	#define RPC_DisableCheckpoint			"ap"
	#define RPC_SetRaceCheckpoint			"aq"
	#define RPC_DisableRaceCheckpoint		"ar"
	#define RPC_GameModeRestart				"at"
	#define RPC_ConnectionRejected			"au"
	#define RPC_ClientMessage				"av"
	#define RPC_WorldTime					"aw"
	#define RPC_Pickup						"ax"
	#define RPC_DestroyPickup				"ay"
	#define RPC_DestroyWeaponPickup			"az"
	#define RPC_Weather						"bb"
	#define RPC_Instagib					"bc"
	#define RPC_SetTimeEx					"be"
	#define RPC_ToggleClock					"bf"
	
	// netrpc (both)
	#define RPC_Chat						"ad"
	#define RPC_Privmsg						"ae"
	#define RPC_TeamPrivmsg					"af"
	#define RPC_RequestClass				"ag"
	#define RPC_RequestSpawn				"ah"
	#define RPC_Spawn						"ai"
	#define RPC_Death						"aj"
	#define RPC_EnterVehicle				"ak"
	#define RPC_ExitVehicle					"al"
	#define RPC_UpdateScoresPingsIPs		"as"
	#define RPC_SvrStats					"em"
	#define RPC_ScmEvent					"ba"

	
	// scriptrpc
	#define RPC_ScrSetSpawnInfo				"bg"
	#define RPC_ScrSetPlayerTeam			"bh"
	#define RPC_ScrSetPlayerSkin			"bi"
	#define RPC_ScrSetPlayerName			"bj"
	#define RPC_ScrSetPlayerPos				"bk"
	#define RPC_ScrSetPlayerPosFindZ		"bl"
	#define RPC_ScrSetPlayerHealth			"bm"
	#define RPC_ScrPutPlayerInVehicle		"bn"
	#define RPC_ScrRemovePlayerFromVehicle	"bo"
	#define RPC_ScrSetPlayerColor			"bp"
	#define RPC_ScrDisplayGameText			"bq"
	#define RPC_ScrSetInterior				"br"
	#define RPC_ScrSetCameraPos				"bs"
	#define RPC_ScrSetCameraLookAt			"bt"
	#define RPC_ScrSetVehiclePos			"bu"
	#define RPC_ScrSetVehicleZAngle			"bv"
	#define RPC_ScrVehicleParams			"bw"
	#define RPC_ScrSetCameraBehindPlayer	"bx"
	#define RPC_ScrTogglePlayerControllable	"by"
	#define RPC_ScrPlaySound				"bz"
	#define RPC_ScrSetWorldBounds			"ca"
	#define RPC_ScrHaveSomeMoney			"cb"
	#define RPC_ScrSetPlayerFacingAngle		"cc"
	#define RPC_ScrResetMoney				"cd"
	#define RPC_ScrResetPlayerWeapons		"ce"
	#define RPC_ScrGivePlayerWeapon			"cf"
	#define RPC_ScrRespawnVehicle			"cg"
	#define RPC_ScrLinkVehicle				"ch"
	#define RPC_ScrSetPlayerArmour			"ci"
	#define RPC_ScrDeathMessage				"cj"
	#define RPC_ScrSetMapIcon				"ck"
	#define RPC_ScrDisableMapIcon			"cl"
	#define RPC_ScrSetWeaponAmmo			"cm"
	#define RPC_ScrSetGravity				"cn"
	#define RPC_ScrSetVehicleHealth			"co"
	#define RPC_ScrAttachTrailerToVehicle	"cp"
	#define RPC_ScrDetachTrailerFromVehicle	"cq"
	#define RPC_ScrCreateObject				"cr"
	#define RPC_ScrSetObjectPos				"cs"
	#define RPC_ScrSetObjectRotation		"ct"
	#define RPC_ScrDestroyObject			"cu"
	#define RPC_ScrSetPlayerVirtualWorld	"cv"
	#define RPC_ScrSetVehicleVirtualWorld	"cw"
	#define RPC_ScrCreateExplosion			"cx"
	#define RPC_ScrShowNameTag				"cy"
	#define RPC_ScrMoveObject				"cz"
	#define RPC_ScrStopObject				"da"
	#define RPC_ScrNumberPlate				"db"
	#define RPC_ScrTogglePlayerSpectating	"dc"
	#define RPC_ScrSetPlayerSpectating		"dd"
	#define RPC_ScrPlayerSpectatePlayer		"de"
	#define RPC_ScrPlayerSpectateVehicle	"df"
	#define RPC_ScrRemoveComponent			"dg"
	#define RPC_ScrForceSpawnSelection		"dh"
	#define RPC_ScrAttachObjectToPlayer		"dt"
	#define RPC_ScrInitMenu					"du"
	#define RPC_ScrShowMenu					"dv"
	#define RPC_ScrHideMenu					"dw"
	#define RPC_ScrSetPlayerWantedLevel		"dz"
	#define RPC_ScrShowTextDraw				"ea"
	#define RPC_ScrHideTextDraw				"eb"
	#define RPC_ScrEditTextDraw				"ee"
	#define RPC_ScrAddGangZone				"ef"
	#define RPC_ScrRemoveGangZone			"eg"
	#define RPC_ScrFlashGangZone			"eh"
	#define RPC_ScrStopFlashGangZone		"ei"
	#define RPC_ScrApplyAnimation			"eo"
	#define RPC_ScrClearAnimations			"eq"
	#define RPC_ScrSetSpecialAction			"ep"
	#define RPC_ScrEnableStuntBonus			"ec"

	// netrpc (server)
	#define RPC_ClientJoin					"xx"
	#define RPC_ServerCommand				"dj"
	#define RPC_SetInteriorId				"dk"
	#define RPC_AdminMapTeleport			"dl"
	#define RPC_VehicleDestroyed			"dm"
	#define RPC_PickedUpWeapon				"dn"
	#define RPC_PickedUpPickup				"do"
	#define RPC_MenuSelect					"dx"
	#define RPC_MenuQuit					"dy"
	
	// rcon
	#define RPC_RconConnect					"dp"
	#define RPC_RconCommand					"dq"
	#define RPC_RconEvent					"dr"
	#define RPC_RconPlayerInfo				"ds"

	// anticheat
	#define RPC_ACAuthRequest				"ej"
	#define RPC_ACAuthResponse				"ek"
	#define RPC_ACAuthEngineLoaded			"el"
	#define RPC_ACServerProtected			"bd"
