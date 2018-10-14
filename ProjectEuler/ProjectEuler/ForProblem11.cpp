#include "pch.h"
#include "ForProblem11.h"


std::vector<std::vector<int>> ForProblem11::Data()
{

	auto fileName = "..\\..\\EulerProjectData\\LargestProductInGrid_Problem11\\grid.txt";
	FileReader FileReader(fileName);
	std::vector<std::string> linesInFile = FileReader.getData();
	std::string delim = " ";
	StringToIntConverter Converter;

	std::vector<std::vector <int>> result;


	for (auto & elem : linesInFile)
	{
		std::vector<int> lineAsInteger;
		StringSplit splitter(elem, delim);
		auto tokens = splitter.getStringTokens();

		for (auto & token : tokens)
		{
			lineAsInteger.push_back(Converter.getValue(token));
		}
		result.push_back(lineAsInteger);
	}
	return result;
}