// 구글 클래스 제출. array 관련 연습문제들

#include <iostream>

int main()
{
    // 배열 연습문제 -------------
    //// 1번. 10명의 학생들의 점수를 입력받아 평균을 구해보세요.
    //const int MAXCOUNT{ 10 };
    //int scorse[MAXCOUNT]{}, total{};
    //float average{};
    // 
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << "Input" << i << ": "; 
    //    std::cin >> scorse[i];
    //}
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    total += scorse[i];
    //}
    //average = (float)total / (float)MAXCOUNT;
    //std::cout <<"Average: " << average << std::endl;

    //// 2번. 10명의 학생들ㄹ의 점수를 입력 받아 최고점과 최저점을 구하세요.
    //const int MAXCOUNT{ 10 };
    //int scorse[MAXCOUNT]{}, min{}, max{};
    //
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << "Input" << i << ": "; 
    //    std::cin >> scorse[i];
    //}
    //
    //min = scorse[0];
    //max = scorse[0];
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    min = min < scorse[i] ? min : scorse[i];
    //    max = max < scorse[i] ? scorse[i] : max;
    //}

    //std::cout <<"MIN: " << min << std::endl;
    //std::cout <<"MAX: " << max << std::endl;

    //// 3번. 10명의 학색들의 점수를 입력받아 각각의 등수를 출력해보세요.
    //const int MAXCOUNT{ 10 };
    //int scorse[MAXCOUNT]{}, scorseTemp[MAXCOUNT]{}, grades[MAXCOUNT];
    //int max{}, index{};
    //
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << "Input" << i << ": "; 
    //    std::cin >> scorse[i];
    //    scorseTemp[i] = scorse[i];
    //}

    //for (int  i = 0; i < MAXCOUNT; i++)
    //{
    //    max = scorseTemp[0];
    //    index = 0;
    //    for (int j = 0; j < MAXCOUNT; j++)
    //    {
    //        if (max < scorseTemp[j])
    //        {
    //            max = scorseTemp[j];
    //            index = j;
    //        }
    //    }
    //    grades[index] = i + 1;
    //    scorseTemp[index] = -1;
    //}

    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << scorse[i] << ": " << grades[i] << std::endl;
    //}

    //// 4번. 10명의 학생들의 점수를 높은 순서대로 출력해 보세요. (내림차순 정렬)
    //const int MAXCOUNT{ 10 };
    //int scorse[MAXCOUNT]{}, scorseTemp[MAXCOUNT]{}, descending[MAXCOUNT];
    //int max{}, index{};
    //
    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << "Input" << i << ": "; 
    //    std::cin >> scorse[i];
    //    scorseTemp[i] = scorse[i];
    //}

    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    max = scorseTemp[0];
    //    index = 0;
    //    for (int j = 0; j < MAXCOUNT; j++)
    //    {
    //        if (max < scorseTemp[j])
    //        {
    //            max = scorseTemp[j];
    //            index = j;
    //        }
    //    }
    //    scorseTemp[index] = -1;
    //    descending[i] = scorse[index];
    //}

    //for (int i = 0; i < MAXCOUNT; i++)
    //{
    //    std::cout << descending[i] << " ";
    //}
    // 
    //  보규님 문제풀이를 보고 버블 정렬식으로 하는게 깔끔하고 좋다는 것 확인.
}