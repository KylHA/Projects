#include "pch.h"
#include <iostream>

using namespace std;

//  Project-Euler Problem I
//  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.
//  Code By KylHA

int main()
{
	int sum = 0;
	
	for (int number = 0; number < 1000; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
			sum += number;
		}
	}
	
	cout<<"sum: " << sum;  // 233168 

	::getchar();
}