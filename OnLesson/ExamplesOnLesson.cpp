// 수업시간 예제들

#include "ExamplesOnLesson.h"

void LessonExamples_main()
{
#pragma region 초반 입출력 및 변수 주소, 크기 등 예제
    //int number = 4;

    //std::cout << sizeof(int) << std::endl;
    //std::cin >> number;
    //std::cout << number + '\n';

    //int x;
    //x = 10;

    //std::cout << &x << std::endl; // 변수가 저장된 메모리의 주소(64bit 8byte)

    //x = (x >> 1);
    //std::cout << x << std::endl; 

    //int y;
    //y = 2147483647; //이게 int 가 저장할수 있는 가장 큰 값 약20억.

    //std::cout << y + 1 << std::endl; // -2147483648

    //char character = '\0';
    //std::cout << character << std::endl;


    //std::cout << "문자를 입력하세요 : ";
    //std::string stringss = "aa";
    //std::cin >> stringss;
    //std::cout << "입력하신 문자는 : ";
    //std::cout << stringss << std::endl;

    //int number03 = 1;
    //std::cout << number03++ << std::endl; // 막상하면 2가 안나옴. << 연산을 먼저해서.
    //std::cout << ++number03 << std::endl; // 이건 ++를 먼저함 논리적으로 생각해보자.
#pragma endregion

#pragma region switch, for문 예제
    /// Switch 문 연습 -----
    //std::cout << "C++의 비트 연산자를 입력하세요: ";
    //// 비트연산자는 ! & | ^ << >> 이 있겠네요.
    //char inputOperator; 
    //std::cin >> inputOperator;

    //switch (inputOperator)
    //{
    //    case '!':
    //        std::cout << "단항" << std::endl;
    //        break;

    //    case '&':
    //    case '|':
    //    case '^':
    //        std::cout << "이항" << std::endl;
    //        break;

    //    default:
    //        std::cout << "비트 연산자가 아닙니다." << std::endl;
    //        // 쉬프트 연산자는 귀찮으니 패스
    //        break;
    //}

    ///// for문 예제
    //// 1~10까지 중 홀수만 출력
    //for (int i = 0; i < 10; i++)
    //{
    //    if ((i % 2) == 0)
    //    {
    //        continue;
    //    }
    //    std::cout << i << std::endl;
    //}
    //// 그런데 홀수는 +2씩 증가한다는 것도 같은 의미 해서 이런 증감식도 가능
    //for (int i = 0; i < 10; i = i + 2)
    //{
    //    std::cout << i << std::endl;
    //}
#pragma endregion

#pragma region 배열 예제
    ///// 배열 예제
    //// Top 10 score
    //const int MAX_COUNT{ 10 };
    //int scorse[MAX_COUNT]{}, total{}; // 연기선 배열의 선언
    // 
    //for (int i = 0; i < MAX_COUNT; i++)
    //{
    //    std::cout << "Input Score[" << i << "]: "; // 여기선 배열의 순서
    //    std::cin >> scorse[i];
    //}
    //for (int i = 0; i < MAX_COUNT; i++)
    //{
    //    total += scorse[i];
    //}
    //std::cout << total << std::endl; // 여기선 배열의 순서
#pragma endregion

#pragma region 함수 예제들
    //// 함수예제 호출스택  (22강)
    //char input[]{ "Dog1!" };

    //for (int i = 0; i < 6; ++i)
    //{
    //    std::cout << ConvertToUpper(input[i]);
    //}

    //std::cout << std::endl;

    //// 재귀 함수 연습 (24강)
    //int array[5]{ 1,2,3,4,5 };
    //PrintSum(array, 5, 0);
#pragma endregion

#pragma region 포인터 예제
    //// 포인터 참조 예제 (26강)
    //int x{ 10 }, y{ 20 };
    //SwapRef(&x, &y);
    //std::cout << x <<std::endl;
    //std::cout << y <<std::endl;

    //// 함수 포인터 (29강)
    //const int NUM_ARRAY = 5;
    //int scores[NUM_ARRAY]{ 20,10,40,15,30 };
    //Sort(scores, NUM_ARRAY);

    //for (int i = 0; i < NUM_ARRAY; i++)
    //{
    //	std::cout << scores[i] << std::endl;
    //}
#pragma endregion

}

// 함수예제 호출스택 (22강) 
char ConvertToUpper(char input)
{
    if (input >= 'a' && input <= 'z')
    {
        return input - 'a' + 'A';
    }
    else
    {
        return input;
    }
}

// 재귀 함수 연습 (24강)
void PrintSum(int array[5], int count, int sum)
{
    // base case
    if (count < 1)
    {
        std::cout << sum << std::endl;
        return;
    }

    sum += array[count - 1];

    // recursive case
    PrintSum(array, (count - 1), sum);
}

// 포인터 참조 예제 (26강)
void Swap(int frist, int second)
{
    int temp{};
    temp = frist;
    frist = second;
    second = temp;
}
void SwapRef(int* frist, int* second)
{
    int temp{};
    temp = *frist;
    *frist = *second;
    *second = temp;
}

// 함수 포인터(29강)
void Sort(int numbers[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        for (int j = 0; j < count; ++j)
        {
            if (numbers[i] < numbers[j])
            {
                int temp{ numbers[i] };
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}