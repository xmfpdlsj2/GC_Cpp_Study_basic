// 구글 클래스 제출. 함수와 pointer 관련 연습문제들

#include <iostream>

void Print2Array(int*, int, int);

int main()
{
	//// 2차 배열과 포인터 실습(28강)
	//// 1번 전체 배열을 화면에 출력합시다
	//// int array[2][3]{{1,2,3},{4,5,6}}
	//// 오직 p와 포인터 연산만 사용해서 전체 배열을 출력해 보세요.
	//// p[0] X p[0][0] X
	//
	//int array[2][3]{ {1,2,3},{4,5,6} };
	//int(*p)[3] = { array };
	//
	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		std::cout << *(*(p + i) + j) << std::endl;
	//	}
	//}
	// 
	//Print2Array(p[0], 2, 3);

	//// 동적 메모리 할당(31강)
	//// 1번. 다음과 같은 동적 배열을 만들어 보세요.
	//// pNumbers -> {4, 8, 5, 3, 1};
	//// 그리고 위 배열의 크기를 다음과 같이 3개로 줄여봅시다.
	//// pNumbers -> {4, 8, 5};
	//// 주의) 배열의 크기를 조절하는 기능은 안배움.(오직 new delete)
	//// 주의) pNumbers = new{4,8,5}; 문제의 의도는 이게 아닙니다.
	//const int COUNT = 3;
	//int* pNumbers{ new int[5] {4, 8, 5, 3, 1} };

	//if (pNumbers)
	//{
	//	int* pNumbersSec{ new int[COUNT] {} };
	//
	//	for (int i = 0; i < COUNT; i++)
	//	{
	//		pNumbersSec[i] = pNumbers[i];
	//	}
	//
	//	delete[] pNumbers;
	//	pNumbers = pNumbersSec;

	//	for (int i = 0; i < COUNT; i++) // 잘 들어갔나 확인
	//	{
	//		std::cout << pNumbers[i] << std::endl;
	//	}

	//	delete[] pNumbersSec;
	//	pNumbersSec = nullptr;
	//	pNumbers = nullptr;
	//}
	//else
	//{
	//	std::cout << "동메할 실패!" << std::endl;
	//}

	//// 2번. 다음과 같이 최대값을 구하는 프로그램을 작성해봅시다.
	//// 몇 명의  학생이 있습니까? 3
	//// 학생 #1의 점수 10;
	//// 학생 #1의 점수 30;
	//// 학생 #1의 점수 20;
	//// 학생 #2가 최고점 30입니다
	//// 주의) 동적으로 학생들의 배열을 만들고 점수를 입력합니다.
	//int totalStudents{};
	//std::cout << "몇 명의 학생이 있습니까?: ";
	//std::cin >> totalStudents;

	//int* pStudents{ new int[totalStudents] };

	//if (pStudents)
	//{
	//	for (int i = 0; i < totalStudents; i++)
	//	{
	//		std::cout << "학생 # " << i + 1 <<"의 점수: "; // 1번부터 표기하려고
	//		std::cin >> pStudents[i];
	//	}

	//	int maxNum{};
	//	int temp{ pStudents[0] };
	//	for (int i = 0; i < totalStudents; i++)
	//	{ 
	//		if (temp < pStudents[i]) 
	//		{
	//			temp = pStudents[i];
	//			maxNum = i;
	//		}
	//	}

	//	std::cout << "학생 # " << maxNum + 1  << "번이 최고점 "<< 
	//		pStudents[maxNum] << "입니다." << std::endl;

	//	delete[] pStudents;
	//	pStudents = nullptr;
	//}
	//else
	//{
	//	std::cout << "동메할 실패!" << std::endl;
	//}
}

// 2차 배열과 포인터 실습(28강)
// 함수에 배열을 넘길때 응용
//void Print2Array(int array[][3], int row, int col)
//void Print2Array(int (*array)[3], int row, int col)
void Print2Array(int* array, int row, int col)
{
	for (int i = 0; i < (row * col); i++)
	{
		std::cout << *array++ << std::endl;
	}
}