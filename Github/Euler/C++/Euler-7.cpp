#include "pch.h"
#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

//  Project-Euler Problem VII
//  By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. What is the 10001st prime number ?
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
	int counter = 0;

	for (int i = 0; i < 10000000000; i++)
	{
		if(prime(i))
		{
			counter++;
		}

		if(counter == 10001)
		{
			cout << i << endl;
			break;
		}
	}
	::getchar();
}