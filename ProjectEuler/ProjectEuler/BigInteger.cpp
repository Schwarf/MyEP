#include "pch.h"
#include "BigInteger.h"

//********************************************************************************************
// Contructors
//********************************************************************************************

BigInteger::BigInteger(const int & initialValue) :
	BigInteger(std::to_string(initialValue))
{
}


BigInteger::BigInteger(const std::string & initialValue)
{
	initialize();
	ConvertStringToVector(initialValue);
}


BigInteger::BigInteger(const BigInteger & source)
{
	_VectorRepresentation = source._VectorRepresentation;
}
//********************************************************************************************
// Contructors finished
//********************************************************************************************


//********************************************************************************************
// Operators
//********************************************************************************************

BigInteger & BigInteger::operator=(const BigInteger & rhs)
{
	BigInteger temp(rhs);
	std::swap(_VectorRepresentation, temp._VectorRepresentation);
	return *this;
}

BigInteger & BigInteger::operator+=(const BigInteger & rhs)
{
	auto larger = rhs._VectorRepresentation;
	auto smaller = _VectorRepresentation;

	if (larger.size() < smaller.size())
	{
		larger = _VectorRepresentation;
		smaller = rhs._VectorRepresentation;
	}
	

	std::reverse(std::begin(larger), std::end(larger));
	std::reverse(std::begin(smaller), std::end(smaller));

	auto result = larger;
	int carry = 0;
	size_t low_index = smaller.size();
	size_t high_index = larger.size();
	
	_VectorRepresentation.resize(high_index);
	for (size_t i = 0; i < high_index; ++i)
	{
		auto res =  larger[i] + carry;
		if (i < low_index)
		{
			res += smaller[i];
		}
		carry = res / 10;
		if (carry)
		{
			res -= 10;
		}
		_VectorRepresentation[i] = res;
	}
	if (carry)
	{
		_VectorRepresentation.resize(high_index + 1);
		_VectorRepresentation[high_index] = carry;
	}

	std::reverse(std::begin(_VectorRepresentation), std::end(_VectorRepresentation));

	return *this;
}

BigInteger & BigInteger::operator*=(const BigInteger & rhs)
{
	auto number1 = _VectorRepresentation;
	auto number2 = rhs.VectorRepresentation();
	auto size1 = number1.size();
	auto size2 = number2.size();
	std::vector<int> result;
	std::reverse(std::begin(number1), std::end(number1));
	std::reverse(std::begin(number2), std::end(number2));
	
	auto carry = 0;
	size_t index1 = 0;
	size_t index2 = 0;
	
	for ( index1 = 0; index1 < size1; ++index1)
	{
		for (index2 = 0; index2 < size2; ++index2)
		{
			if ((index1 + index2) < result.size())
			{
				result[index1 + index2] += number1[index1] * number2[index2];
			}
			else
			{
				result.push_back(number1[index1] * number2[index2]);
			}
		}
	}
	
	size_t index = 0;
	for (index; index < result.size(); ++index)
	{
		if (index < result.size() - 1)
		{
			result[index + 1] += result[index] / 10;
		}
		else if (result[index] >= 10)
		{
			result.push_back(result[index] / 10);
		}
		else
		{
			break;
		}

		result[index] %= 10;
	}
	std::reverse(std::begin(result), std::end(result));
	_VectorRepresentation = result;
	return *this;
}

BigInteger operator+(BigInteger lhs, const BigInteger & rhs)
{
	lhs += rhs;
	return lhs;
}
BigInteger operator*(BigInteger lhs, const BigInteger & rhs)
{
	lhs *= rhs;
	return lhs;
}
//********************************************************************************************
// Operators finished
//********************************************************************************************


void BigInteger::initialize()
{
	_VectorRepresentation.reserve(2000);
}


std::vector<int> BigInteger::VectorRepresentation() const
{
	return _VectorRepresentation;
}


std::string BigInteger::ToString() const
{
	std::string res = "";
	for (auto & elem : _VectorRepresentation)
	{
		res.append(std::to_string(elem));
	}
	return res;
}

size_t BigInteger::getDigitsCount() const
{
	return _VectorRepresentation.size();
}


void  BigInteger::ConvertStringToVector(const std::string & stringRepresentation)
{
	auto NumberLength = stringRepresentation.size();

	for (size_t i = 0; i < NumberLength; ++i)
	{
		_VectorRepresentation.push_back(stringRepresentation[i] - '0');
	}

}

