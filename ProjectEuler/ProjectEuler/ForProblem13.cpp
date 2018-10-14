#include "pch.h"
#include "ForProblem13.h"

std::vector<std::string> ForProblem13::Data()
{

	auto fileName = "..\\..\\EulerProjectData\\LargeSum_Problem13\\Numbers.txt";
	FileReader FileReader(fileName);
	std::vector<std::string> linesInFile = FileReader.getData();

	return linesInFile;
}
