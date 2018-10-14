#include "pch.h"
#include "ComputePrimeNumbers.h"

template <class T>
std::vector<T> ComputePrimeNumbers<T>::generate(const int & totalCount)
{
	// 2 is prime
	std::vector <T> result;
	result.push_back(2);
	auto count = 1;
	auto number = 1;
	while (true)
	{
		// start with 3
		number += 2;
		if (ComputePrimeNumbers<T>::isPrime(number))
		{
			count++;
			result.push_back(number);
		}
		if (count == totalCount)
		{
			std::cout << "This is the " << totalCount << "th prime: " << number << std::endl;
			break;
		}
	}

	return result;
}

template <class T>
bool ComputePrimeNumbers<T>::isPrime(const T & number)
{
	if (number == 2 || number == 3)
	{
		return true;
	}
	if (number == 1 || number % 2 == 0 || number % 3 == 0)
	{
		return false;
	}
	auto sqrt = std::sqrt(number);
	auto f = 5;
	while (f <= sqrt)
	{
		if (number % f == 0)
		{
			return false;
		}
		if (number % (f + 2) == 0)
		{
			return false;
		}
		f += 6;
	}

	return true;
}
using LongInt = long long unsigned int;

template ComputePrimeNumbers<int>;
template ComputePrimeNumbers<LongInt>;



