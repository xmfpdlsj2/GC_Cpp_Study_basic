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
	
	// ���ͷ����� �ݺ������� ���������. ������ ������� �ݺ���
	for (std::vector<int>::iterator itr = intVec.begin(); itr != intVec.end(); ++itr)
	{
		sum += *itr;
	}

	average = (float)sum / intVec.size();
	std::cout << "�� �հ�: " << sum << "// ���: " << average << std::endl;
}
