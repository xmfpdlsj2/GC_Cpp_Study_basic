// 구글 클래스 제출. 함수와 pointer 관련 기초 연습문제들

#include <iostream>

void PrintHelloWorld();
int GetRemainder(int, int);

int main()
{
	//// 함수
	//// 1번 Hello Word 를 출력하는 함수를 만들어보세요.
	//PrintHelloWorld();
	//std::cout << GetRemainder(3, 2) << std::endl;
	
	//// 포인터
	//int myNumber{ 10 };
	//char myCharacter{ 'a' };
	//// 1번. myNumber와 myCharacter의 주소를 출력해보세요.
	//std::cout << &myNumber << " : " << (void*)&myCharacter << std::endl;
	//// 2번. 정수형 변수 및 문자형 변수를 가리키는 포인터 타입 변수를 선언하세요.
	//// 3번. 2에서 선언한 포인터 변수를 각각 myNumber, myCharacter를 참조하도록 지정하세요.
	//int* pInt{ &myNumber };
	//char* pChar{ &myCharacter };
	//// 4번. 3에서 지정한 포인터 변수의 내용을 역참조해서 값으로 출력해 보세요.
	//std::cout << *pInt << " : " << pChar[0] << std::endl;
	
	////구조체
	//// 1번. 다음 캐릭터 데이터를 구조체로 선언해 보세요.
	//struct MyCharcter
	//{
	//	int hp{};
	//	int attackDamage{};
	//	float moveSpeed{};
	//};
	//// 2번. 다음과 같은 변수를 선언 및 정의하세요.
	//MyCharcter mainCharacter{ 100,10,10.0f };
	//// 3번. 위변수의 멤버를 모두 화면에 출력해 보세요.
	//std::cout << "체력: " << mainCharacter.hp << " 공격력: " << mainCharacter.attackDamage <<
	//	" 이동속도: " << mainCharacter.moveSpeed << std::endl;
	//// 4번. 1에서 선언한 구조체를 참조하는 포인터 변수를 선언해 보세요.
	//MyCharcter* pStructMyCharacter{ &mainCharacter };
	//// 5번. 4에서 선언한 변수를 사용하여 모든 멤버를 화면에 출력해 보세요.
	//std::cout << "체력: " << (*pStructMyCharacter).hp << " 공격력: " << (*pStructMyCharacter).attackDamage <<
	//	" 이동속도: " << (*pStructMyCharacter).moveSpeed << std::endl;

	//// 동적 메모리 생성
	//// 1번. 정수 하나를 동적으로 생성하고, 해제해 보세요.
	//// 2번. 1에서 생성한 정수에 10이라는 값을 배정하고 출력해보세요.
	//int* pDynamicInt{ new int };
	//if (pDynamicInt)
	//{
	//	*pDynamicInt = 10;

	//	std::cout << *pDynamicInt << std::endl;

	//	delete pDynamicInt;
	//	pDynamicInt = nullptr;
	//}
	//else
	//{
	//	std::cout << "동메할 실패!" << std::endl;
	//}
	//// 3번. 구조체 1에서 선언한 구조체를 동적으로 생성하고, 해제해보세요.
	//// 4번. 3에서 할당한 변수에 다음 내용을 배정해 보세요.
	//// 5번. 4의 멤버 내용을 화면에 출력해 보세요.
	//MyCharcter* pStructMyCharacter{ new MyCharcter };
	//if (pStructMyCharacter)
	//{
	//	pStructMyCharacter->hp = 100;
	//	pStructMyCharacter->attackDamage = 10;
	//	pStructMyCharacter->moveSpeed = 10.0f;
	//	std::cout << "체력: " << pStructMyCharacter->hp << " 공격력: " << pStructMyCharacter->attackDamage <<
	//		" 이동속도: " << pStructMyCharacter->moveSpeed << std::endl;

	//	delete pStructMyCharacter;
	//	pStructMyCharacter = nullptr;
	//}
	//else
	//{
	//	std::cout << "동메할 실패!" << std::endl;
	//}
}


void PrintHelloWorld()
{
	std::cout << "Hello World!" << std::endl;
}

int GetRemainder(int a, int b)
{
	return a % b;
}
