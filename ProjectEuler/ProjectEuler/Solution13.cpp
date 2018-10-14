#include "pch.h"
#include "Solution13.h"

long long int Solution13::result()
{
	auto numbers = ForProblem13::Data();
	BigInteger start(numbers.front());
	for (size_t i =1; i < numbers.size(); ++i)
	{
		BigInteger add(numbers[i]);
		start += add;
	}
	
	std::cout << "Sum of hundred 50-digit numbers: " << start.ToString() << std::endl;
	std::string result("");
	auto val = start.VectorRepresentation();
	for (int i = 0; i < 10; ++i)
	{
		result.append(std::to_string(val[i]));
	}
	auto res = std::stoll(result);
	return res;
}
