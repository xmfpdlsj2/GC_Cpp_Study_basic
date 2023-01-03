// 구글 클래스 제출. while, for문 관련 연습문제들

#include <iostream>

int main()
{
	//// while for 문 연습문제
	//// 최초의 기네스 등제 프로그램 0~99까지 제곱 출력
	//// 1번 while문
	//int normal{ 0 }, square{ 0 };
	//while (normal < 100)
	//{
	//    square = normal * normal;
	//    std::cout<< normal << " : " << square <<std::endl;
	//    normal++;
	//}

	//// 2번 for문 
	//for (int i = 0, j = 0; i < 100; i++, j = i * i)
	//{
	//    std::cout<< i << " : " << j <<std::endl;
	//}

	//// 반복구문 연습문제
	//// 1.다음과 같이 화면에 출력. 1~5
	//const int MAXCOUNT = 5;
	//for (int i = 1; i <= maxCount; i++)
	//{
	//    std::cout << i << std::endl;
	//}

	//// 2.다음과 같이 화면에 출력. 1 3 5 ... 9;
	//const int MAXCOUNT = 10;
	//for (int i = 1; i < maxCount; i = i + 2)
	//{
	//    std::cout << i << std::endl;
	//}

	//// 3.숫자1에서 10까지의 합을 출력합시다.
	//const int MAXCOUNT = 10;
	//int sum = 0;
	//for (int i = 1; i <= maxCount; i++)
	//{
	//    sum += i;
	//}
	//std::cout <<"1~10까지의 합은: " << sum << std::endl;

	//// 4.다음과 같이 숫자를 출력해 보세요. 1:1 1:2 1:3 2:1 2:2 2:3 
	//for (int i = 1; i < 3; i++)
	//{
	//    for (int j = 1; j < 4; j++)
	//    {
	//        std::cout << i << ":" << j << std::endl;
	//    }
	//}

	//// 5.화면에 a부터z까지 출력합시다. 힌트:아스키 코드
	//const int aPOINT{ 97 }, ASCIICOUNT{ 127 }, MAXCOUNT{ 26 };
	//char alpabet{ 'a' };
	//for (int i = 0, j = 0; i < ASCIICOUNT; i++)
	//{
	//    if (i >= aPOINT)
	//    {
	//        if (j < 26)
	//        {
	//            alpabet = char(i);
	//            std::cout << alpabet << std::endl;
	//            j++;
	//        }
	//    }
	//}

	//// 다음날 형변환 수업후 
	//for (int i = 97; i <= 122; i++)
	//{
	//    std::cout << (char)i << std::endl;
	//}
	//for (char i = 'a'; i <= 'z'; i++)
	//{
	//    std::cout << i << std::endl;
	//}

	//// 6.화면에 구구단 2단을 출력해 봅시다. 2 x 1 = 2....
	//const int DAN{ 2 }, MAXCOUNT{ 9 };
	//int result{ 0 };

	//for (int i = 1; i <= MAXCOUNT; i++)
	//{
	//    result = DAN * i;
	//    std::cout << DAN << " x " << i << " = " << result << std::endl;
	//}

	//// 7.출력할 구구단을 입력받고 해당 구구단을 출력해 봅시다. 
	//const int MAXCOUNT{ 9 };
	//int inputDan{ 0 }, result{ 0 };
	//std::cout << "몇 단을 출력할까요(2~99단 까지만 지원): ";
	//std::cin >> inputDan;
	//std::cout << inputDan << " 단" << std::endl;

	//if (inputDan < 2 || inputDan > 99)
	//{
	//    std::cout << "지원 안함" << std::endl;
	//}
	//else
	//{
	//    for (int i = 1; i <= MAXCOUNT; i++)
	//    {
	//        result = inputDan * i;
	//        std::cout << inputDan << " x " << i << " = " << result << std::endl;
	//    }
	//}

	//// 8.모든 구구단을 화면에 출력해 봅시다.
	//// ---2단---
	//// 2x 1 =2 ...
	//// ---3단--- ...
	//const int MAXCOUNT{ 9 };
	//int result{ 0 };
	//std::cout << "2 ~ 9단까지 출력" << std::endl;
	//for (int i = 2; i <= MAXCOUNT; i++)
	//{
	//    std::cout << "\n--- " << i << " 단" << " ---" << std::endl;
	//    for (int j = 1; j <= MAXCOUNT; j++)
	//    {
	//        result = i * j;
	//        std::cout << i << " x " << j << " = " << result << std::endl;
	//    }
	//}


	//// 9.두 개의 주사위를 던졌을 때 두 눈의 합이 6이 되는 모든 경우의 수를 구하세요.
	//// 1 5, 2 4, 3 3, ....
	//const int MAXCOUNT{ 6 };
	//int result{ 0 };

	//std::cout << "a,b 두 주사위의 합이 6인 경우" << std::endl;
	//std::cout << "[a]" << "," << "[b]" << std::endl;
	//for (int i = 1; i <= MAXCOUNT; i++)
	//{
	//    for (int j = 1; j <= MAXCOUNT; j++)
	//    {
	//        result = i + j;

	//        if (result == 6)
	//        {
	//            std::cout << i << " , " << j << std::endl;
	//        }
	//    }
	//}

	//// 10.정답이 6으로 정해진 Up&Down 게임을 만들어 봅시다.
	//// 입력: 4 출력: up  9며s 다운, 정답 맞추면 정답입니다 출력.
	//const int RIGHT{ 6 };
	//int inputNumber{ 0 };
	//bool isRight{ false };
	//std::cout << "Up & Down 게임! 정답을 맞춰보세요." << std::endl;
	//while (!isRight)
	//{
	//    std::cout << "숫자를 입력하세요. (입력 가능 수는 0 ~ 100 입니다.): ";
	//    std::cin >> inputNumber;

	//    if (inputNumber < 0 || inputNumber > 100)
	//    {
	//        std::cout << "입력이 잘 못되었습니다." << std::endl;
	//    }
	//    else
	//    {
	//        if (inputNumber == RIGHT)
	//        {
	//            std::cout << "6! 정답입니다." << std::endl;
	//            std::cout << "---프로그램 종료---" << std::endl;
	//            break;
	//        }
	//        else if (inputNumber > RIGHT)
	//        {
	//            std::cout << "Down!" << std::endl;
	//        }
	//        else
	//        {
	//            std::cout << "Up!" << std::endl;
	//        }
	//    }
	//}

	/// 응용문제 
	//// 1번 사용자에게 높이와 너비를 입력받아서 사각형을 그려봅시다.
	//// 너비: 3 높이: 4  *로 그림.
	//const int MIN{ 2 }, MAX{ 10 };
	//int inputWidth{ 0 }, inputHeight{ 0 };
	//bool isWidthOn{ false }, isHeightOn{ false };
	//char star{ '*' };

	//std::cout << "별로 사각형 그리기\n(범위는 각각 2 ~ 10)\n" << std::endl;

	//while (!isHeightOn || !isWidthOn)
	//{
	//    if (!isHeightOn)
	//    {
	//        std::cout << "높이: ";
	//        std::cin >> inputHeight;

	//        if (inputHeight < MIN || inputHeight > MAX)
	//        {
	//            std::cout << "높이 입력 범위를 벗어 났습니다." << std::endl;
	//            continue;
	//        }
	//        else
	//        {
	//            isHeightOn = true;
	//        }
	//    }

	//    if (!isWidthOn)
	//    {
	//        std::cout << "너비: ";
	//        std::cin >> inputWidth;

	//        if (inputWidth < MIN || inputWidth > MAX)
	//        {
	//            std::cout << "너비 입력 범위를 벗어 났습니다." << std::endl;
	//            continue;
	//        }
	//        else
	//        {
	//            isWidthOn = true;
	//        }
	//    }
	//}

	//for (int i = 0; i < inputHeight; i++)
	//{
	//    for (int j = 0; j < inputWidth; j++)
	//    {
	//        std::cout << ' ' << star;
	//    }
	//    std::cout << '\n';
	//}

	//// 2번 다음과 같은 삼각형을 그립시다.
	//// 1
	//// 12
	//// 123 ~ 5까지
	//const int MAXCOUNT{ 5 };

	//for (int i = 0; i < MAXCOUNT; i++)
	//{
	//    for (int j = 1; j < (i + 2); j++)
	//    {
	//        std::cout << j;
	//    }
	//    std::cout << '\n';
	//}

	//// 3번 사용자에게 높이를 입력받아 삼각형을 그립시다
	//// 삼각형의 높이를 입력하세요: 5 
	////   *
	////  * *
	//// * * * 이런식으로 공백까지 이용해서 예쁜 삼각형 만들기.
	//int inputHeight{ 0 }, spaceCount{ 0 };
	//char star{ '*' };

	//std::cout << "별로 이등변 삼각형 만들기\n(범위는 2 ~ 100)" << std::endl;

	//while (true)
	//{
	//    std::cout << "삼각형 높이를 입력해 주세요: ";
	//    std::cin >> inputHeight;

	//    if (inputHeight < 2 || inputHeight > 100)
	//    {
	//        std::cout << "높이 입력이 잘못 되었습니다." << std::endl;
	//        continue;
	//    }
	//    break;
	//}

	//// 첫줄 시작 공백은 (높이 - 1), 각 별 사이 마다 공백
	//spaceCount = inputHeight;
	//for (int i = 0; i < inputHeight; i++)
	//{
	//    for (int j = 0; j < (spaceCount - 1); j++)
	//    {
	//        std::cout << ' ';
	//    }

	//    for (int k = 0; k < (i + 1); k++)
	//    {
	//        std::cout << star << ' ';
	//    }

	//    std::cout << '\n';
	//    spaceCount--;
	//}

	//// 4번 숫자 1~100까지 소수를 출력 해봅시다. (1과 자기 자신으로만 나눠지는수)
	//const int MAXCOUNT{ 100 };
	//int result{ 0 }, resultCount{ 0 };
	//bool isSoSu{ true };

	//std::cout << "소수 구하기. (1 ~ 100) 까지의 숫자중 소수는: " << std::endl;
	//for (int i = 2; i <= MAXCOUNT; i++)
	//{
	//    isSoSu = true;

	//    for (int j = 2; j < i; j++)
	//    {
	//        result = i % j;
	//        if (result == 0) // 나머지가 한번이라도 0이 나오면 소수 탈락
	//        {
	//            isSoSu = false;
	//        }
	//    }

	//    if (isSoSu)
	//    {
	//        resultCount++;
	//        std::cout << i << std::endl;
	//    }
	//}
	//std::cout << "총 소수의 개수는: " << resultCount << " 개" << std::endl;

	//// 5번 최대 공약수를 구해 봅시다. (두 수를 나눌 수 있는 가장 큰 약수)
	//int inputFrist{ 0 }, inputSecound{ 0 };
	//int smallOne{ 0 }, firstResult{ 0 }, secondResult{ 0 }, result{ 0 };
	//bool isfistOn{ false };
	//std::cout << "최대 공약수 계산기\n0이 아닌 두 양수를 입력하세요" << std::endl;

	//while (true)
	//{
	//    if (!isfistOn)
	//    {
	//        std::cout << "첫 번쨰 수: ";
	//        std::cin >> inputFrist;

	//        if (inputFrist <= 0)
	//        {
	//            std::cout << "범위가 잘못되었습니다.\n";
	//            continue;
	//        }
	//        isfistOn = true;
	//    }

	//    std::cout << "두 번쨰 수: ";
	//    std::cin >> inputSecound;
	//    if (inputSecound <= 0)
	//    {
	//        std::cout << "범위가 잘못되었습니다.\n";
	//        continue;
	//    }
	//    break;
	//}

	//// 최대 공약수는 두 수중 작은 수보다 커질수 없다.
	//// 1부터 작은 수까지만 돌면서 둘다 나눠지는 수중 가장 큰것.
	//smallOne = inputFrist <= inputSecound ? inputFrist : inputSecound;
	//for (int i = 1; i <= smallOne; i++)
	//{
	//    firstResult = inputFrist % i;
	//    if (firstResult == 0)
	//    {
	//        secondResult = inputSecound % i;
	//        if (secondResult == 0)
	//        {
	//            result = i;
	//        }
	//        else
	//        {
	//            continue;
	//        }
	//    }
	//    else
	//    {
	//        continue;
	//    }
	//}
	//std::cout << "두 수를 나눌 시 있는 가장 큰 약수: " << result << std::endl;

	//// 6번 최소 공배수를 구해 봅시다. ( 공통된 배수 중에 가장 작은 수)
	//int inputFrist{ 0 }, inputSecound{ 0 }, count{ 1 };
	//int biggerOne{ 0 }, smallOne{ 0 }, remainder{ 0 }, result{ 0 };

	//std::cout << "최대 공배수 계산기.\n두 수를 입력해 주세요." << std::endl;

	//std::cout << "첫번째 수: ";
	//std::cin >> inputFrist;

	//std::cout << "두번째 수: ";
	//std::cin >> inputSecound;

	//if (inputFrist < 0)
	//{
	//    inputFrist *= -1;
	//}
	//if (inputSecound < 0)
	//{
	//    inputSecound *= -1;
	//}

	//// 최소 공배수는 둘 중 큰 수보다 작을수 없다.
	//// 큰 수를 배로 늘리면서 작은 수로 나눠 나머지가 0인 최초의 수.
	//biggerOne = inputFrist >= inputSecound ? inputFrist : inputSecound;
	//smallOne = inputFrist < inputSecound ? inputFrist : inputSecound;

	//while (true)
	//{
	//    if (biggerOne == smallOne)
	//    {
	//        result = biggerOne;
	//        break;
	//    }

	//    remainder = (biggerOne * count) % smallOne;
	//    if (remainder == 0)
	//    {
	//        result = biggerOne * count;
	//        break;
	//    }

	//    count++;
	//}
	//std::cout << "공통된 배수 중에 가장 작은 수: " << result << std::endl;
}