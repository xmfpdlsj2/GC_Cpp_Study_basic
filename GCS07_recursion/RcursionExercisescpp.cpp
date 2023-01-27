#include <iostream>
#include <vector>

std::vector<std::string> StringPermutation(std::vector<std::string> value);

void ExMain()
{
	std::vector<std::string> permut{ "a", "b", "c", "d"};
	auto fin = StringPermutation(permut);
	for (auto& e : fin)
	{
		std::cout << e << std::endl;
	}
}

std::vector<std::string> StringPermutation(std::vector<std::string> value)
{
    // basecase
	if (value.size() <= 1)
	{
		return value;
	}

    // recursivecase
	std::vector<std::string> result{};
	std::string input = value.back();
	value.pop_back();

	for (auto& e : StringPermutation(value))
	{
		for (int i = e.size(); i >= 0; i--)
		{
			std::string temp = e;
			temp.insert(i, input);
			result.push_back(temp);
		}
	}
	return result;
}