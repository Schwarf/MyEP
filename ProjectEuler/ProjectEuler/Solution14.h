#ifndef PROJECTEULER_SOLUTION14_H_
#define PROJECTEULER_SOLUTION14_H_
#include <iostream>
#include <map>
#include <chrono>
#include <vector>


static std::map<int,int> results;
class Solution14 : std::chrono::high_resolution_clock
{
public:
	static int result();
	static int optimizedResult();
private:
	static int computeChain(const int number);
	
};

#endif
