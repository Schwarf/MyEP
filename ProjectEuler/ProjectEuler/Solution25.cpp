#include "pch.h"
#include "Solution25.h"

int Solution25::result()
{
	BigInteger Fm2(1);
	BigInteger Fm1(1);

	BigInteger Fm(0);
	// We start at the second Fibnoacci Number F_1 = F_2 = 1
	auto count = 2;

	while (true)
	{
		
		Fm = (Fm1 + Fm2);
		count++;
		auto test = Fm.getDigitsCount();
		//std::cout <<count << ", " << Fm.getDigitsCount()  <<std::endl;
		if (test == 1000)
		{
			break;
		}
		
		Fm2 = Fm1;
		Fm1 = Fm;
	}
	return count;
}
