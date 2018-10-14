#ifndef PROJECTEULER_IFILEREADER_H_
#define PROJECTEULER_IFILEREADER_H_
#include <vector>
#include <string>
#include <fstream>

class IFileReader
{
public:
	IFileReader() {};
	virtual ~IFileReader() {};
	virtual std::vector<std::string> getData() const = 0;
	virtual std::string getFileName() const = 0;
};

#endif