// GCS05_functions.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 구글 클래스 제출. function 관련 연습문제들

#include <iostream>

double Max(double, double);

int ReadValue();
void WriteValue(int);
int CalculateShare(int, int);
int CalculateRemain(int, int);
void GuguDan(int);

int main()
{
    //// 1번. 두개의 double 값을 받아서 더 큰 값을 반환하는 Max라는 함수를 만들어보세요.
    //double first{ 200 }, second{ 100 };
    //std::cout << Max(first, second) << std::endl;

    //// 2번. 사용자에게서 정수를 입력받아 반환하는 ReadValue라는 함수와 정수 하나를
    //// 출력하는 WriteValue라는 함수를 만들어보세요.
    //WriteValue(ReadValue());


    //// 3번. 정수 a를 정수 b로 나눈 몫을 구하는 함수와 나머지를 반환하는 함수 2개를 만들어보세요.
    //std::cout << "몫: "<< CalculateShare(105, 17) << std::endl;
    //std::cout << "나머지: "<< CalculateRemain(105, 17) << std::endl;

    //// 4번 이전에 작성한 구구단 문제를 함수로 응용해 보세요. 
    //// 힌트: 매개변수는 단, 반환은 x.
    //int inputDan{ 0 };
    //std::cout << "몇 단을 출력할까요: ";
    //std::cin >> inputDan;
    //std::cout << inputDan << " 단" << std::endl;
    //GuguDan(inputDan);
}

// 1번.
double Max(double first, double second)
{
    double result{};
    result = first < second ? second : first;
    return result;
}

// 2번 
int ReadValue()
{
    int inputNum{ 0 };
    std::cout << "정수를 입력해주세요: ";
    std::cin >> inputNum;
    return inputNum;
}

void WriteValue(int inputNum)
{
    std::cout << "출력: " << inputNum << std::endl;
}

// 3번
int CalculateShare(int a, int b)
{
    return a / b;
}

int CalculateRemain(int a, int b)
{
    return a % b;
}

// 4번
void GuguDan(int inputDan)
{
    int maxCount{ 9 }, result{};

    for (int i = 1; i <= maxCount; i++)
    {
        result = inputDan * i;
        std::cout << inputDan << " x " << i << " = " << result << std::endl;
    }
}