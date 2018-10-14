#include "pch.h"
#include "ForProblem67.h"


std::vector<std::vector<int>> ForProblem67::Data()
{

	auto fileName = "..\\..\\EulerProjectData\\MaximumPathSum_Problem67\\triangle.txt";
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