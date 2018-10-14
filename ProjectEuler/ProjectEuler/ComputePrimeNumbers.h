#ifndef PROJECTEULER_COMPUTEPRIMENUMBERS_H_
#define PROJECTEULER_COMPUTEPRIMENUMBERS_H_
#include <vector>
#include <cmath>
#include <iostream>
template <class T>
class ComputePrimeNumbers
{
public:
	static std::vector<T> generate(const int & totalCount);
	static bool isPrime(const T & number);
};
#endif

