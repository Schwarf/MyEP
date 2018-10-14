#ifndef PROJECTEULER_SOLUTION11_H_
#define PROJECTEULER_SOLUTION11_H_
#include "ForProblem11.h"
#include <algorithm>
#include <vector>
class Solution11
{
public:
	static int findMax(const std::vector<std::vector<int>> & data, int & maximum);
	static int findMainDiagonalMax(const std::vector<std::vector<int>> & data, int & maximum);
	static int find2ndDiagonalMax(const std::vector<std::vector<int>> & data, int & maximum);
	static int result();


};

#endif
