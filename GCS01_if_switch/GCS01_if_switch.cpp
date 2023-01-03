// 구글 클래스 제출. if, switch문 관련 연습문제들

#include <iostream>

int main()
{
	//// (1번)문제 입력받은 USD($) 를 KRW(원)으로 변환하는 프로그램을 작성해봅시다. ----
	//float inputMoney{ 0.0f }, todayDollarExchangeRate{ 1380.80f };
	//float won{ 0.0f }, todayYenExchangeRate{ 9.62f };
	//
	//std::cout << "원화로 변환할 달러를 입력해주세요: " ;
	//std::cin >> inputMoney;
	//
	//won = inputMoney * todayDollarExchangeRate;
	//
	//std::cout << "원화 가격은: " << won << "원 입니다." << std::endl;

	//// (2번)문제 달러는 접미로 s , 엔화는y 로 변환해봅시다.
	//
	//char kindOfMoney{ 's' };
	//
	//std::cout << "원화로 변환할 달러(s) 또는 엔화(y)를 입력해주세요: ";
	//std::cin >> inputMoney >> kindOfMoney;
	//
	//if (kindOfMoney == 's' || kindOfMoney == 'S')
	//{
	//    won = inputMoney * todayDollarExchangeRate;
	//    std::cout << "입력하신 "<< inputMoney<<" USD는 오늘 환율 기준으로 " << won << "원 입니다." << std::endl;
	//}
	//else if (kindOfMoney == 'y' || kindOfMoney == 'Y')
	//{
	//    won = inputMoney * todayYenExchangeRate;
	//    std::cout << "입력하신 "<< inputMoney<<" JPY는 오늘 환율 기준으로 " << won << "원 입니다." << std::endl;
	//}
	//else
	//{
	//    std::cout << "입력 방식이 잘못되었습니다." << std::endl;
	//}
	//// 강사님팁: 환율은 상수로 선언해서 사용하자.


	//// (3번)문제 지하철 요급을 계산해 봅시다. ---- 
	//// 표는 캡쳐로 제공, 어린이 6이상 13미만 / 청소년 13이상 18이하/ 어른 19이상
	//// 나이를 입력하세요: 10
	//// 결제수단을 선택하세요 (1:교통카드, 2:일반): 1
	//// 거리(Km)를 입력하세요: 14
	//// 결제하실 금약은 ???원 입니다.

	//const int nAdult10{ 1350 }, nAdult15{ 1450 }, nAdult20{ 1550 };
	//const int nKid10{ 450 }, nKid15{ 500 }, nKid20{ 550 };
	//const int cAdult10{ 1250 }, cAdult15{ 1350 }, cAdult20{ 1450 };
	//const int cTeen10{ 720 }, cTeen15{ 800 }, cTeen20{ 880 };
	//const int cKid10{ 450 }, cKid15{ 500 }, cKid20{ 550 };

	//int inputAge{ 0 }, isCard{ 0 }, charge{0};
	//float distance{ 0.0f };


	//std::cout << "나이를 입력하세요: ";
	//std::cin >> inputAge;

	//std::cout << "결제 수단을 선택하세요 ( 1 : 교통카드, 2 : 일반 ): ";
	//std::cin >> isCard;

	//std::cout << "거리(Km)를 입력하세요: ";
	//std::cin >> distance;

	//if (isCard == 1)
	//{
	//    if (inputAge < 6)
	//    {
	//        charge = 0;
	//    }
	//    else if (inputAge < 13)
	//    {
	//        if (distance <= 10)
	//        {
	//            charge = cKid10;
	//        }
	//        else if (distance <= 15)
	//        {
	//            charge = cKid15;
	//        }
	//        else
	//        {
	//            charge = cKid20;
	//        }
	//    }
	//    else if (inputAge < 19)
	//    {
	//        if (distance <= 10)
	//        {
	//            charge = cTeen10;
	//        }
	//        else if (distance <= 15)
	//        {
	//            charge = cTeen15;
	//        }
	//        else
	//        {
	//            charge = cTeen20;
	//        }
	//    }
	//    else
	//    {
	//        if (distance <= 10)
	//        {
	//            charge = cAdult10;
	//        }
	//        else if (distance <= 15)
	//        {
	//            charge = cAdult15;
	//        }
	//        else
	//        {
	//            charge = cAdult20;
	//        }
	//    }
	//}
	//else
	//{
	//    if (inputAge < 6)
	//    {
	//        charge = 0;
	//    }
	//    else if (inputAge < 13)
	//    {
	//        if (distance <= 10)
	//        {
	//            charge = nKid10;
	//        }
	//        else if (distance <= 15)
	//        {
	//            charge = nKid15;
	//        }
	//        else
	//        {
	//            charge = nKid20;
	//        }
	//    }
	//    else
	//    {
	//        if (distance <= 10)
	//        {
	//            charge = nAdult10;
	//        }
	//        else if (distance <= 15)
	//        {
	//            charge = nAdult15;
	//        }
	//        else
	//        {
	//            charge = nAdult20;
	//        }
	//    }
	//}

	//std::cout << "결제하실 금액은: " << charge << " 원 입니다." << std::endl;

	// (4번)문제 BMI를 구하는 프로그램을 작성해 봅시다. ---
	// 키(cm)를 입력하세요: 170
	// 체중(Kg)을 입력하세요: 88
	// 당신의 BMI는 ??? 이며 정상입니다.

	//const float maxLow{ 18.4f }, minNormal{ 18.5f }, maxNormal{ 22.9f };
	//const float minOver{ 23.0f }, maxOver{ 24.9f }, minFat{ 25.0f };

	//float inputTall{ 0.0f }, inputWeight{ 0.0f }, myBMI{ 0.0f };

	//std::string myState{ "정상" };

	//std::cout << "키(cm)를 입력하세요: ";
	//std::cin >> inputTall;

	//std::cout << "체중(Kg)을 입력하세요: ";
	//std::cin >> inputWeight;


	//inputTall *= 0.01f; // 보정식
	//myBMI = inputWeight / (inputTall * inputTall);


	//if (myBMI <= maxLow)
	//{
	//    myState = "저체중";
	//}
	//else if (myBMI >= minNormal && myBMI <= maxNormal)
	//{
	//    myState = "정상";
	//}
	//else if (myBMI >= minOver && myBMI <= maxOver)
	//{
	//    myState = "과체중";
	//}
	//else if (myBMI >= minFat)
	//{
	//    myState = "비만 주의!";
	//}
	//else
	//{
	//    myState = "입력 오류";
	//}

	//std::cout << "당신의 BMI는 " << myBMI << " 이며 " << myState << " 입니다." << std::endl;


	///// 환율 계산 스위치문 ----
	//float inputMoney{ 0.0f }, won{ 0.0f };
	//const float usdRate{ 1387.80f }, jpyRate{ 9.63f }, eurRate{ 1388.53f }, gbpRate{ 1598.57f };

	//char inputKind{ 'a' };
	//std::string resultKind{"won"};

	//std::cout << "달러(S), 엔(Y), 유로(R), 파운드(P)화를 입력하세요: ex) 30R" << std::endl;

	//std::cin >> inputMoney >> inputKind;

	//switch (inputKind)
	//{
	//    case 's':
	//    case 'S':
	//        won = inputMoney * usdRate;
	//        resultKind = " USD(달러)";
	//        break;

	//    case 'y':
	//    case 'Y':
	//        won = inputMoney * jpyRate;
	//        resultKind = " JPY(엔)";
	//        break;

	//    case 'r':
	//    case 'R':
	//        won = inputMoney * eurRate;
	//        resultKind = " EUR(유로)";
	//        break;

	//    case 'p':
	//    case 'P':
	//        won = inputMoney * gbpRate;
	//        resultKind = " GBP(파운드)";
	//        break;

	//    default:
	//        won = 0;
	//        resultKind = " ?";
	//        std::cout << "잘못된 입력입니다." << std::endl;
	//        break;
	//}

	//std::cout << inputMoney << resultKind << " (은)는 " << won << "원 입니다." << std::endl;
}