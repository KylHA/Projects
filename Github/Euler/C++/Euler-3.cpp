#include "pch.h"
#include <iostream>
#include <cstdint>
using namespace std;

//  Project-Euler Problem III
//  The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143 ?
//  Code By KylHA

bool prime(int number) 
{
	if (number <= 1)
	{
		return false;
	}

	if (number <= 3)
	{
		return true;
	}

	if (number % 2 == 0 || number % 3 == 0) 
	{ 
		return false;
	}

	for (int i = 5; i * i <= number; i += 6) 
	{
		if (number % i == 0 || number % (i + 2) == 0)
		{
			return false;
		}
	}

	return true;
}



int main()
{
	int number = 1;
	uint64_t num = 600851475143;
	int large_prime;
	
	

	while (number < num)
	{
		if ( num % number == 0)
		{
			if (prime(number))
			{
				large_prime = number;
			}
		}
		number++;
	}

	cout << "number : " << large_prime;
	
	::getchar();
}