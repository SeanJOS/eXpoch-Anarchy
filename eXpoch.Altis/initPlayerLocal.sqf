///////////////////////////////////////////////////////////////////////////////
// Static Objects
///////////////////////////////////////////////////////////////////////////////

// Taken away for now
//#include "initServer.sqf"

if (!hasInterface || isServer) exitWith {};
[] execVM "MarXet\MarXet_Init.sqf";
[] execVM "zcp\zcp.sqf";
sleep 2;
if((!isClass(configFile>>"CfgPatches">>"task_force_radio"))&&{(!isClass(configFile>>"CfgPatches">>"acre_main"))&&(AFAR==1)})then
{
	#include "AFAR\afar_settings.sqf";
	call initAFAR;
};
/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */

if (!hasInterface || isServer) exitWith {};

// 55 NPCs
private _npcs = [
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_05", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [14596.6, 16753.1, 18.0364], [0.77388, -0.633332, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_01", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Tactical_Black",[],["","","","","",""]], [14635.1, 16791.3, 18.0364], [0.408048, -0.91296, 0], [0, 0, 1]],
["Exile_Trader_RussianRoulette", [], "Exile_Trader_RussianRoulette", "WhiteHead_01", [[],[],["hgun_Pistol_Signal_F","","","",[],[],""],["U_Marshal",[]],["V_Rangemaster_belt",[]],[],"H_Cap_marshal","G_Sport_Blackyellow",[],["","","","","",""]], [14626.7, 16829.8, 18.0364], [0.289725, -0.95711, 0], [0, 0, 1]],
["Exile_Guard_02", [], "", "AfricanHead_03", [["arifle_Mk20_GL_F","","","",[],[],""],[],[],["U_BG_Guerilla1_1",[]],["V_PlateCarrierIA2_dgtl",[]],[],"H_Hat_camo","",[],["","","","","",""]], [14625, 16833.3, 22.6364], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "AfricanHead_02", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Black",[],["","","","","",""]], [14591.5, 16778.6, 18.0364], [-0.737193, 0.675682, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "GreekHead_A3_05", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [14586.8, 16758.8, 18.0364], [-0.880546, -0.473961, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_03", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [14571.9, 16759.6, 18.0364], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "GreekHead_A3_05", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [14568.4, 16763.9, 18.0364], [0.534417, 0.845221, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_19", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [14565.8, 16772.6, 18.0364], [0.908323, -0.418269, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_16", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Combat",[],["","","","","",""]], [14609.9, 16875, 17.8512], [-0.967567, 0.252613, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Combat",[],["","","","","",""]], [14617.6, 16888, 17.8544], [-0.971392, 0.237482, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_02", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Tactical_Black",[],["","","","","",""]], [14608.8, 16900.6, 17.8266], [-0.986514, -0.163676, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "WhiteHead_02", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","G_Combat",[],["","","","","",""]], [14600.3, 16774.7, 23.0364], [-0.807985, -0.589203, 0], [0, 0, 1]],
["Exile_Guard_01", [], "", "WhiteHead_09", [["srifle_DMR_03_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_TacVest_khk",[]],[],"H_ShemagOpen_tan","G_Combat",[],["","","","","",""]], [14564.6, 16926, 17.378], [0, 1, 0], [0, 0, 1]],
["Exile_Guard_03", [], "", "WhiteHead_15", [["SMG_02_F","","","",[],[],""],[],[],["U_BG_Guerilla2_3",[]],["V_TacVestIR_blk",[]],[],"H_Bandanna_camo","G_Squares_Tinted",[],["","","","","",""]], [14532.8, 16710.2, 30.8271], [0.684985, -0.728557, 0], [0, 0, 1]],
["Exile_Guard_03", [], "", "WhiteHead_01", [["SMG_02_F","","","",[],[],""],[],[],["U_BG_Guerilla2_3",[]],["V_TacVestIR_blk",[]],[],"H_Bandanna_camo","G_Squares_Tinted",[],["","","","","",""]], [14978.7, 16964, 32.3974], [0.996035, -0.0889601, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_06", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Black",[],["","","","","",""]], [23353.6, 24166.8, 4.60034], [0.0838203, 0.996481, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "AfricanHead_02", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [23337.7, 24208.6, 4.28416], [-0.775473, 0.63138, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_08", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","",[],["","","","","",""]], [23292.4, 24189.1, 2.51693], [0.808527, -0.588459, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_21", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Tactical_Clear",[],["","","","","",""]], [23292.7, 24192.4, 2.51678], [0.816872, 0.576819, 0], [0, 0, 1]],
["Exile_Trader_Diving", [], "Exile_Trader_Diving", "WhiteHead_02", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [23252.6, 24193.7, 2.5336], [0.9967, -0.0811792, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_10", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [23374.7, 24184.3, 4.89729], [-0.479474, 0.877556, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_02", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Aviator",[],["","","","","",""]], [23392.8, 24187.6, 4.69511], [-0.314622, 0.949217, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "GreekHead_A3_08", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [23378.1, 24166.8, 7.96673], [0.866972, 0.498357, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_08", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [23381.6, 24168.8, 4.09581], [-0.767908, -0.64056, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "AfricanHead_02", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","",[],["","","","","",""]], [2914.02, 18196.5, 1.15713], [0.800481, -0.599358, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_01", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [2912.39, 18193.2, 1.15713], [0.992323, -0.123676, 0], [0, 0, 1]],
["Exile_Trader_Diving", [], "Exile_Trader_Diving", "WhiteHead_05", [["arifle_SDAR_F","","","",[],[],""],[],[],["U_I_Wetsuit",[]],["V_RebreatherIA",[]],[],"","G_I_Diving",[],["","","","","",""]], [2916.2, 18198, 1.39918], [-0.0103402, -0.999947, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_02", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [2980.81, 18193, 1.35388], [0.487327, -0.873219, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "AfricanHead_02", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [2979.49, 18180.2, 1.35388], [0.985831, -0.167741, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_18", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Combat",[],["","","","","",""]], [2982.73, 18135.2, 1.12431], [0.646168, 0.763195, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "GreekHead_A3_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Combat",[],["","","","","",""]], [2993.81, 18166.2, 1.13429], [0.830902, -0.556419, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_14", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [2990.79, 18173.4, 1.13956], [0.745194, -0.666848, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations_Blackmarket", [], "Exile_Trader_SpecialOperations_Blackmarket", "WhiteHead_21", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [5904.36, 20188.5, 240.689], [0.00869803, -0.999962, 0], [0, 0, 1]],
["Exile_Trader_Armory_Blackmarket", [], "Exile_Trader_Armory_Blackmarket", "WhiteHead_12", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [5931.39, 20168.5, 223.929], [-0.151224, -0.9885, 0], [0, 0, 1]],
["Exile_Trader_Aircraft_Blackmarket", [], "Exile_Trader_Aircraft_Blackmarket", "WhiteHead_01", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Combat",[],["","","","","",""]], [5887.16, 20108.8, 226.896], [-0.950749, -0.309962, 0], [0, 0, 1]],
["Exile_Trader_Vehicle_Blackmarket", [], "Exile_Trader_Vehicle_Blackmarket", "WhiteHead_14", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","",[],["","","","","",""]], [5858.01, 20104, 229.075], [-0.232824, -0.972519, 0], [0, 0, 1]],
["Exile_Trader_Equipment_Blackmarket", [], "Exile_Trader_Equipment_Blackmarket", "WhiteHead_18", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [5828.7, 20135.4, 224.291], [0.682455, -0.730928, 0], [0, 0, 1]],
["Exile_Trader_Food_Blackmarket", [], "Exile_Trader_Food_Blackmarket", "WhiteHead_20", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Combat",[],["","","","","",""]], [5907.55, 20158.6, 223.93], [0.70082, -0.713338, 0], [0, 0, 1]],
["Exile_Trader_Hardware_Blackmarket", [], "Exile_Trader_Hardware_Blackmarket", "WhiteHead_06", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","",[],["","","","","",""]], [5915.7, 20161.4, 223.931], [-0.163469, -0.986548, 0], [0, 0, 1]],
["Exile_Trader_Food_Hero", [], "Exile_Trader_Food_Hero", "GreekHead_A3_08", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Tactical_Clear",[],["","","","","",""]], [21083, 14486.3, 2.06855], [0.985114, -0.171905, 0], [0, 0, 1]],
["Exile_Trader_Hardware_Hero", [], "Exile_Trader_Hardware_Hero", "WhiteHead_19", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [21085.5, 14495.2, 2.0777], [0.915179, -0.403048, 0], [0, 0, 1]],
["Exile_Trader_Boat_Hero", [], "Exile_Trader_Boat_Hero", "WhiteHead_07", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","",[],["","","","","",""]], [21130.6, 14516.2, 2.07415], [-0.886511, -0.462708, 0], [0, 0, 1]],
["Exile_Trader_Vehicle_Hero", [], "Exile_Trader_Vehicle_Hero", "WhiteHead_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Tactical_Clear",[],["","","","","",""]], [21126.3, 14520.8, 2.18707], [0.979719, -0.200374, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations_Hero", [], "Exile_Trader_SpecialOperations_Hero", "GreekHead_A3_09", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [21075.8, 14504.7, 2.71196], [0.610489, -0.792025, 0], [0, 0, 1]],
["Exile_Trader_Aircraft_Hero", [], "Exile_Trader_Aircraft_Hero", "GreekHead_A3_06", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Tactical_Black",[],["","","","","",""]], [21123.7, 14546.5, 2.30361], [0.988254, -0.152823, 0], [0, 0, 1]],
["Exile_Trader_Equipment_Hero", [], "Exile_Trader_Equipment_Hero", "GreekHead_A3_07", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Black",[],["","","","","",""]], [21112.8, 14475.2, 2.15738], [-0.981343, 0.192266, 0], [0, 0, 1]],
["Exile_Trader_Armory_Hero", [], "Exile_Trader_Armory_Hero", "WhiteHead_19", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [21087, 14452.3, 2.16194], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Aircraft_Bandit", [], "Exile_Trader_Aircraft_Bandit", "AfricanHead_01", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [7530.19, 12215.3, 32.5065], [-0.477614, -0.87857, 0], [0, 0, 1]],
["Exile_Trader_Equipment_Bandit", [], "Exile_Trader_Equipment_Bandit", "AfricanHead_02", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","",[],["","","","","",""]], [7537.12, 12209.6, 33.3334], [-0.909499, -0.415706, 0], [0, 0, 1]],
["Exile_Trader_Food_Bandit", [], "Exile_Trader_Food_Bandit", "WhiteHead_07", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","G_Combat",[],["","","","","",""]], [7542.34, 12200.2, 33.1244], [-0.287939, -0.957649, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations_Bandit", [], "Exile_Trader_SpecialOperations_Bandit", "GreekHead_A3_06", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [7564.94, 12167.4, 33.6698], [0.61252, 0.790455, 0], [0, 0, 1]],
["Exile_Trader_Armory_Bandit", [], "Exile_Trader_Armory_Bandit", "WhiteHead_16", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [7572.24, 12201, 33.2641], [-0.260589, -0.96545, 0], [0, 0, 1]],
["Exile_Trader_Hardware_Bandit", [], "Exile_Trader_Hardware_Bandit", "WhiteHead_09", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [7530.69, 12257.8, 35.8841], [-0.0925648, -0.995707, 0], [0, 0, 1]],
["Exile_Trader_Vehicle_Bandit", [], "Exile_Trader_Vehicle_Bandit", "WhiteHead_04", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Tactical_Clear",[],["","","","","",""]], [7536.87, 12204.4, 33.27], [-0.913848, -0.406056, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
	if((_x select 0) isEqualTo "Exile_Trader_WasteDump")then
	{
		_trader addAction ["<img image='\a3\ui_f\data\IGUI\Cfg\Actions\reammo_ca.paa' size='1' shadow='false' />Access MarXet","createDialog 'RscMarXetDialog'","",1,false,true,"","((position player) distance _target) <= 4"];
	};
}forEach _npcs;

/*
///////////////////////////////////////////////////////////////////////////
// Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 45.4546;
_workBench setPosATL [14587.8, 16758.7, 0.0938587];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 131.818;
_cashDesk setPosATL [14589.8, 16778.2, -0.0701294];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 208.182;    
_chair setPosATL [14568.1, 16764.3, 0.084837];

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["InBaseMoves_Lean1"],
    [14571.5, 16759.1, 0.126438],
    0
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Specops Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_SpecialOperations",
    "Exile_Trader_SpecialOperations",
    "AfricanHead_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [14566.3, 16773.2, 0.126438],
    140
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Office Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Office",
    "Exile_Trader_Office",
    "GreekHead_A3_04",
    ["HubBriefing_scratch", "HubBriefing_stretch", "HubBriefing_think", "HubBriefing_lookAround1", "HubBriefing_lookAround2"],
    [14599.6, 16774.6, 5.12644],
    220
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14608.4, 16901.3, 0],
    270
]
call ExileClient_object_trader_create;


///////////////////////////////////////////////////////////////////////////
// Aircraft Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Aircraft",
    "Exile_Trader_Aircraft",
    "WhiteHead_17",
    ["LHD_krajPaluby"],
    [14596.5, 16752.9, 0.12644],
    133
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Aircraft Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_AircraftCustoms",
    "Exile_Trader_AircraftCustoms",
    "GreekHead_A3_07",
    ["HubStandingUC_idle1", "HubStandingUC_idle2", "HubStandingUC_idle3", "HubStandingUC_move1", "HubStandingUC_move2"],
    [14635, 16790.3, 0],
    156.294
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [14603.7, 16877.3, 0.00143433],
    90
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 355.455;
_carWreck setPosATL [14605.6, 16877.3, 0.0208359];

///////////////////////////////////////////////////////////////////////////
// Vehicle Customs Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_VehicleCustoms",
    "Exile_Trader_VehicleCustoms",
    "WhiteHead_11",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [14617.2, 16888.4, 0],
    269.96
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_01",
    "",
    "WhiteHead_17",
    ["InBaseMoves_patrolling1"],
    [14564.9,16923.4,0.00146294],
    323.53
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [14626.3,16834.6,4.72644],
    326.455
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Guard 03
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [14577.1,16793.1,3.75118],
    313.349
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Guard 01
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_02",
    "",
    "WhiteHead_03",
    ["InBaseMoves_patrolling2"],
    [2950.52,18195.3,4.93399],
    179.092
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Boat Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2914.35,18192.9,8.51858],
    88.3346
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [2980.19,18146.2,1.06391],
    222.352
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 130.966;    
_carWreck setPosATL [2978.76,18144.5,1.13293];

///////////////////////////////////////////////////////////////////////////
// Western Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [2984.05,18133.4,0.00107765],
    29.3856
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Fast Food Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [2979.87,18184.9,2.55185],
    89.2952
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Equipment Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2980.7,18192.9,2.49853],
    130.535
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Armory Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [2986.43,18178.5,1.66267],
    296.855
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Western Guard 02
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Guard_03",
    "",
    "AfricanHead_03",
    ["InBaseMoves_patrolling1"],
    [2993.2,18167,0.353821],
    109.888
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Fast Food Trader
///////////////////////////////////////////////////////////////////////////
_cashDesk = "Land_CashDesk_F" createVehicleLocal [0,0,0];
_cashDesk setDir 222.727;
_cashDesk setPosATL [23353.1, 24168, 0.16585];

_microwave = "Land_Microwave_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _microwave;         
_microwave disableCollisionWith _cashDesk; 
_microwave attachTo [_cashDesk, [-0.6, 0.2, 1.1]];

_ketchup = "Land_Ketchup_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _ketchup;         
_ketchup disableCollisionWith _cashDesk; 
_ketchup attachTo [_cashDesk, [-0.6, 0, 1.1]];

_mustard = "Land_Mustard_01_F" createVehicleLocal [0,0,0];
_cashDesk disableCollisionWith _mustard;         
_mustard disableCollisionWith _cashDesk; 
_mustard attachTo [_cashDesk, [-0.5, -0.05, 1.1]];

_trader = 
[
    "Exile_Trader_Food",
    "Exile_Trader_Food",
    "GreekHead_A3_01",
    ["InBaseMoves_table1"],
    [0.1, 0.5, 0.2],
    170,
    _cashDesk
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Boat Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Boat",
    "Exile_Trader_Boat",
    "WhiteHead_17",
    ["AidlPercMstpSnonWnonDnon_G01", "AidlPercMstpSnonWnonDnon_G02", "AidlPercMstpSnonWnonDnon_G03", "AidlPercMstpSnonWnonDnon_G04", "AidlPercMstpSnonWnonDnon_G05", "AidlPercMstpSnonWnonDnon_G06"],
    [23296.6,24189.8,5.61213],
    96
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Vehicle Trader
///////////////////////////////////////////////////////////////////////////

_trader = 
[
    "Exile_Trader_Vehicle",
    "Exile_Trader_Vehicle",
    "WhiteHead_11",
    ["InBaseMoves_repairVehicleKnl", "InBaseMoves_repairVehiclePne"],
    [23385.6,24191.6,0.00136566],
    123
]
call ExileClient_object_trader_create;

_carWreck = "Land_Wreck_CarDismantled_F" createVehicleLocal [0,0,0];
_carWreck setDir 47.2728;    
_carWreck setPosATL [23387.3, 24190.3, 0.05];

///////////////////////////////////////////////////////////////////////////
// Eastern Hardware Trader
///////////////////////////////////////////////////////////////////////////
_workBench = "Land_Workbench_01_F" createVehicleLocal [0,0,0];
_workBench setDir 279.545;
_workBench setPosATL [23371.6, 24188, 0.89873];

_trader = 
[
    "Exile_Trader_Hardware",
    "Exile_Trader_Hardware",
    "WhiteHead_17",
    ["InBaseMoves_sitHighUp1"],
    [0, 0, -0.5],
    170,
    _workBench
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Equipment Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_Equipment",
    "Exile_Trader_Equipment",
    "WhiteHead_19",
    ["HubStanding_idle1", "HubStanding_idle2", "HubStanding_idle3"],
    [23379.9, 24169.3, 0.199955],
    206
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Armory Trader
///////////////////////////////////////////////////////////////////////////
_chair = "Land_CampingChair_V2_F" createVehicleLocal [0,0,0];
_chair setDir 12.7272;
_chair setPosATL [23379.6, 24169.3, 4.56662];

_trader = 
[
    "Exile_Trader_Armory",
    "Exile_Trader_Armory",
    "PersianHead_A3_02",
    ["InBaseMoves_SittingRifle1"],
    [0, -0.15, -0.45],
    180,
    _chair
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Eastern Waste Dump Trader
///////////////////////////////////////////////////////////////////////////
_trader = 
[
    "Exile_Trader_WasteDump",
    "Exile_Trader_WasteDump",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [23336.6,24214.4,0.00115061],
    346
]
call ExileClient_object_trader_create;

///////////////////////////////////////////////////////////////////////////
// Russian Roulette
///////////////////////////////////////////////////////////////////////////
[
    "Exile_Trader_RussianRoulette",
    "",
    "GreekHead_A3_01",
    ["HubStandingUA_move1", "HubStandingUA_move2", "HubStandingUA_idle1", "HubStandingUA_idle2", "HubStandingUA_idle3"],
    [14622.6, 16820.1, 0.126],
    187.428
]
call ExileClient_object_trader_create;
*/