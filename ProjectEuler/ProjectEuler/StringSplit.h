#ifndef PROJECTEULER_STRINGSPLIT_H_
#define PROJECTEULER_STRINGSPLIT_H_
#include "IStringSplit.h"
#include <string>
#include <vector>
#include <iostream>
class StringSplit : IStringSplit
{
public:
	StringSplit(std::string & originString, std::string & delimiter);
	~StringSplit() {}
	virtual void split() override;
	std::vector<std::string> getStringTokens();
	bool isInputValid() const;
private:
	std::string _OriginString;
	std::string _Delimiter;
	std::vector<std::string> _StringTokens;
};

#endif
