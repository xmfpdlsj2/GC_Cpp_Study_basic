// 구글 클래스 제출. recurstion(재귀함수) 관련 연습문제들

#include <iostream>

int Factorial(int);
int FibonacciNumbers(int);

void Hanoi(int, char, char, char, int&);

void ShowCurrentHonoiState(int[3][3]);
void HanoiCheck(int[3][3], int = 0);

int main()
{
    //// 1번. 팩토리얼을 구하세요.
    //// 4! = 4 * 3...
    //// n이 자연수 일때 1에서 n까지의 모든 자연수의 곱
    //// 0! = 1
    //// 힌트: F(4) = 4 * F(3)
    //std::cout << Factorial(4) << std::endl;

    //// 2번. 피보나치 수열을 구하세요.
    //// f(0) = f(1) = 1
    //// f(n) = f(n-1) + f(n-2) 의 형태겠죠. 
    //std::cout << FibonacciNumbers(6) << std::endl;

    //// 하노이탑 응용문제
    //// 1번. 키보드로 원반의 갯수를 입력받아 다음과 같이 출력해 보세요.
    //// 원반의 갯수를 입력하세요: 3
    //// A에서 C로 원반 1을 옮깁니다. 이렇게 나오도록.
    //int plateCount{ 0 }, order{};
    //int& refOrder{ order };
    //std::cout << "하노이 탑 원반의 개수를 입력하세요: ";
    //std::cin >> plateCount;

    //Hanoi(plateCount, 'A', 'B', 'C', refOrder);

    
    //// BONUS) 하노이의 탑 게임을 만들어 봅시다.
    //// 1 0 0
    //// 2 0 0 
    //// 3 0 0
    //// 어디로 옮길까요? 1 2 (1에서 2로 이동 입력받음)
    //// 0 0 0
    //// 2 0 0    
    //// 3 1 0
    //// 어디로 옮길까요? 1 2 (큰 원반은 작은 원반위로 옮길수 없음)
    //// 옮길수 없습니다. 출력
    //// 정답이면, 축하합니다. 총 *회 만에 클리어 하셨습니다. 출력
    //// TIP) 배열을 사용, 게이머는 프로그래머의 의도대로 행동하지 않는 다는것
    //int aLine[3][3]{ {1,2,3}, {}, {} }, bLine[3]{}, cLine[3]{};
    //ShowCurrentHonoiState(aLine);
    //HanoiCheck(aLine);
}

// 1번
int Factorial(int start)
{
    // base case
    if (start < 1)
    {
        return 1;
    }

    // recursive case
    return start * Factorial(start - 1);
}

// 2번
int FibonacciNumbers(int count)
{
    int result{ 0 };

    // base case
    if (count < 3)
    {
        return 1;
    }

    // recursive case
    result = FibonacciNumbers(count - 1) + FibonacciNumbers(count - 2);
    return result;
}

// 1번 하노이 출력
void Hanoi(int count, char from, char temp, char to, int& order)
{
    // basecase
    if (count < 1)
    {
        return;
    }

    //recursive case
    Hanoi(count - 1, from, to, temp, order);
    order++;
    std::cout << order << ':' << from << "에서 " << to << "로 원반 " << count << "을(를) 옮깁니다\n" << std::endl;
    return Hanoi(count - 1, temp, from, to, order);
}

// 2번 하노이탑 게임
void ShowCurrentHonoiState(int line[3][3])
{
    std::cout << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << ' ' << line[0][i] << ' ' << line[1][i] << ' ' << line[2][i] << std::endl;
    }
}

void HanoiCheck(int line[3][3], int count)
{
    int from{}, to{}, temp{};
    std::cout << "어디로 옮길까요? (ex)1 2): ";
    std::cin >> from >> to;

    if (from < 1 || from > 3 || to < 1 || to > 3)
    {
        std::cout << "\n\n입력 범위는 1 ~ 3 입니다." << std::endl;
        ShowCurrentHonoiState(line);
        HanoiCheck(line, count);
    }
    else if (from == to)
    {
        std::cout << "\n\n같은 곳으로는 움직일 수 없습니다." << std::endl;
        ShowCurrentHonoiState(line);
        HanoiCheck(line, count);
    }

    from--;     // 1번라인이 0번 배열
    to--;

    for (int i = 0; i < 3; i++)
    {
        if (line[from][2] == 0)
        {
            std::cout << "\n\n원판이 없습니다." << std::endl;
            ShowCurrentHonoiState(line);
            HanoiCheck(line, count);
            return;
        }

        if (line[from][i] != 0)
        {
            for (int j = 2; j >= 0; j--)     // 밑에서 부터 확인
            {
                if (line[to][j] == 0)
                {
                    line[to][j] = line[from][i];
                    line[from][i] = 0;
                    break;
                }
                else
                {
                    if (line[to][j] < line[from][i])    // 아래 원반보다 크면
                    {
                        std::cout << "\n\n작은 원반위에 더 큰 원반은 올수 없습니다." << std::endl;
                        ShowCurrentHonoiState(line);
                        HanoiCheck(line, count);
                        return;
                    }
                }
            }
            break;
        }

    }

    count++;
    ShowCurrentHonoiState(line);

    if (line[2][0] == 1)
    {
        std::cout << "\n축하합니다! 총 " << count << "회 만에 클리어 하셨습니다." << std::endl;
        return;
    }

    std::cout << "\n현재 " << count << "번 움직였습니다." << std::endl;
    HanoiCheck(line, count);
}
