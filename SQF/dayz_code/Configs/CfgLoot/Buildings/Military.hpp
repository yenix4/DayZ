class Military : Default
{
	zombieChance = 0.3;
	maxRoaming = 6;
	zombieClass[] =
	{
		"z_soldier",
		"z_soldier_heavy",
		"z_policeman",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.4;
	lootGroup = Military;
};

class MilitarySpecial : Military
{
	zombieChance = 0.8;
	minRoaming = 2;
	zombieClass[] =
	{
		"z_soldier_heavy",
		"z_new_worker2",
		"z_new_worker3",
		"z_new_worker4"
	};
	lootChance = 0.4;
	lootGroup = MilitarySpecial;
};

class Land_a_stationhouse : Military
{
	zedPos[] = {{-0.892578,-5.7168,-9.47058},{1.5127,1.96484,-9.47058},{18.9063,-4.06738,-9.47058},{-2.69922,-7.57422,-9.46057},{-1.35645,-8.3623,-4.6489},{-3.24219,-6.61914,-4.6489},{-1.70801,-7.85449,-0.0437927},{-3.39453,-7.88281,-0.0437927},{-1.37891,-5.79102,4.41141},{-1.39648,-7.79883,4.41141}};
	lootChance = 0.3;
	lootPos[] = {{-2.7,-7.57,-9.46},{-0.89,-5.72,-9.47},{-3.24,-6.62,-4.65},{-1.36,-8.36,-4.65},{-1.71,-7.85,-0.04},{-3.39,-7.88,-0.04},{-1.4,-7.8,4.41},{-1.38,-5.79,4.41},{1.51,1.96,-9.47},{18.91,-4.07,-9.47},{-14.4,3.29,-0.51},{1.33,0.89,-0.51},{-2.37,-8.4,8.49},{12.44,2.54,-9.47},{-14.83,-7.58,-0.51},{-1.8,8.87,-0.51},{6.83,0.89,-0.51},{3.65,-6.54,-4.51},{16.29,-6.57,-4.51},{18.39,2.37,-4.51},{9.28,-1.25,-4.51},{-2.08,-4.74,8.49}};
};

class Land_Mil_ControlTower: Military
{
	zedPos[] = {{10.0703,3.76367,-9.62869},{1.75195,5.68164,-5.51373},{3.85254,3.53516,-5.50372},{6.66113,-0.625488,-1.0787},{6.72266,3.23389,-1.0787},{2.63965,-0.191406,-1.0687}};
	lootChance = 0.4;
	lootPos[] = {{10.07,3.76,-9.63},{5.07,3.65,-5.5},{1.75,5.68,-5.51},{7.49,-1.47,-1.04},{2.46,-0.83,-1.07},{7.61,2.05,-0.35},{2.26,2.17,-1.07},{2.56,5.72,-9.63},{6.56,-3.82,-1.06},{9.87,4.04,-1.06},{7.28,-1.69,2.98}};
};

class Land_SS_hangar: Military
{
	maxRoaming = 3;
	zedPos[] = {{-11.7158,-18.9541,-5.87253},{11.7344,-17.165,-5.87253},{-14.2461,23.0439,-5.87253}};
	lootChance = 0.4;
	lootPos[] = {{11.73,-17.17,-5.87},{-11.72,-18.95,-5.87},{-14.25,23.04,-5.87},{8.38,-5.33,-5.87},{-6,5.89,-5.87},{10.18,19.62,-5.87},{-6.43,-7.66,-5.87}};
	lootGroup = Hangar;
};

class Land_A_TVTower_Base: Military
{
	zedPos[] = {{-0.95166,1.48047,-2.31586},{-2.01782,-4.24121,-2.30939},{-0.982422,-1.92383,-2.25586}};
	lootPos[] = {{-0.982422,-1.92383,-2.25586},{-2.01782,-4.24121,-2.30939},{-0.95166,1.48047,-2.31586}};
};

class Land_Mil_House: Military
{
	zedPos[] = {{11.1638,4.70117,-5.67465},{12.4565,1.42383,-5.67465},{13.6672,4.42383,-5.67465}};
	lootPos[] = {{12.4565,1.42383,-5.67465},{11.1638,4.70117,-5.67465},{13.6672,4.42383,-5.67465}};
};

class Land_Mil_Barracks_i: MilitarySpecial
{
	zedPos[] = {{-1.95361,2.57813,-1.1084},{5.46289,2.5791,-1.1084},{1.29346,-2.16211,-1.09839},{-1.78369,-0.166992,-1.09839},{-5.39355,-2.11719,-1.09839},{-5.4707,2.58203,-1.09839},{-1.80664,-1.97559,-1.09827},{5.38965,-1.75781,-1.09827},{-9.1499,-2.55859,-1.09827},{1.4668,-0.129883,-1.09814},{-4.77881,0.0498047,-1.09814},{-8.32617,-0.144531,-1.09814}};
	lootChance = 0.3;
	lootPos[] = {{-0.39,-2.02,-1.1},{-5.67,1.68,-1.1},{-1.95,2.58,-1.11},{5.46,2.58,-1.11},{6.37,-1.22,-0.93},{-0.24,-1.04,0.1},{-3.53,-0.38,-1.1},{-5.39,-2.23,-1.1},{-6.78,-1.34,-0.7},{-9.07,-0.53,-1.1},{2.97,-0.92,-1.1},{1.11,-2.35,-1.1}};
};

class Land_Mil_Barracks: Military
{
};

class Camp: Military {
	maxRoaming = 1;
	zedPos[] = {{0.833496,-1.52246,-1.09949},{0.385742,0.963867,-1.08948}};
	lootPos[] = {{0.833496,-1.52246,-1.09949},{0.385742,0.963867,-1.08948}};
};

class CampEast: Military {
	maxRoaming = 1;
	zedPos[] = {{0.627441,1.83594,-1.31049},{-1.05713,-1.80762,-1.31049}};
	lootPos[] = {{-1.05713,-1.80762,-1.31049},{0.627441,1.83594,-1.31049}};
};

class CampEast_EP1: Military {
	maxRoaming = 1;
	zedPos[] = {{-0.670898,0.955078,-1.31049},{1.68408,-2.43359,-1.31049},{-1.76318,-1.625,-1.31049}};
	lootPos[] = {{-0.670898,0.955078,-1.31049},{1.68408,-2.43359,-1.31049},{-1.76318,-1.625,-1.31049}};
};

class Land_tent_east: Military {
	minRoaming = 2;
	maxRoaming = 3;
	zedPos[] = {{-1.82,1.71,-1.74},{2.06,-0.97,-1.74}};
	lootChance = 0.3;
	lootPos[] = {{2.06,-0.97,-1.74},{-1.82,1.71,-1.74}};
};

class Land_Dam_ConcP_20: Military {
	zedPos[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09}};
	lootChance = 0.4;
	lootPos[] = {{-0.94,10.26,9.09},{2.47,9.87,9.09},{-0.94,10.26,9.09},{2.47,9.87,9.09},{-6.51,4.46,2.21},{1.47,6.06,2.21},{4.89,2.99,2.19},{7.92,6.13,2.21}};
};

class C130J_wreck_EP1: Military {
	zedPos[] = {{0.37,0.61,-5.44},{-0.84,2.92,-5.44},{-2.16,-6.32,-5.42},{1.26,-20.49,-5.39},{1.88,-3.67,-5.36},{-0.2,-12.76,-4.78},{-0.36,-7.87,-4.6},{-1.32,-14.56,-4.59}};
	lootPos[] = {{-0.36,-7.87,-4.6},{-0.2,-12.76,-4.78},{-1.32,-14.56,-4.59},{-2.16,-6.32,-5.42},{-0.84,2.92,-5.44},{0.37,0.61,-5.44},{1.88,-3.67,-5.36},{1.26,-20.49,-5.39}};
};

class Barrack2: Military {
	lootPos[]={{1.33,-0.65,-0.27},{1.14,5.21,-0.27},{-2.09,0.71,0.05},{1.13,3.25,0.52}};
};

class Mi8Wreck: Military {
	lootPos[]={{0,-5.79,-1.71}};
};

class USMC_WarfareBVehicleServicePoint: Military {
	lootPos[] = {{1.57,-3.96,-0.09},{-1.49,2.23,-1.41}};
};

class Land_Vysilac_FM: Military {
	zedPos[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21}};
	lootPos[] = {{-0.36,1.96,-6.21},{-1.72,4.5,-6.21},{-3.25,0.75,-6.21},{1.35,-0.6,8.39}};
	lootChance = 0.4;
};

class Land_Mil_Barracks_L: Military {
	zedPos[] = {{4,-5.22,-2.21},{7.3,-4.04,-2.21},{-0.82,-4.72,-2.2}};
	lootPos[] = {{-0.82,-4.72,-2.2},{4,-5.22,-2.21},{7.3,-4.04,-2.21}};
};
// ALT-MAP Support 
class Land_budova4_in: MilitarySpecial // barracks broken blue front door. cannot enter inner rooms
{
	zedPos[] = {{-3.94531,2.27344,-1.88723},{-0.0566406,2.2666,-1.88723},{6.27148,2.5752,-1.88723}};
	lootPos[] = {{-5.49609,2.13135,-1.88723},{-1.57031,2.29199,-1.88723},{2.43945,2.21387,-1.88723},{5.92383,-2.44678,-1.88723}};
};
class Land_kostel_trosky: MilitarySpecial // church ruins
{
	zedPos[] = {{-0.388672,10.0176,-5.37072},{-2.97852,-0.816406,-5.55207}};
	lootPos[] = {{0.386719,13.5918,-5.54349},{3.81055,2.98828,-5.30816}};
};
class Land_MBG_Killhouse_3: Military // cement 2 story 
{
	zedPos[] = {{-4.10547,-0.466797,0.451439},{-2.06152,3.2168,0.451439},{-10.7031,3.0293,0.451439},{-8.07715,-1.2168,0.451439}};
	lootPos[] = {{-4.10547,-0.466797,0.451439},{-2.06152,3.2168,0.451439},{-10.7031,3.0293,0.451439},{-8.07715,-1.2168,0.451439}};
};
class Land_MBG_Killhouse_4: Military // cement 2 story 
{
	zedPos[] = {{2.97949,2.16211,-3.84318},{-3.87012,5.46484,-3.84317},{6.9248,2.49219,-0.543175}};
	lootPos[] = {{2.97949,2.16211,-3.84318},{6.88184,-3.24219,-3.84317},{-3.87012,5.46484,-3.84317},{0.474609,-5.08398,-0.543175},{6.9248,2.49219,-0.543175},{-2.39063,-0.128906,-0.543179}};
};
class Land_aif_strazni_vez: Military // metal platform-overlook 
{
	lootPos[] = {{0.113281,0.859375,1.46157},{-1.24023,1.25195,1.46157}};
};
class Land_MBG_Killhouse_2: Military // cement 2 story 
{
	zedPos[] = {{-4.58887,-4.49023,-2.79856},{1.78516,1.58887,3.80144}};
	lootPos[] = {{-4.58887,-4.49023,-2.79856},{6.50488,5.86328,-2.79856},{-6.24365,-4.69336,0.501437},{-4.99805,-4.63281,3.80144},{5.48828,-3.87793,3.80144}};
};
class Land_A_Villa_EP1: Military // takistani villa 2 story multi-wing 
{
	zedPos[] = {{5.5332,2.70361,-5.06721},{13.2578,-14.3623,-5.06719}};
	lootPos[] = {{-15.002,9.06104,1.97169},{10.3047,10.7178,1.97146},{17.4824,-15.3862,1.99229},{10.1855,-0.722656,-1.4844},{-2.54688,14.5698,-1.4844},{-14.8945,12.7236,-1.4844},{-8.51953,14.1064,-1.4844}};
};
class Land_buova4_winter: MilitarySpecial // winter version of military barracks
{
	zedPos[] = {{-1.95361,2.57813,-1.1084},{5.46289,2.5791,-1.1084},{1.29346,-2.16211,-1.09839},{-1.78369,-0.166992,-1.09839},{-5.39355,-2.11719,-1.09839},{-5.4707,2.58203,-1.09839},{-1.80664,-1.97559,-1.09827},{5.38965,-1.75781,-1.09827},{-9.1499,-2.55859,-1.09827},{1.4668,-0.129883,-1.09814},{-4.77881,0.0498047,-1.09814},{-8.32617,-0.144531,-1.09814}};
	lootChance = 0.3;
	lootPos[] = {{-0.39,-2.02,-1.1},{-5.67,1.68,-1.1},{-1.95,2.58,-1.11},{5.46,2.58,-1.11},{6.37,-1.22,-0.93},{-0.24,-1.04,0.1},{-3.53,-0.38,-1.1},{-5.39,-2.23,-1.1},{-6.78,-1.34,-0.7},{-9.07,-0.53,-1.1},{2.97,-0.92,-1.1},{1.11,-2.35,-1.1}};
};
class land_pozorovatelna: Military // concrete tower
{
	lootChance = 0.3;
	lootPos[] = {{-0.717773,-3.02612,-2.49767},{2.99414,2.67017,-2.49767},{0.761719,-2.20044,7.54509},{-0.482422,1.19702,7.54508},{1.85156,1.9812,7.54508}};
};
class land_hlaska: Military // metal platform
{
	lootChance = 0.3;
	lootPos[] = {{-0.802246,0.614258,3.77092},{0.917969,0.9375,3.77093}};
};
class Land_MBG_Killhouse_1: Military // cement block building
{
	lootChance = 0.25;
	lootPos[] = {{-1.98071,5.50488,1.25144},{-2.79443,0.65625,-2.04856},{2.88354,2.7627,-2.04856}};
};
class land_army_hut2_int: Military // beige hut on blocks
{
	zedPos[] = {{-0.770508,-3.1189,-0.948334}};
	lootPos[] = {{1.39404,0.541992,-0.948334},{0.625977,-2.95581,-0.948334}};
};
class land_army_hut_int: Military // beige hut on blocks
{
	zedPos[] = {{-0.82373,-6.07861,-1.33057},{0.433105,1.00537,-1.35434}};
	lootPos[] = {{1.44287,-5.43945,-1.33057},{1.2793,-2.66577,-1.33057},{0.0180664,-2.15015,-1.33057},{0.679199,1.88672,-1.36224},{0.641113,1.84229,-1.36244}};
};
class Land_army_hut3_long_int: Military // beige hut on blocks
{
	zedPos[] = {{-0.763184,3.76611,-1.23617},{-0.182617,-4.67529,-1.23617}};
	lootPos[] = {{-0.763184,3.76611,-1.23617},{-1.90137,-0.530273,-1.23617},{-1.61182,-4.4043,-1.23617}};
};
class Land_ibr_terminal: Military // airport terminal
{
	zedPos[] = {{8.07959,-13.2017,-4.04974},{13.0786,16.0371,-4.04974},{-7.51855,14.5576,-4.04974},{-28.2988,-0.0410156,-4.04986}};
	lootPos[] = {{26.3521,-8.23682,-4.04974},{-2.71729,-5.14893,-4.04974},{28.2046,15.0664,-0.949741},{-4.24121,-9.82861,-0.949741}};
};
class Land_smd_garaz_s_tankem: Military // garage - blockade - ladder
{
	zedPos[] = {{5.83203,2.34961,-2.49103}};
	lootPos[] = {{5.83203,2.34961,-2.49103},{-0.569336,3.00684,3.4697}};
};
class land_smd_army_hut2_int: Military // beige hut on blocks
{
	zedPos[] = {{-0.770508,-3.1189,-0.948334}};
	lootPos[] = {{1.39404,0.541992,-0.948334},{0.625977,-2.95581,-0.948334}};
};
class land_smd_army_hut2: Military // beige hut on blocks
{
	zedPos[] = {{1.01172,-5.03711,-1.33057}};
	lootPos[] = {{1.01172,-5.03711,-1.33057},{0.0957031,-2.06934,-1.33057},{1.87695,-2.59961,-1.33057},{0.697266,1.95605,-1.36212},{-1.31641,4.38672,-1.36211}};
};
class Land_smd_SS_hangar_withdoor: Military
{
	maxRoaming = 3;
	zedPos[] = {{10.957,-16.6943,-5.87254},{-11.3311,-15.499,-5.87254},{-9.27832,2.05566,-5.87254}};
	lootChance = 0.4;
	lootPos[] = {{10.957,-16.6943,-5.87254},{-11.3311,-15.499,-5.87254},{-9.27832,2.05566,-5.87254},{-11.0947,21.3438,-5.87254},{10.7002,17.6221,-5.87254},{11.4658,1.51367,-5.87254},{12.9443,-15.6855,-5.87254}};
	lootGroup = Hangar;
};
class Land_smd_budova4_in: MilitarySpecial // barracks blue doors internal rooms
{
	zedPos[] = {{5.9375,1.33496,-1.88723}};
	lootChance = 0.3;
	lootPos[] = {{5.68359,-1.41211,-1.88723},{-7.21484,2.17285,-1.88723},{-4.04492,2.07227,-1.88723},{-0.4375,1.95898,-1.88723},{3.23633,2.06348,-1.88723},{0.804688,-0.614258,-1.88723},{-1.2793,-1.0791,-1.88723},{-6.87695,-1.35156,-1.88723}};
};
class Land_smd_army_hut3_long_int: Military // wide 3 doors bunks
{
	lootChance = 0.3;
	lootPos[] = {{-1.4375,-4.67578,-1.27391},{-1.00098,-1.19043,-1.27391},{-1.6377,3.71875,-1.27391}};
};
class Land_smd_hlaska: Military // wide 3 doors bunks
{
	lootChance = 0.3;
	lootPos[] = {{0.00585938,0.799316,3.77093}};
};
class Land_smd_kostel_trosky: MilitarySpecial // church ruins
{
	lootPos[] = {{3.83789,0.8125,-4.81671},{0.206055,12.3555,-5.09952}};
};
// ALT-MAP Support 
