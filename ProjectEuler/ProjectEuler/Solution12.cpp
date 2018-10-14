#include "pch.h"
#include "Solution12.h"


long long int Solution12::result()
{
	long long int run = 0;
	int count = 2;
	long long int divisor;
	int countDivisors = 0;
	while (true)
	{
		countDivisors = 2;
		run = count * (count + 1) / 2;
		long long int sqrt = std::sqrt(run);
		count++;
		for (divisor = 2; divisor <= sqrt; ++divisor)
		{
			if (run % divisor == 0)
			{
				if (run / divisor == divisor)
				{
					countDivisors++;
				}
				else
				{
					countDivisors += 2;
				}
			}
		}
		if (countDivisors > 500)
		{
			return run;
		}
	}
}

