#include "pch.h"
#include "Solution27.h"






int Solution27::result()
{
	auto relevantPrimes = ComputePrimeNumbers<int>::generate(168);
	int b = 0;
	int a = 0;

	for (auto & elem : relevantPrimes)
	{
		b = elem;
		for (int i = 1; i <= 1000; ++i)
		{
			a = i;
			if (checkNequal1(a, b))
			{

			}
		}

	}
	
	return 0;
}

bool Solution27::checkNequal1(const int & a, const int & b)
{

	return false;
}
