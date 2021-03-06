// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "BigInteger.h"
#include "ComputePrimeNumbers.h"
#include "Solution27.h"
#include "Solution67.h"
#include "AllSolutions1To25.h"

int main()
{

	unsigned int res67 = Solution67::result();
	auto compare = res67 / Solution67Result;
	std::cout << "Solution67: " << compare << ", " << res67 << std::endl;
	Solutions1To25();
	std::cout << "Hallo" << std::endl;
	Solution27::result();

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


