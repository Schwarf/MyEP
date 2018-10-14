#include "pch.h"
#include "Solution67.h"




int Solution67::result()
{

	auto data = ForProblem67::Data();

	for (size_t i = data.size() - 1; i > 0; --i)
	{
		std::vector<int> sum(data.at(i - 1));
		auto currentLine = data.at(i);

		for (size_t numberCount = 0; numberCount < currentLine.size() - 1; ++numberCount)
		{
			sum.at(numberCount) += currentLine.at(numberCount) >= currentLine.at(numberCount + 1) ? currentLine.at(numberCount) : currentLine.at(numberCount + 1);
//			std::cout << sum.at(numberCount) << "  ";
		}
		data.at(i - 1) = sum;
//		std::cout << std::endl;


	}
	return data.at(0).at(0);
}


