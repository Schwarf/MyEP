#ifndef PROJECTEULER_FILEREADER_H_
#define PROJECTEULER_FILEREADER_H_
#include <sstream>
#include <string>
#include "IFileReader.h"

class FileReader :public IFileReader
{
public:
	FileReader(std::string fileName);
	virtual ~FileReader();
	// Inherited via IFileReader
	virtual std::vector<std::string> getData() const override;
	std::string getFileName() const override;
	
private:
	std::string _FileName;
	void ReadData();
	std::vector<std::string> _Data;

};

#endif