#include "pch.h"
#include "Solution23.h"

// Definition of abundant number with example 12:
// 12 has divisors: 1,2,3,4,6 and 12. The number itself (here 12) is not considered
// The sum of the remaining divisors is: 1 + 2 + 3 + 4 + 6 = 16 > 12 --> abundant number
// If divisor sum is equal the number, the number is called 'perfect'.
// If divisor sum is less than the number, the number is called 'deficient'.
int Solution23::limit = 28123;
std::vector<int> Solution23::AbundantNumbers()
{

	auto limit = Solution23::limit;
	std::vector<int> result;
	for (int number = 1; number < limit; ++number)
	{
		auto divisors = ComputeDivisors::getDivisors(number);

		// List of divisors contain the number itself. Abundant numbers definition does not.
		auto test = -number;
		for (auto & elem : divisors)
		{
			test += elem;
		}
		if (test > number)
		{
			result.push_back(number);
		}
		
	}

	return result;
}


long long int Solution23::result()
{
	auto limit = Solution23::limit;
	auto abundantNumbers = Solution23::AbundantNumbers();
	std::vector<bool> IntegerNonAbundantSums(limit, true);
	std::cout << "Abundant numbers under "<< limit << ": " << abundantNumbers.size() << std::endl;
	long long int sum = 0;
	auto countNonAbundantSumIntegers = 0;
	for (size_t index1 = 0; index1 < abundantNumbers.size() ; ++index1 )
	{
		for (size_t index2 = index1; index2 < abundantNumbers.size(); ++index2)
		{
			auto abundanSum = abundantNumbers[index1] + abundantNumbers[index2];

			// set integers which are the sum of two non-abundant numbers to false
			if (abundanSum < limit && IntegerNonAbundantSums[abundanSum]  )
			{
				IntegerNonAbundantSums[abundanSum] = false;
				countNonAbundantSumIntegers++;
			}
		}
		
	}
	//std::cout << countNonAbundantSumIntegers << std::endl;
	//std::cin.ignore();
	auto count = 0;
	for (auto elem : IntegerNonAbundantSums)
	{
		
		if (elem)
		{
			sum += count;
			std::cout << count << std::endl;
		}
		count++;

	}
	return sum;

}
