#include "pch.h"
#include "Solution20.h"

int Solution20::result()
{
	BigInteger add(1);
	BigInteger sum(1);
	BigInteger factorial(1);
	for (int i = 1; i < 100; ++i)
	{
		sum += add;
		factorial *= sum;
	}
	auto vec = factorial.VectorRepresentation();
	int result = 0;
	for (auto & elem : vec)
	{
		result += elem;
	}
	std::cout << "Factorial(100) = " << factorial.ToString() << std::endl;
	return result;
}
