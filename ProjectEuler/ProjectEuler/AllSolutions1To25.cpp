#include "pch.h"
#include "AllSolutions1To25.h"

void Solutions1To25()
{
	unsigned int compare = 0;
	auto solution7 = ComputePrimeNumbers<int>::generate(10001).back();
	compare = solution7 / Solution7Result;
	std::cout << "Solution7: " << compare << ", " << solution7 << std::endl;
	std::cout << "Solution12" << std::endl;
	compare = static_cast<int>(Solution12::result()) / Solution12Result;
	std::cout << compare << ", " << Solution12Result << std::endl;

	std::cout << "Solution13" << std::endl;
	compare = Solution13::result() / Solution13Result;
	std::cout << compare << Solution13::result() << std::endl;

	// Takes long
	std::cout << "Solution14" << std::endl;
//	compare = Solution14::result() / Solution14Result;
//	std::cout << compare << ", "<< Solution14Result << std::endl;
	std::cout << "Solution14 optimized" << std::endl;
	compare = Solution14::optimizedResult() / Solution14Result;
	std::cout << compare << ", " << Solution14Result << std::endl;


	auto solution16 = Solution16::result() / Solution16Result;
	std::cout << "Solution 16: " << solution16 << ", " << Solution16::result << std::endl;

	unsigned int res18 = Solution18::result();
	compare = res18 / Solution18Result;
	std::cout << "Solution18: " << compare << ", " << res18 << std::endl;


	std::cout << Solution11::result() << " NOT SOLVED !!!!!" << std::endl;

	auto result = Solution20::result();
	std::cout << "Solution 20 = " << result << std::endl;

	auto solution23 = Solution23::result();
	auto solution23Result = Solution23Result;
	std::cout << "Solution 23 (VERY SLOW) = " << solution23 << solution23Result << std::endl;

	std::cout << "Solution 25" << std::endl;
	std::cout << Solution25::result() / Solution25Result << ", " << Solution25Result << std::endl;

}