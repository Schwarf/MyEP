#include "pch.h"
#include "Solution11.h"






int Solution11::findMax(const std::vector<std::vector<int>>& data, int & maximum)
{
	
	for (auto & elem : data)
	{
		for (size_t i = 0; i < elem.size() - 3; ++i)
		{
			
			auto product = elem.at(i) * elem.at(i + 1)* elem.at(i + 2)* elem.at(i + 3);
			if (product > maximum)
			{
				maximum = product;
			}
		}
	}
	
	return maximum;
}

int Solution11::findMainDiagonalMax(const std::vector<std::vector<int>>& data, int & maximum)
{
	for (size_t i = 0; i < data.size() - 3; ++i)
	{
		for (size_t j = 0; j < data.at(i).size() - 3; ++j)
		{
			auto product = data.at(i).at(j) * data.at(i + 1).at(j + 1) * data.at(i + 2).at(j + 2)* data.at(i + 3).at(j + 3);
			if (product > maximum)
			{
				maximum = product;
			}
		}
	}
	return maximum;
}

int Solution11::find2ndDiagonalMax(const std::vector<std::vector<int>>& data, int & maximum)
{
	for (size_t i = data.size() - 1; i > 3; --i)
	{
		for (size_t j = data.at(i).size() - 1; j > 3; --j)
		{
	//		std::cout << i << ", " << j << std::endl;
			auto product = data.at(i).at(j) * data.at(i - 1).at(j - 1) * data.at(i - 2).at(j - 2)* data.at(i - 3).at(j - 3);
			if (product > maximum)
			{
				maximum = product;
			}
		}
	}
	return maximum;
}


int Solution11::result()
{

	auto data = ForProblem11::Data();
	int max = 1;
	Solution11::findMax(data, max);
	auto dataTranspose = data;
	for (size_t i = 0; i < data.size(); ++i)
	{
		for (size_t j = 0; j < data.at(i).size(); ++j)
		{
			dataTranspose[j][i] = data[i][j];
		}
	}
	Solution11::findMax(dataTranspose, max);
	Solution11::findMainDiagonalMax(data, max);
	Solution11::find2ndDiagonalMax(data, max);
	return max;
}


