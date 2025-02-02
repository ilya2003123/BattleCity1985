#pragma once
#include <iostream>

namespace utils
{

	//static int k = 0; 
	//
	//inline void* operator new(size_t size) 
	// {
	//	k+=size;
	//	std::cout << k << "\n";
	//	return malloc(size);
	// }
	const sf::Vector2f waterPosition(100, 100);

	const std::map<std::string, std::vector<std::tuple<int, bool, int, int>>> framesWater =
	{
		{
			"flow",
			{
				{0, 0, -1, -1},
				{1, 0, -1, -1},
				{2, 0, -1, -1}
			}
		}
	};

	template <typename T>
	void print(const T& data, bool newLine = true)
	{
		std::cout << data << ((newLine) ? "\n" : "");
	}

	const int APP_FPS = 60;

	const std::string APP_TITLE_WINDOW = "Battle City";
	const int APP_WIDTH = 800;
	const int APP_HEIGHT = 600;

	const std::string MAIN_PATH_TO_DATA = "data/";
	const std::string MAIN_PATH_TO_RESOURCE = "resource/";
	const std::string MAIN_PATH_TO_YELLOW_TANK = "yellow/";
	const std::string MAIN_PATH_TO_RED_TANK = "red/";
	const std::string MAIN_PATH_TO_GREEN_TANK = "green/";
	const std::string MAIN_PATH_TO_GREY_TANK = "grey/";
	const std::string MAIN_PATH_TO_BLOCKS = "blocks/";
	const std::string MAIN_PATH_TO_BOOSTERS = "boosters/";
	const std::string MAIN_PATH_TO_STAGE = "stage/";
	const std::string MAIN_PATH_TO_BULLET = "bullet/";
	const std::string MAIN_PATH_TO_EXPLOSION = "explosion/";
	const std::string MAIN_PATH_TO_REWARD = "reward/";

	const std::string  PATH_TO_YELLOW_TANK_1_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_1_U";
	const std::string  PATH_TO_YELLOW_TANK_1_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_1_L";
	const std::string  PATH_TO_YELLOW_TANK_1_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_1_R";
	const std::string  PATH_TO_YELLOW_TANK_1_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_1_D";
	const std::string  PATH_TO_YELLOW_TANK_2_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_2_U";
	const std::string  PATH_TO_YELLOW_TANK_2_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_2_L";
	const std::string  PATH_TO_YELLOW_TANK_2_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_2_R";
	const std::string  PATH_TO_YELLOW_TANK_2_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_2_D";
	const std::string  PATH_TO_YELLOW_TANK_3_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_3_U";
	const std::string  PATH_TO_YELLOW_TANK_3_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_3_L";
	const std::string  PATH_TO_YELLOW_TANK_3_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_3_R";
	const std::string  PATH_TO_YELLOW_TANK_3_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_3_D";
	const std::string  PATH_TO_YELLOW_TANK_4_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_4_U";
	const std::string  PATH_TO_YELLOW_TANK_4_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_4_L";
	const std::string  PATH_TO_YELLOW_TANK_4_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_4_R";
	const std::string  PATH_TO_YELLOW_TANK_4_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_4_D";
	const std::string  PATH_TO_YELLOW_TANK_5_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_5_U";
	const std::string  PATH_TO_YELLOW_TANK_5_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_5_L";
	const std::string  PATH_TO_YELLOW_TANK_5_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_5_R";
	const std::string  PATH_TO_YELLOW_TANK_5_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_5_D";
	const std::string  PATH_TO_YELLOW_TANK_6_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_6_U";
	const std::string  PATH_TO_YELLOW_TANK_6_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_6_L";
	const std::string  PATH_TO_YELLOW_TANK_6_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_6_R";
	const std::string  PATH_TO_YELLOW_TANK_6_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_6_D";
	const std::string  PATH_TO_YELLOW_TANK_7_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_7_U";
	const std::string  PATH_TO_YELLOW_TANK_7_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_7_L";
	const std::string  PATH_TO_YELLOW_TANK_7_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_7_R";
	const std::string  PATH_TO_YELLOW_TANK_7_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_7_D";
	const std::string  PATH_TO_YELLOW_TANK_8_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_8_U";
	const std::string  PATH_TO_YELLOW_TANK_8_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_8_L";
	const std::string  PATH_TO_YELLOW_TANK_8_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_8_R";
	const std::string  PATH_TO_YELLOW_TANK_8_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_8_D";

	const std::string  PATH_TO_RED_TANK_1_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_1_U";
	const std::string  PATH_TO_RED_TANK_1_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_1_L";
	const std::string  PATH_TO_RED_TANK_1_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_1_R";
	const std::string  PATH_TO_RED_TANK_1_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_1_D";
	const std::string  PATH_TO_RED_TANK_2_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_2_U";
	const std::string  PATH_TO_RED_TANK_2_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_2_L";
	const std::string  PATH_TO_RED_TANK_2_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_2_R";
	const std::string  PATH_TO_RED_TANK_2_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_2_D";
	const std::string  PATH_TO_RED_TANK_3_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_3_U";
	const std::string  PATH_TO_RED_TANK_3_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_3_L";
	const std::string  PATH_TO_RED_TANK_3_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_3_R";
	const std::string  PATH_TO_RED_TANK_3_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_3_D";
	const std::string  PATH_TO_RED_TANK_4_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_4_U";
	const std::string  PATH_TO_RED_TANK_4_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_4_L";
	const std::string  PATH_TO_RED_TANK_4_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_4_R";
	const std::string  PATH_TO_RED_TANK_4_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_4_D";
	const std::string  PATH_TO_RED_TANK_5_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_5_U";
	const std::string  PATH_TO_RED_TANK_5_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_5_L";
	const std::string  PATH_TO_RED_TANK_5_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_5_R";
	const std::string  PATH_TO_RED_TANK_5_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_5_D";
	const std::string  PATH_TO_RED_TANK_6_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_6_U";
	const std::string  PATH_TO_RED_TANK_6_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_6_L";
	const std::string  PATH_TO_RED_TANK_6_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_6_R";
	const std::string  PATH_TO_RED_TANK_6_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_6_D";
	const std::string  PATH_TO_RED_TANK_7_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_7_U";
	const std::string  PATH_TO_RED_TANK_7_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_7_L";
	const std::string  PATH_TO_RED_TANK_7_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_7_R";
	const std::string  PATH_TO_RED_TANK_7_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_7_D";
	const std::string  PATH_TO_RED_TANK_8_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_8_U";
	const std::string  PATH_TO_RED_TANK_8_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_8_L";
	const std::string  PATH_TO_RED_TANK_8_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_8_R";
	const std::string  PATH_TO_RED_TANK_8_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_8_D";

	const std::string  PATH_TO_GREY_TANK_1_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_1_U";
	const std::string  PATH_TO_GREY_TANK_1_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_1_L";
	const std::string  PATH_TO_GREY_TANK_1_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_1_R";
	const std::string  PATH_TO_GREY_TANK_1_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_1_D";
	const std::string  PATH_TO_GREY_TANK_2_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_2_U";
	const std::string  PATH_TO_GREY_TANK_2_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_2_L";
	const std::string  PATH_TO_GREY_TANK_2_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_2_R";
	const std::string  PATH_TO_GREY_TANK_2_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_2_D";
	const std::string  PATH_TO_GREY_TANK_3_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_3_U";
	const std::string  PATH_TO_GREY_TANK_3_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_3_L";
	const std::string  PATH_TO_GREY_TANK_3_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_3_R";
	const std::string  PATH_TO_GREY_TANK_3_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_3_D";
	const std::string  PATH_TO_GREY_TANK_4_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_4_U";
	const std::string  PATH_TO_GREY_TANK_4_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_4_L";
	const std::string  PATH_TO_GREY_TANK_4_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_4_R";
	const std::string  PATH_TO_GREY_TANK_4_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_4_D";
	const std::string  PATH_TO_GREY_TANK_5_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_5_U";
	const std::string  PATH_TO_GREY_TANK_5_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_5_L";
	const std::string  PATH_TO_GREY_TANK_5_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_5_R";
	const std::string  PATH_TO_GREY_TANK_5_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_5_D";
	const std::string  PATH_TO_GREY_TANK_6_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_6_U";
	const std::string  PATH_TO_GREY_TANK_6_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_6_L";
	const std::string  PATH_TO_GREY_TANK_6_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_6_R";
	const std::string  PATH_TO_GREY_TANK_6_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_6_D";
	const std::string  PATH_TO_GREY_TANK_7_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_7_U";
	const std::string  PATH_TO_GREY_TANK_7_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_7_L";
	const std::string  PATH_TO_GREY_TANK_7_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_7_R";
	const std::string  PATH_TO_GREY_TANK_7_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_7_D";
	const std::string  PATH_TO_GREY_TANK_8_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_8_U";
	const std::string  PATH_TO_GREY_TANK_8_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_8_L";
	const std::string  PATH_TO_GREY_TANK_8_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_8_R";
	const std::string  PATH_TO_GREY_TANK_8_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_8_D";

	const std::string  PATH_TO_GREEN_TANK_1_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_1_U";
	const std::string  PATH_TO_GREEN_TANK_1_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_1_L";
	const std::string  PATH_TO_GREEN_TANK_1_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_1_R";
	const std::string  PATH_TO_GREEN_TANK_1_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_1_D";
	const std::string  PATH_TO_GREEN_TANK_2_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_2_U";
	const std::string  PATH_TO_GREEN_TANK_2_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_2_L";
	const std::string  PATH_TO_GREEN_TANK_2_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_2_R";
	const std::string  PATH_TO_GREEN_TANK_2_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_2_D";
	const std::string  PATH_TO_GREEN_TANK_3_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_3_U";
	const std::string  PATH_TO_GREEN_TANK_3_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_3_L";
	const std::string  PATH_TO_GREEN_TANK_3_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_3_R";
	const std::string  PATH_TO_GREEN_TANK_3_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_3_D";
	const std::string  PATH_TO_GREEN_TANK_4_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_4_U";
	const std::string  PATH_TO_GREEN_TANK_4_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_4_L";
	const std::string  PATH_TO_GREEN_TANK_4_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_4_R";
	const std::string  PATH_TO_GREEN_TANK_4_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_4_D";
	const std::string  PATH_TO_GREEN_TANK_5_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_5_U";
	const std::string  PATH_TO_GREEN_TANK_5_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_5_L";
	const std::string  PATH_TO_GREEN_TANK_5_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_5_R";
	const std::string  PATH_TO_GREEN_TANK_5_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_5_D";
	const std::string  PATH_TO_GREEN_TANK_6_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_6_U";
	const std::string  PATH_TO_GREEN_TANK_6_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_6_L";
	const std::string  PATH_TO_GREEN_TANK_6_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_6_R";
	const std::string  PATH_TO_GREEN_TANK_6_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_6_D";
	const std::string  PATH_TO_GREEN_TANK_7_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_7_U";
	const std::string  PATH_TO_GREEN_TANK_7_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_7_L";
	const std::string  PATH_TO_GREEN_TANK_7_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_7_R";
	const std::string  PATH_TO_GREEN_TANK_7_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_7_D";
	const std::string  PATH_TO_GREEN_TANK_8_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_8_U";
	const std::string  PATH_TO_GREEN_TANK_8_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_8_L";
	const std::string  PATH_TO_GREEN_TANK_8_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_8_R";
	const std::string  PATH_TO_GREEN_TANK_8_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_8_D";

	const std::string  PATH_TO_BOOSTERS_SHIELD = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "shield";
	const std::string  PATH_TO_BOOSTERS_TIME = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "time";
	const std::string  PATH_TO_BOOSTERS_BOMB = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "bomb";
	const std::string  PATH_TO_BOOSTERS_DOUBLE_DAMAGE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "doubleDamage";
	const std::string  PATH_TO_BOOSTERS_EXTRA_LIFE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "extraLife";
	const std::string  PATH_TO_BOOSTERS_LVL_UP = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "lvlUp";
	const std::string  PATH_TO_BOOSTERS_SHOVEL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BOOSTERS + "shovel";

	const std::string  PATH_TO_ARCH_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "archBrickWall";
	const std::string  PATH_TO_ARCH_CONCRETE_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "archConcreteWall";
	const std::string  PATH_TO_BREAK_EAGLE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "breakEagle";
	const std::string  PATH_TO_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "brickWall";
	const std::string  PATH_TO_CONCRETE_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "concreteWall";
	const std::string  PATH_TO_EAGLE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "eagle";
	const std::string  PATH_TO_HALF_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "halfBrickWall";
	const std::string  PATH_TO_HALF_CONCRETE_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "halfConcreteWall";
	const std::string  PATH_TO_ICE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "ice";
	const std::string  PATH_TO_SMALL_ARCH_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallArchBrickWall";
	const std::string  PATH_TO_SMALL_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallBrickWall";
	const std::string  PATH_TO_SMALL_CONCRETE_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallConcreteWall";
	const std::string  PATH_TO_SMALL_HALF_BRICK_WALL = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallHalfBrickWall";
	const std::string  PATH_TO_SMALL_ICE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallIce";
	const std::string  PATH_TO_SMALL_TREE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallTree";
	const std::string  PATH_TO_SMALL_WATER = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "smallWater";
	const std::string  PATH_TO_TREE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "tree";
	const std::string  PATH_TO_WATER = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BLOCKS + "water";

	const std::string  PATH_TO_BULLET_U = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BULLET + "bullet_U";
	const std::string  PATH_TO_BULLET_L = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BULLET + "bullet_L";
	const std::string  PATH_TO_BULLET_R = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BULLET + "bullet_R";
	const std::string  PATH_TO_BULLET_D = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_BULLET + "bullet_D";

	const std::string  PATH_TO_BOMB_EXPLOSION = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_EXPLOSION + "bomb_Explosion";
	const std::string  PATH_TO_TANK_EXPLOSION = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_EXPLOSION + "tank_Explosion";

	const std::string  PATH_TO_REWARD_100 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_REWARD + "100";
	const std::string  PATH_TO_REWARD_200 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_REWARD + "200";
	const std::string  PATH_TO_REWARD_300 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_REWARD + "300";
	const std::string  PATH_TO_REWARD_400 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_REWARD + "400";
	const std::string  PATH_TO_REWARD_500 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_REWARD + "500";

	const std::string  PATH_TO_STAGE_0 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "0";
	const std::string  PATH_TO_STAGE_1 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "1";
	const std::string  PATH_TO_STAGE_2 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "2";
	const std::string  PATH_TO_STAGE_3 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "3";
	const std::string  PATH_TO_STAGE_4 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "4";
	const std::string  PATH_TO_STAGE_5 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "5";
	const std::string  PATH_TO_STAGE_6 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "6";
	const std::string  PATH_TO_STAGE_7 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "7";
	const std::string  PATH_TO_STAGE_8 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "8";
	const std::string  PATH_TO_STAGE_9 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "9";
	const std::string  PATH_TO_STAGE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_STAGE + "stage";

	const std::string  PATH_TO_BORN = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "born";
	const std::string  PATH_TO_BOMB = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "bomb";
	const std::string  PATH_TO_SHIELD = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "shield";
	const std::string  PATH_TO_COUNT_ENEMY = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "countEnemy";
	const std::string  PATH_TO_PAUSE = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "pause";
	const std::string  PATH_TO_GAME_OVER = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "gameOver";
	const std::string  PATH_TO_BOARDER = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + "boarder";

	const std::string  PATH_TO_TEXTURE = MAIN_PATH_TO_DATA + "texture.png";
}