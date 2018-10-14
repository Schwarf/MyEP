#ifndef PROJECTEULER_STRINGTOINTCONVERTER_H_
#define PROJECTEULER_STRINGTOINTCONVERTER_H_

#include<string>
#include<sstream>
#include<algorithm>
#include<cctype>
#include "IStringConverter.h"


class StringToIntConverter : public IStringConverter
{
public:
	StringToIntConverter() {}
	StringToIntConverter(std::string & string);
	virtual ~StringToIntConverter() {};
	void convert() override;
	bool isInputValid();
	int getValue() const;
	int getValue(std::string & string);
private:
	std::string _Data;
	char _Delimiter;
	int _Value;
};

#endif