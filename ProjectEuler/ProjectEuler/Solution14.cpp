#include "pch.h"
#include "Solution14.h"


int Solution14::result()
{
	time_point t1 = now();
	std::map<int, int> results;
	int max = 0;
	int masternumber = 0;
	results.insert(std::pair<int, int>(2, 2));
	for (int subject = 3; subject < 1000000; ++subject)
	{
		long long int series(subject);
		auto count = 0;
		auto result = 0;
		while (true)
		{
			if (results.count(static_cast<int>(series)))
			{
				result = count + results[static_cast<int>(series)];
				results.insert(std::pair<int, int>(subject, result));
				break;
			}

			if (series & 1)
			{
				series *= 3;
				series++;
			}
			else
			{
				series /= 2;
			}
			count++;
		}
		if (result > max)
		{
			max = result;
			masternumber = subject;
		}
		//std::cout << subject << std::endl;
	}
	time_point t2 = now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();
	std::cout << "Time for Problem 14 unoptimized [ms]: " << duration << std::endl;
	return masternumber;
}

int Solution14::computeChain(const int number)
{
	if (results.find(number) != results.end())
	{
		return results[number];
	}
	if (number & 1)
	{
		results[number] = 2 + Solution14::computeChain((3*number + 1) / 2);
	}
	else
	{
		results[number] = 1 + Solution14::computeChain(number / 2); 
	}

	return results[number];
}



int Solution14::optimizedResult()
{
	time_point t1 = now();
	
	results[1] = 1;
	
	int longestchain = 0;
	int answer = 1; 
	for (int number = 500000; number < 1000000; ++number)
	{
		auto chain = computeChain(number);
		if(chain > longestchain)
		{
			longestchain = chain;
			answer = number;
		}
	}
	time_point t2 = now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();
	std::cout << "Time for Problem 14 OPTIMIZED [ms]: " << duration << std::endl;
	return answer;
}
