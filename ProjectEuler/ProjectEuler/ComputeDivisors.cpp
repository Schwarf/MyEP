#include "pch.h"
#include "ComputeDivisors.h"

std::set<int> ComputeDivisors::getDivisors(const int & number)
{
	std::set<int> result;
	result.insert(number);
	if (number == 1)
	{
		return result;
	}
	result.insert(1);
	auto sqrt = std::sqrt(number);
	for (int divisor = 2; divisor <= sqrt; ++divisor)
	{
		if (number % divisor == 0)
		{
			auto divisor2 = number / divisor;
			if (divisor2 == divisor)
			{
				result.insert(divisor);
			}
			else
			{
				result.insert(divisor);
				result.insert(divisor2);
			}
		}
	}
	return result;
}
