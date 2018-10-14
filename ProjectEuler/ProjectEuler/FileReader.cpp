#include "pch.h"
#include "FileReader.h"


FileReader::FileReader(std::string fileName):
	_FileName(fileName)
{
	ReadData();
}

FileReader::~FileReader()
{
}

std::vector<std::string> FileReader::getData() const
{
	return _Data;
}

std::string FileReader::getFileName() const
{
	return _FileName;
}


void FileReader::ReadData() 
{
	std::ifstream input(_FileName);
	std::string line;
	while (std::getline(input, line))
	{
		_Data.push_back(line);
	}

}
