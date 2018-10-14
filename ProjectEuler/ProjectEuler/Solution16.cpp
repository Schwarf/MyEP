#include "pch.h"
#include "Solution16.h"

int Solution16::result()
{
	int init = 1;
	for (int i = 0; i <= 19; ++i)
	{
		init *= 2;
	}

	BigInteger start(init);
	BigInteger multi(init);
	for (int i = 0; i < 49; ++i)
	{
		start *= multi;
	}

	auto digitsum = 0;
	auto vec = start.VectorRepresentation();
	for (auto & elem : vec)
	{
		digitsum += elem;
	}
	return digitsum;
}
