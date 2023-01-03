#include <iostream>
#include <vector>

#include <algorithm>
#include <numeric>

#include <forward_list>
#include<map>

void VectorMain()
{
	std::vector<int> intVec{};
	int input{}, sum{};
	float average{};

	while (std::cin >> input)
	{
		intVec.push_back(input);
		
		std::cout << "----" << std::endl;
		for (auto e : intVec)
		{
			std::cout << e << std::endl;
		}
		std::cout << "----" << std::endl;
	}
	//for (auto e : intVec)
	//{
	//	sum += e;
	//}
	
	// 이터레이터 반복문으로 사용했을때. 위에는 범위기반 반복문
	for (std::vector<int>::iterator itr = intVec.begin(); itr != intVec.end(); ++itr)
	{
		sum += *itr;
	}

	average = (float)sum / intVec.size();
	std::cout << "총 합계: " << sum << "// 평균: " << average << std::endl;
}
