// 소코바 게임 만들어보기_썜과 함께. 피드벡

#include <iostream>
#include "SocobaGame.h"


const char gStageData_SSam[]{ "\
########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########\n\
" };


// 썜과 함께 따라가보는 피드벡
void GCS_socobaGame_SSam_main()
{
	SocobaObject* state = new SocobaObject[gStageWidth * gStageHeight];

	Initialize_SSam(state, gStageData_SSam, gStageWidth, gStageHeight);
	while (true)
	{
		Draw_SSam(state, gStageWidth, gStageHeight);

		if (CheckClear_SSam(state, gStageWidth, gStageHeight))
		{
			break;
		}
		std::cout << "a:left d : right w : up s : down" << std::endl;
		std::cout << "command: ";
		char input;
		std::cin >> input;

		Update_SSam(state, input, gStageWidth, gStageHeight);
	}

	std::cout << "\nCongratulations! Jobs done!" << std::endl;

	delete[] state;
	state = nullptr;
}

void Initialize_SSam(SocobaObject* state, const char* stageData, int w, int h)
{
	const char* d = stageData;
	SocobaObject t;
	int x{}, y{};

	while (*d != '\0')
	{
		switch (*d)
		{
			case '#':
				t = OBJ_WALL;
				break;

			case ' ':
				t = OBJ_SPACE;
				break;

			case 'o':
				t = OBJ_BLOCK;
				break;

			case 'O':
				t = OBJ_BLOCK_ON_GOAL;
				break;

			case '.':
				t = OBJ_GOAL;
				break;

			case 'p':
				t = OBJ_PLAYER;
				break;

			case 'P':
				t = OBJ_PLAYER_ON_GOAL;
				break;

			case '\n':
				++y;
				x = 0;
				t = OBJ_UNKNOWN;
				break;

			default:
				t = OBJ_UNKNOWN;
				break;
		}

		++d;

		if (t != OBJ_UNKNOWN)
		{
			state[y * w + x] = t;
			++x;
		}
	}
}

void Draw_SSam(const SocobaObject* state, int w, int h)
{
	const char font[] = { ' ', '#', '.', 'o', 'O' , 'p', 'P' };
	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; x++)
		{
			SocobaObject o = state[y * w + x];
			std::cout << font[o];
		}
		std::cout << std::endl;
	}
}

bool CheckClear_SSam(const SocobaObject* state, int w, int h)
{
	for (int i = 0; i < (w * h); i++)
	{
		if (state[i] == OBJ_BLOCK)
		{
			return false;
		}
	}
	return true;
}

void Update_SSam(SocobaObject* state, char input, int w, int h)
{
	int dx{}, dy{};

	switch (input)
	{
		case 'a':
			dx = -1;
			break;

		case 'd':
			dx = 1;
			break;

		case 'w':
			dy = -1;
			break;

		case 's':
			dy = 1;
			break;
	}
	// 현재 플레이어가 어디 있을까?
	int i{};
	for (i = 0; i < w * h; ++i)
	{
		if (state[i] == OBJ_PLAYER || state[i] == OBJ_PLAYER_ON_GOAL)
		{
			break;
		}
	}

	int x = i % w;
	int y = i / w;

	// 이게 이동한 위치
	int tx = x + dx;
	int ty = y + dy;

	// 벽을 뚫고 나가면 안됨 
	if (tx < 0 || ty < 0 || tx >= w || ty >= h)
	{
		return;
	}

	// 이동가능, 빈칸 or 골인지점
	int p = y * w + x;      // 현재 플레이어 위치 
	int tp = ty * w + tx;   // 이동 할 위치

	if (state[tp] == OBJ_SPACE || state[tp] == OBJ_GOAL)
	{
		// 이동 가능할때
		state[p] = (state[p] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
		state[tp] = (state[tp] == OBJ_GOAL) ? OBJ_PLAYER_ON_GOAL : OBJ_PLAYER;
	}
	else if (state[tp] == OBJ_BLOCK || state[tp] == OBJ_BLOCK_ON_GOAL)
	{
		// 상자를 밀때
		// 상자가 이동할 위치는 플레이어가 갈 위치에서 한칸 더가면 됩니다.
		int tx2 = tx + dx;
		int ty2 = ty + dy;

		if (tx2 < 0 || ty2 < 0 || tx2 >= w || ty2 >= h)
		{
			// 위와 똑같이 벽을 뚫고 나가면 안되는 경우
			return;
		}

		int tp2 = ty2 * w + tx2; // 이것이 상자가 밀린 위치의 인덱스
		if (state[tp2] == OBJ_SPACE || state[tp2] == OBJ_GOAL)
		{
			state[p] = (state[p] == OBJ_PLAYER_ON_GOAL) ? OBJ_GOAL : OBJ_SPACE;
			state[tp] = (state[tp] == OBJ_BLOCK_ON_GOAL) ? OBJ_PLAYER_ON_GOAL : OBJ_PLAYER;
			state[tp2] = (state[tp2] == OBJ_GOAL) ? OBJ_BLOCK_ON_GOAL : OBJ_BLOCK;
		}
	}
}
