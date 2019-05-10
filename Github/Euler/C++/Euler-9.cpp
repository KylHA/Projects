#include "pch.h"
#include <iostream>
#include <cstdint>
#include <cmath>
#include <string>
using namespace std;

//  Project-Euler Problem IX
//  There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.
//  Code By KylHA


int main()
{
	int a, b, c;
	int sum;

		for (a = 1; a < 1000; a++)
		{
			for (b = a; b < 1000; b++)
			{
				c = 1000 - a - b;
				if(pow(a,2) + pow(b,2) == pow(c,2))
				{
					sum = a * b*c;
				}
			}

		}
	
		cout << sum << endl; //  31875000
	::getchar();
}