// 구글 클래스 제출. function, structure 관련 종합 연습문제들

#include <iostream>
#include <cstdlib>  // 난수 생성을 위해
#include <ctime>    // 난수 생성을 위해
#include <string>

// 1번
enum MonsterType
{
    WOLF,
    DEMON,
    SLIME
};

struct Monster
{
    MonsterType type;
    std::string name;
    int hp{};
    int mp{};
};

// 1번
void PrintMosterStatus(Monster);

// 2번
int GetRandom3Num();
int ReadInputNumber();
bool IsDuplicationNumber(int, int);
bool BaseBallTest(int, int);

int main()
{
	//// 1번. 다음과 같이 설계된 몬스터를 만들어 봅시다.
	//// 타입: (Wolf, Demon, Slime)
	//// HP: 정수, MP: 정수
	//// 위 구조대로 acientWolf(HP:100, MP:0), diablo(HP:1000,MP:1000),gome(HP:10, MP:10)
	//// 각 몬스터를 출력할 수 있는 함수를 만들어 봅시다.
	//Monster acientWolf;
	//Monster diablo;
	//Monster gome;

	//acientWolf.name = "Acient Wolf";
	//acientWolf.hp = 100;
	//diablo.name = "Diablo";
	//diablo.hp = 1000;
	//diablo.mp = 1000;
	//gome.name = "Slime Gome";
	//gome.hp = 10;
	//gome.mp = 10;

	//PrintMosterStatus(acientWolf);
	//PrintMosterStatus(diablo);
	//PrintMosterStatus(gome);

	//2번. 숫자 야구 게임을 만들어 봅시다.
	//임의의 3자리 숫자를 만들어 냅니다. (우리는 정답이 825로 고정)
	//질문자는 3자리 숫자를 불러서 정답과 다음과 같은 규칙으로 추론합니다.
	//스트라이크: 숫자가 같고 자릿수도 같을때
	//볼: 숫자는 같지만 자릿수가 다른 경우
	//아웃: 숫자가 다른 경우
	//ex) 정답 456 
	//숫자를 입력하세요: 123 // 3 OUT
	//숫자를 입력하세요: 124 // 1Ball 2 OUT -> 4는 잇는데 자릿수는 다름
	//숫자를 입력하세요: 412 // 1 STRIKE 2 OUT 
	//숫자를 입력하세요: 465 // 1 STRIKE 2 BALL

	srand((unsigned int)time(NULL)); // 씨드 값으로 현재시간 이용

	int mainNumber{ 0 };
	mainNumber = GetRandom3Num();
	
	while (BaseBallTest(ReadInputNumber(), mainNumber));

	// EXTRA. 숫자 야구의 정답을 임의의 세자리 숫자로 만들어 봅시다.
	// rand() 함수를 검색해서 사용법을 공부해보세요. (난수 함수)
	// 동일한 숫자는 반복되면 안됩니다. 서로다른 3개의 숫자, 0은 안됨.
	
	// 통합으로 2, 3번 다 풀어버림.
}

// 1번
void PrintMosterStatus(Monster monster)
{
    std::cout << monster.name << '(' << "HP:" << monster.hp << ", MP:"
        << monster.mp << ')' << std::endl;
}

// 2번
int GetRandom3Num()
{
    int random{ 0 };

    do
    {
        random = rand() % 1000;
        if (random < 100)
        {
            random += 100;
        }
        std::cout << random << std::endl;

    } while (IsDuplicationNumber(3, random));

    return random;
}

int ReadInputNumber()
{
    int number; 
    while (true)
    {
        bool isSameNumber{ false };

        std::cout << "\n서로다른 3 자리 수를 입력해 주세요: ";
        std::cin >> number;

        if (number > 99 && number <= 999)
        {
            if (IsDuplicationNumber(3, number))
            {
                std::cout << "동일한 숫자가 존재합니다.\n" << std::endl;
            }
            else
            {
                break;
            }
        }
    }

    return number;
}

bool IsDuplicationNumber(int count,  int number)
{
    std::string numberToString{ "" };
    numberToString = std::to_string(number); // 정수를 문자열로

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (numberToString[i] == numberToString[j])
            {
                return true;
            }
        }
    }
    return false;
}

bool BaseBallTest(int inputNumber, int answer)
{
    const int MAXCOUNT{ 3 };
    int strike{}, ball{}, out{};

    std::string numToString{ "" };
    std::string anwerToString{ "" };
    numToString = std::to_string(inputNumber); // 정수를 문자열로
    anwerToString = std::to_string(answer); // 정수를 문자열로

    for (int i = 0; i < MAXCOUNT; i++)
    {
        for (int j = 0; j < MAXCOUNT; j++)
        {
            if (numToString[i] == anwerToString[j])
            {
                if (i == j)
                {
                    strike++;
                    break;
                }
                else
                {
                    ball++;
                    break;
                }
            }
        }
    }

    out = MAXCOUNT - strike - ball;
    if (out == MAXCOUNT)
    {
        std::cout << "3 OUT" << std::endl;
        return true;
    }
    else if (out == MAXCOUNT - 1)
    {
        if (strike != 0)
        {
            std::cout << strike << " STRIKE" << "  2 OUT" << std::endl;
        }
        else
        {
            std::cout << ball << " BALL" << "  2 OUT" << std::endl;
        }
        return true;
    }
    else if (out == MAXCOUNT - 2)
    {
        if (strike == 0)
        {
            std::cout << ball << " BALL" << "  1 OUT" << std::endl;
        }
        else if (strike == 1)
        {
            std::cout << strike << " STRIKE  " << ball << " BALL" << "  1 OUT" << std::endl;
        }
        else if (strike == 2)
        {
            std::cout << strike << " STRIKE" << "  1 OUT" << std::endl;
        }
        return true;
    }
    else
    {
        if (strike == MAXCOUNT)
        {
            std::cout << "정답입니다!" << std::endl;
            return false;
        }
        else if (strike == MAXCOUNT - 1)
        {
            std::cout << strike << " STRIKE  " << ball << " BALL" << std::endl;
            return true;
        }
        else if (strike == MAXCOUNT - 2)
        {
            std::cout << strike << " STRIKE  " << ball << " BALL" << std::endl;
            return true;
        }
        else
        {
            std::cout << "3 BALL" << std::endl;
            return true;
        }
    }
}