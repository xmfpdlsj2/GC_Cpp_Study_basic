// PDF 연습문제들 

#include <iostream>

void PracticeOnPDF_main()
{
	//// 강의자료 02_1 연습문제
	//// 1번       -----
	//char strings = 'a';
	//std::cout << "문자를 입력하세요" << std::endl;
	//std::cin >> strings;
	//std::cout << "입력하신 문자는: " << strings << std::endl;
	//std::cout << "입력하신 문자변수의 주소는: " << reinterpret_cast<void *>(&strings) << std::endl;

	//// 2번       -----
	//float numberFloat = 3.3f;
	//std::cout << "소수를 입력하세요" << std::endl;
	//std::cin >> numberFloat;
	//std::cout << "입력하신 소수는: " << numberFloat << std::endl;

	//// 3번       -----
	//bool isBool = false;
	//std::cout << "참 거짓을 입력하세요" << std::endl;
	//std::cin >> isBool;
	//std::cout << "입력하신 불 값은: " << isBool << std::endl;
	//std::cout << "입력하신 불 변수 주소는: " << isBool << std::endl;

	//// 강의자료 02_2 실습
	//// argb 에서 비트연산 및 쉬프트로 컬러 뽑아내기      -----
	//int alpha{ 255 }, red{ 255 }, green{ 0 }, blue{ 113 };
	//unsigned int color;

	//color = alpha << 24 | red << 16 | green << 8 | blue;
	//std::cout << std::hex;
	//std::cout << "Color 값은: " << color << std::endl;
	////std::cout << std::dec; // 숫자의 진수 표현을 바꿔주는듯.
	////std::cout << "Color 값은: " << color << std::endl;

	//alpha = color >> 24;
	//red = color >> 16 & 0xFF;
	//green = color >> 8 & 0xFF;;
	//blue = color & 0xFF;;

	//std::cout << "추출 색 alpha:\t" << alpha << std::endl;
	//std::cout << "추출 색 red:\t" << red << std::endl;
	//std::cout << "추출 색 green:\t" << green << std::endl;
	//std::cout << "추출 색 blue:\t" << blue << std::endl;
}
