#ifndef PROJECTEULER_ISTRINGCONVERTER_H_
#define PROJECTEULER_ISTRINGCONVERTER_H_

class IStringConverter
{
public:
	IStringConverter() {}
	virtual ~IStringConverter() {}
	
	virtual void convert() = 0;
};

#endif