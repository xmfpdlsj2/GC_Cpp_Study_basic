// 소코바 게임 만들어보기

#include <iostream>
#include "SocobaGame.h"


const char gStageData[]{ "\
########\
# .. p #\
# oo   #\
#      #\
########\
" };



void GCS_socobaGame_main()
{
	SocobaObject* state = new SocobaObject[gStageWidth * gStageHeight];

	Initialize(state, gStageData, gStageWidth, gStageHeight);
	while (true)
	{
		Draw(state, gStageWidth, gStageHeight);

		if (CheckClear(state, gStageWidth, gStageHeight))
		{
			break;
		}
		std::cout << "a:left d : right w : up s : down" << std::endl;
		std::cout << "command: ";
		char input;
		std::cin >> input;

		Update(state, input, gStageWidth, gStageHeight);
	}

	std::cout << "\nCongratulations! Jobs done!" << std::endl;

	delete[] state;
	state = nullptr;
}

void Initialize(SocobaObject* pSocoObj, const char* stageData, int width, int height)
{
	for (int i = 0; i < (width * height); i++)
	{
		if (stageData[i] == '#')
		{
			pSocoObj[i] = OBJ_WALL;
		}
		else if (stageData[i] == '.')
		{
			pSocoObj[i] = OBJ_GOAL;
		}
		else if (stageData[i] == 'p')
		{
			pSocoObj[i] = OBJ_PLAYER;
		}
		else if (stageData[i] == 'o')
		{
			pSocoObj[i] = OBJ_BLOCK;
		}
		else
		{
			pSocoObj[i] = OBJ_SPACE;
		}
	}
}

void Draw(const SocobaObject* pSocoObj, int width, int height)
{
	std::cout << std::endl;

	for (int i = 0; i < (width * height); i++)
	{
		switch (*(pSocoObj + i))
		{
			case OBJ_SPACE:
				std::cout << ' ';
				break;
			case OBJ_WALL:
				std::cout << '#';
				break;
			case OBJ_GOAL:
				std::cout << '.';
				break;
			case OBJ_BLOCK:
				std::cout << 'o';
				break;
			case OBJ_BLOCK_ON_GOAL:
				std::cout << 'O';
				break;
			case OBJ_PLAYER:
				std::cout << 'p';
				break;
			case OBJ_PLAYER_ON_GOAL:
				std::cout << 'P';
				break;
			case OBJ_UNKNOWN:
				break;
			default:
				break;
		}
		if (i != 0 && (i + 1) % 8 == 0)
		{
			std::cout << std::endl;
		}
	}
}

bool CheckClear(const SocobaObject* pSocoObj, int width, int height)
{
	for (int i = 0; i < (width * height); i++)
	{
		if (pSocoObj[i] == OBJ_BLOCK)
		{
			return false;
		}
	}
	return true;
}

void Update(SocobaObject* pSocoObj, char move, int width, int height)
{
	int playerIndex{}, targetIndex{}, blockIndex{};
	for (int i = 0; i < (width * height); i++)
	{
		if (pSocoObj[i] == OBJ_PLAYER || pSocoObj[i] == OBJ_PLAYER_ON_GOAL)
		{
			playerIndex = i;
			break;
		}
	}

	switch (move)
	{
		case 'w':
		case 'W':
			targetIndex = playerIndex - width;
			blockIndex = targetIndex - width;
			break;
		case 'a':
		case 'A':
			targetIndex = playerIndex - 1;
			blockIndex = targetIndex - 1;
			break;
		case 's':
		case 'S':
			targetIndex = playerIndex + width;
			blockIndex = targetIndex + width;
			break;
		case 'd':
		case 'D':
			targetIndex = playerIndex + 1;
			blockIndex = targetIndex + 1;
			break;
		default:
			targetIndex = playerIndex;
			std::cout << std::endl;
			std::cout << "올바른 입력이 아닙니다." << std::endl;
			break;
	}

	if (pSocoObj[targetIndex] == OBJ_WALL)
	{
		std::cout << std::endl;
		std::cout << "벽으로 이동 할 수 없습니다." << std::endl;
	}
	else if (pSocoObj[targetIndex] == OBJ_SPACE)
	{
		pSocoObj[targetIndex] = OBJ_PLAYER;
		pSocoObj[playerIndex] = (pSocoObj[playerIndex] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
	}
	else if (pSocoObj[targetIndex] == OBJ_GOAL)
	{
		pSocoObj[targetIndex] = OBJ_PLAYER_ON_GOAL;
		pSocoObj[playerIndex] = (pSocoObj[playerIndex] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
	}
	else if (pSocoObj[targetIndex] == OBJ_BLOCK || pSocoObj[targetIndex] == OBJ_BLOCK_ON_GOAL)
	{
		if (pSocoObj[blockIndex] == OBJ_WALL || pSocoObj[blockIndex] == OBJ_BLOCK)
		{
			std::cout << std::endl;
			std::cout << "이동 할 수 없습니다." << std::endl;
			return;
		}
		else if (pSocoObj[blockIndex] == OBJ_GOAL)
		{
			pSocoObj[blockIndex] = OBJ_BLOCK_ON_GOAL;
			pSocoObj[targetIndex] = (pSocoObj[targetIndex] == OBJ_GOAL || pSocoObj[targetIndex] == OBJ_BLOCK_ON_GOAL) ? OBJ_PLAYER_ON_GOAL : OBJ_PLAYER;
			pSocoObj[playerIndex] = (pSocoObj[playerIndex] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
		}
		else // 나머지 OBJ_SPACE 일떄
		{
			pSocoObj[blockIndex] = OBJ_BLOCK;
			pSocoObj[targetIndex] = (pSocoObj[targetIndex] == OBJ_GOAL || pSocoObj[targetIndex] == OBJ_BLOCK_ON_GOAL) ? OBJ_PLAYER_ON_GOAL : OBJ_PLAYER;
			pSocoObj[playerIndex] = (pSocoObj[playerIndex] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
		}
	}
}