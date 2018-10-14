#ifndef PROJECTEULER_SOLUTION23_H_
#define PROJECTEULER_SOLUTION23_H_
#include "ComputeDivisors.h"
#include<vector>
#include<iostream>

class Solution23
{
public:
	static std::vector<int> AbundantNumbers();
	static long long int result();
private:
	static int limit;
};

#endif
