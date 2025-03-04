#include "pch.h"
#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
using namespace std;

//  Project-Euler Problem X
//  Find the sum of all the primes below two million.
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
	uint64_t sum = 0;

	for (uint64_t i = 1; i < 2000000; i++)
	{
		if (prime(i))
		{
			sum += i ;
		}
	}
		
		
	
	cout << sum << endl; //  142913828922
	::getchar();
}