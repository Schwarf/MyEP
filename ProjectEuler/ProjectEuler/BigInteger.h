#ifndef PROJECTEULER_BIGINTEGER_H_
#define PROJECTEULER_BIGINTEGER_H_
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include<cctype>
class BigInteger
{
public:
	BigInteger(const int & initialValue);
	BigInteger(const std::string & initialValue);
	BigInteger(const BigInteger & source);
	virtual ~BigInteger() {};
	void initialize();
	BigInteger & operator =(const BigInteger & rhs);
	BigInteger & operator +=(const BigInteger & rhs);
	friend BigInteger operator +(BigInteger lhs, const BigInteger & rhs);
	BigInteger & operator *=(const BigInteger & rhs);
	friend BigInteger operator *(BigInteger lhs, const BigInteger & rhs);
	
	//BigInteger operator *=(const T & factor);
	std::vector<int> VectorRepresentation() const;
	std::string ToString() const;
	size_t getDigitsCount() const;
private:
	std::vector<int> _VectorRepresentation;
	void ConvertStringToVector(const std::string & stringRepresentation);
};
#endif

