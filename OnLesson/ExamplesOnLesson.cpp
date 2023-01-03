// �����ð� ������

#include "ExamplesOnLesson.h"

void LessonExamples_main()
{
#pragma region �ʹ� ����� �� ���� �ּ�, ũ�� �� ����
    //int number = 4;

    //std::cout << sizeof(int) << std::endl;
    //std::cin >> number;
    //std::cout << number + '\n';

    //int x;
    //x = 10;

    //std::cout << &x << std::endl; // ������ ����� �޸��� �ּ�(64bit 8byte)

    //x = (x >> 1);
    //std::cout << x << std::endl; 

    //int y;
    //y = 2147483647; //�̰� int �� �����Ҽ� �ִ� ���� ū �� ��20��.

    //std::cout << y + 1 << std::endl; // -2147483648

    //char character = '\0';
    //std::cout << character << std::endl;


    //std::cout << "���ڸ� �Է��ϼ��� : ";
    //std::string stringss = "aa";
    //std::cin >> stringss;
    //std::cout << "�Է��Ͻ� ���ڴ� : ";
    //std::cout << stringss << std::endl;

    //int number03 = 1;
    //std::cout << number03++ << std::endl; // �����ϸ� 2�� �ȳ���. << ������ �����ؼ�.
    //std::cout << ++number03 << std::endl; // �̰� ++�� ������ �������� �����غ���.
#pragma endregion

#pragma region switch, for�� ����
    /// Switch �� ���� -----
    //std::cout << "C++�� ��Ʈ �����ڸ� �Է��ϼ���: ";
    //// ��Ʈ�����ڴ� ! & | ^ << >> �� �ְڳ׿�.
    //char inputOperator; 
    //std::cin >> inputOperator;

    //switch (inputOperator)
    //{
    //    case '!':
    //        std::cout << "����" << std::endl;
    //        break;

    //    case '&':
    //    case '|':
    //    case '^':
    //        std::cout << "����" << std::endl;
    //        break;

    //    default:
    //        std::cout << "��Ʈ �����ڰ� �ƴմϴ�." << std::endl;
    //        // ����Ʈ �����ڴ� �������� �н�
    //        break;
    //}

    ///// for�� ����
    //// 1~10���� �� Ȧ���� ���
    //for (int i = 0; i < 10; i++)
    //{
    //    if ((i % 2) == 0)
    //    {
    //        continue;
    //    }
    //    std::cout << i << std::endl;
    //}
    //// �׷��� Ȧ���� +2�� �����Ѵٴ� �͵� ���� �ǹ� �ؼ� �̷� �����ĵ� ����
    //for (int i = 0; i < 10; i = i + 2)
    //{
    //    std::cout << i << std::endl;
    //}
#pragma endregion

#pragma region �迭 ����
    ///// �迭 ����
    //// Top 10 score
    //const int MAX_COUNT{ 10 };
    //int scorse[MAX_COUNT]{}, total{}; // ���⼱ �迭�� ����
    // 
    //for (int i = 0; i < MAX_COUNT; i++)
    //{
    //    std::cout << "Input Score[" << i << "]: "; // ���⼱ �迭�� ����
    //    std::cin >> scorse[i];
    //}
    //for (int i = 0; i < MAX_COUNT; i++)
    //{
    //    total += scorse[i];
    //}
    //std::cout << total << std::endl; // ���⼱ �迭�� ����
#pragma endregion

#pragma region �Լ� ������
    //// �Լ����� ȣ�⽺��  (22��)
    //char input[]{ "Dog1!" };

    //for (int i = 0; i < 6; ++i)
    //{
    //    std::cout << ConvertToUpper(input[i]);
    //}

    //std::cout << std::endl;

    //// ��� �Լ� ���� (24��)
    //int array[5]{ 1,2,3,4,5 };
    //PrintSum(array, 5, 0);
#pragma endregion

#pragma region ������ ����
    //// ������ ���� ���� (26��)
    //int x{ 10 }, y{ 20 };
    //SwapRef(&x, &y);
    //std::cout << x <<std::endl;
    //std::cout << y <<std::endl;

    //// �Լ� ������ (29��)
    //const int NUM_ARRAY = 5;
    //int scores[NUM_ARRAY]{ 20,10,40,15,30 };
    //Sort(scores, NUM_ARRAY);

    //for (int i = 0; i < NUM_ARRAY; i++)
    //{
    //	std::cout << scores[i] << std::endl;
    //}
#pragma endregion

}

// �Լ����� ȣ�⽺�� (22��) 
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

// ��� �Լ� ���� (24��)
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

// ������ ���� ���� (26��)
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

// �Լ� ������(29��)
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