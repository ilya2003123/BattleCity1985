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

	const std::map<std::string, std::vector<std::tuple<int, bool, int, int>>> frameStatic =
	{
		{
			"static",
			{
				{0, 0, -1, -1}
			}
		}
	};

	const std::map<std::string, std::vector<std::tuple<int, bool, int, int>>> framesTank =
	{
		{
			"left",
			{
				{0, 1, 2, 16}
			}
		},
		{
			"up",
			{
				{2, 1, 2, 16}
			}
		},
		{
			"down",
			{
				{4, 1, 2, 16}
			}
		},
		{
			"right",
			{
				{6, 1, 2, 16}
			}
		},
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

	const std::string  PATH_TO_YELLOW_TANK_1 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_1";
	const std::string  PATH_TO_YELLOW_TANK_2 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_2";
	const std::string  PATH_TO_YELLOW_TANK_3 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_3";
	const std::string  PATH_TO_YELLOW_TANK_4 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_4";
	const std::string  PATH_TO_YELLOW_TANK_5 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_5";
	const std::string  PATH_TO_YELLOW_TANK_6 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_6";
	const std::string  PATH_TO_YELLOW_TANK_7 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_7";
	const std::string  PATH_TO_YELLOW_TANK_8 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_YELLOW_TANK + "yellowTank_8";

	const std::string  PATH_TO_RED_TANK_1 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_1";
	const std::string  PATH_TO_RED_TANK_2 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_2";
	const std::string  PATH_TO_RED_TANK_3 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_3";
	const std::string  PATH_TO_RED_TANK_4 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_4";
	const std::string  PATH_TO_RED_TANK_5 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_5";
	const std::string  PATH_TO_RED_TANK_6 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_6";
	const std::string  PATH_TO_RED_TANK_7 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_7";
	const std::string  PATH_TO_RED_TANK_8 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_RED_TANK + "redTank_8";

	const std::string  PATH_TO_GREY_TANK_1 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_1";
	const std::string  PATH_TO_GREY_TANK_2 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_2";
	const std::string  PATH_TO_GREY_TANK_3 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_3";
	const std::string  PATH_TO_GREY_TANK_4 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_4";
	const std::string  PATH_TO_GREY_TANK_5 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_5";
	const std::string  PATH_TO_GREY_TANK_6 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_6";
	const std::string  PATH_TO_GREY_TANK_7 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_7";
	const std::string  PATH_TO_GREY_TANK_8 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREY_TANK + "greyTank_8";

	const std::string  PATH_TO_GREEN_TANK_1 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_1";
	const std::string  PATH_TO_GREEN_TANK_2 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_2";
	const std::string  PATH_TO_GREEN_TANK_3 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_3";
	const std::string  PATH_TO_GREEN_TANK_4 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_4";
	const std::string  PATH_TO_GREEN_TANK_5 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_5";
	const std::string  PATH_TO_GREEN_TANK_6 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_6";
	const std::string  PATH_TO_GREEN_TANK_7 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_7";
	const std::string  PATH_TO_GREEN_TANK_8 = MAIN_PATH_TO_DATA + MAIN_PATH_TO_RESOURCE + MAIN_PATH_TO_GREEN_TANK + "greenTank_8";

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