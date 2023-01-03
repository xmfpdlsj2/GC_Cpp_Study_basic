// 구글 클래스 제출. if ~ array 종합 연습문제들

#include <iostream>

int main()
{
    //// 조건 - 문자열 변수의 크기는 임의로 정하셔도 됩니다. 
    //// 1번. 문자열을 입력받아 거꾸로 출력하는 프로그램을 만들어 보세요.
    //// 예시: 입력: flower 출력: rewolf

    //const int MAXCHAR{ 11 };
    //char inputStrings[MAXCHAR]{};
    //int count{};

    //std::cout << "최대 10글까지 가능\n입력: ";
    //std::cin >> inputStrings;

    //while (inputStrings[count] != 0)
    //{
    //    count++;
    //}

    //for (int i = 0; i < count; i++)
    //{
    //    for (int j = (i + 1); j < count; j++)
    //    {
    //        char temp{};
    //        temp = inputStrings[i];
    //        inputStrings[i] = inputStrings[j];
    //        inputStrings[j] = temp;
    //    }
    //}
    //std::cout <<"출력: " << inputStrings;

    //// 2번. 두 문자열을 입력받아 하나의 문자열로 만들어 봅시다.
    //// 예시: 입력: visual studio -> 출력: visualstudio (두 문자열을 하나의 문자열로)
    //// 입력의 공백은 입력의 끝을 의미/문자열 변수 2개 입력, 출력시 하나의 문자열
    //// 모든 문자열을 \0 으로 끝남/두 문자열을 각각 출력하라는 의미 아님.

    //const int MAXCHAR{ 11 };
    //char inputStringsA[MAXCHAR]{}, inputStringsB[MAXCHAR]{};
    //char inputStringsSum[MAXCHAR * 2]{};
    //int countA{}, countB{};
    //std::cout << "각각 최대 10글까지 가능\n입력: ";
    //std::cin >> inputStringsA >> inputStringsB;

    //while (inputStringsA[countA] != 0)
    //{
    //    inputStringsSum[countA] = inputStringsA[countA];
    //    countA++;
    //}
    //
    //while (inputStringsB[countB] != 0)
    //{
    //    inputStringsSum[countA] = inputStringsB[countB];
    //    countA++;
    //    countB++;
    //}
    //std::cout << "출력: " << inputStringsSum;


    // 3번. 문자열을 입력받아 모두 대문자로 출력하는 프로그램을 만들어 봅시다.
    //// 예시: 입력: flower -> 출력: FLOWER

    //const int MAXCHAR{ 11 }, TOCAP{ 32 };
    //char inputStrings[MAXCHAR]{};
    //std::cout << "최대 10글까지 가능\n입력: ";
    //std::cin >> inputStrings;

    //for (int i = 0; i < MAXCHAR; i++)
    //{
    //    if (inputStrings[i] == 0)
    //    {
    //        break;
    //    }

    //    int cap = (int)inputStrings[i] - TOCAP;
    //    if (cap < 65 || cap > 122)
    //    {
    //        continue;
    //    }
    //    inputStrings[i] = char(cap);
    //}
    //std::cout << "출력: " << inputStrings;


    //// 4번. 테트리스 블럭을 회전해 봅시다. (고난도 시작)
    //// 블럭 하나 드림. 실제 그래픽 데이터은 구조나 다름없음.
    ////int block[3][3]
    ////{
    ////    {0,1,0},
    ////    {0,1,1},
    ////    {0,1,0}
    ////} 이 블럭 모양을 그리고 사용자한테 입력을 받아요. 예를 들어 0이면 왼쪽 1이면 오른쪽
    //// 이걸 그대로 회전시킨 모양으로 출력 하면됨.
    //
    //const int MAXCOUNT{ 3 };
    //int block[3][3]
    //{
    //    {0,1,0},
    //    {0,1,1},
    //    {0,1,0}
    //};
    //int rotate[3][3]{}, inputNum{};

    //while (inputNum != 3)
    //{
    //    std::cout << "입력(0: 왼쪽. 1: 오른쪽 3:종료): ";
    //    std::cin >> inputNum;

    //    if (inputNum == 0) // 왼쪽 회전
    //    {
    //        for (int i = 0; i < MAXCOUNT; i++)
    //        {
    //            for (int j = 0; j < MAXCOUNT; j++)
    //            {
    //                rotate[i][j] = block[j][(MAXCOUNT - 1) - i];
    //            }
    //        }
    //    }
    //    else
    //    {
    //        for (int i = 0; i < MAXCOUNT; i++)
    //        {
    //            for (int j = 0; j < MAXCOUNT; j++)
    //            {
    //                rotate[i][j] = block[(MAXCOUNT - 1) - j][i];
    //            }
    //        }
    //    }

    //    //초기화
    //    for (int i = 0; i < MAXCOUNT; i++)
    //    {
    //        for (int j = 0; j < MAXCOUNT; j++)
    //        {
    //            block[i][j] = rotate[i][j];
    //        }
    //    }

    //    //출력
    //    for (int i = 0; i < MAXCOUNT; i++)
    //    {
    //        for (int j = 0; j < MAXCOUNT; j++)
    //        {
    //            std::cout << rotate[i][j] << ' ';
    //        }
    //        std::cout << std::endl;
    //    }
    //}


    //// 응용편
    //// 1번. 파스칼 삼각형을 5열까지 출력해 보세요.
    ////      1
    ////     1 1
    ////    1 2 1 
    //const int MAXCOUNT{ 5 };
    //int pascal[MAXCOUNT] {};

    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    for (int k = 0; k < ((MAXCOUNT - 1) - i); k++)
    //    {
    //        std::cout << ' ';
    //    }

    //    for (int j = i; j >= 0; j--)
    //    {
    //        if (j == 0)
    //        {
    //            pascal[0] = 1;
    //            std::cout << pascal[0];
    //            continue;
    //        }
    //        pascal[j] = pascal[j] +pascal[j - 1];
    //        std::cout << pascal[j]<< ' ';
    //    }
    //    std::cout << std::endl;
    //}


    //// 2번. 달팽이 행열, 5x5 형을 만들어봅시다.
    //// 예시: 
    //// 1  2  3  4  5
    //// 16 17 18 19 6
    //// 15 24 25 20 7   
    //// 14 23 22 21 8
    //// 13 12 11 10 9

    //const int MAXCOUNT{ 15 };
    //int snail[MAXCOUNT][MAXCOUNT]{}, number{ 1 };
    //int dirCountR{}, dirCountL{}, dirCountU{}, dirCountD{};

    //for (int i = 0; i < ((MAXCOUNT * 2) - 1); i++)  // 숫자 진행 방향이 꺽이는 횟수 만큼 돌림
    //{
    //    int direction = i % 4;
    //    switch (direction)
    //    {
    //        case 0:     // 오른쪽
    //            for (int r = 0; r < (MAXCOUNT - (dirCountR * 2)); r++) // 한번 들어올때마다 총 반복회수가 2씩 차감
    //            {
    //                snail[dirCountR][r + dirCountR] = number;
    //                number++;
    //            }
    //            dirCountR++;    
    //            break;

    //        case 1:     // 아래쪽
    //            for (int d = 0; d < ((MAXCOUNT - 1) - (dirCountD * 2)); d++)
    //            {
    //                snail[(dirCountD + 1) + d][(MAXCOUNT - 1) - dirCountD] = number;
    //                number++;
    //            }
    //            dirCountD++;
    //            break;

    //        case 2:     // 왼쪽
    //            for (int l = 0; l < ((MAXCOUNT - 1) - (dirCountL * 2)); l++)
    //            {
    //                int index = (MAXCOUNT - 1) - dirCountL;
    //                snail[index][(index - 1) - l] = number;
    //                number++;
    //            }
    //            dirCountL++;
    //            break;

    //        case 3:     // 위쪽
    //            for (int u = 0; u < ((MAXCOUNT - 2) - (dirCountU * 2)); u++)
    //            {
    //                int index = (MAXCOUNT - 2) - dirCountU;
    //                snail[index - u][dirCountU] = number;
    //                number++;
    //            }
    //            dirCountU++;
    //            break;

    //        default:
    //            break;
    //    }
    //}

    ////출력
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    for (int j = 0; j < MAXCOUNT; j++)
    //    {
    //        int num = snail[i][j];
    //        std::cout << num;

    //        // 3자리 까지만 공백추가
    //        if (num < 10) 
    //        {
    //            std::cout << "   ";
    //        }
    //        else if (num < 100)
    //        {
    //            std::cout << "  ";
    //        }
    //        else
    //        {
    //            std::cout << " ";
    //        }
    //    }
    //    std::cout << std::endl;
    //}


    //// 3번. 5x5 홀수 마방진을 생성해 봅시다. (가로세로 합이 같다는 수학적 연구)
    //// 규칙: 
    //// 0.첫 행의 가운데는 1로 시작 
    //// 1.오른쪽 위로 이동, 위로 더이상 못가면 가장 마지막행으로 
    //// 2.오른쪽으로 더 이상 못가면 가장 첫 열로 이동 (왼쪽)
    //// 3.이동한 곳에 이미 숫자가 있으면, 출발점 바로 아래로 이동
    //// 홀수만 이런 방식이 통함 (아래는 예제)
    //// 17 24 1  8  15
    //// 23 5  7  14 16
    //// 4  6  13 20 22
    //// 10 12 19 21 3
    //// 11 18 25 2  9


    //const int MAXCOUNT{ 9 };
    //int sdocu[MAXCOUNT][MAXCOUNT]{}, count{ 1 };
    //int row{}, col{};

    //for (int i = 0; i < (MAXCOUNT*MAXCOUNT); i++)
    //{
    //    if (i == 0) // 시작 위치 지정
    //    {
    //        int startPos = MAXCOUNT / 2;
    //        sdocu[i][startPos] = count;
    //        row = i;
    //        col = startPos;
    //        count++;
    //        continue;
    //    }

    //    row--;  // 다음 좌표
    //    col++;

    //    if (row >= 0 && col < MAXCOUNT) // 수평, 수직 다 됨.
    //    {
    //        if (sdocu[row][col] == 0)
    //        {
    //            sdocu[row][col] = count;
    //            count++;
    //        }
    //        else
    //        {
    //            row++;  // 이전 출발 좌표
    //            col--;

    //            row++;  // 바로 아래로 
    //            sdocu[row][col] = count;
    //            count++;
    //        }
    //    }
    //    else if (row < 0) // 수평 확인
    //    {
    //        if (col < MAXCOUNT) // 수직 확인
    //        {
    //            row = MAXCOUNT - 1;
    //            sdocu[row][col] = count;
    //            count++;
    //        }
    //        else    // 수평, 수직 다 안됨
    //        {
    //            row++;
    //            col--;

    //            row++;
    //            sdocu[row][col] = count;
    //            count++;
    //        }
    //    }
    //    else if (col >= MAXCOUNT) // 수평 됨, 수직 안됨
    //    {
    //        col = 0;
    //        sdocu[row][col] = count;
    //        count++;
    //    }
    //}

    //// 출력
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    for (int j = 0; j < MAXCOUNT; j++)
    //    {
    //        int num = sdocu[i][j];
    //        std::cout << num;

    //        // 3자리 까지만 공백추가
    //        if (num < 10)
    //        {
    //            std::cout << "   ";
    //        }
    //        else if (num < 100)
    //        {
    //            std::cout << "  ";
    //        }
    //        else
    //        {
    //            std::cout << " ";
    //        }
    //    }
    //    std::cout << std::endl;
    //}

    //// EXTRA) 짝수 마방진을 구현해 봅시다. 
    //// 만드는 방법: 구글링
}