#include "pch.h"
#include <iostream>
#include <cstdint>
using namespace std;

//  Project-Euler Problem V
//  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//  Code By KylHA

int main()
{
	int number = 1;
	int check = 0;

	while (check != 20)
	{
		for (int i = 1; i <= 20; i++)
		{
			if (number %i == 0)
			{
				check++;
			}
			else
			{
				check = 0;
				break;
			}
		}
		
		if(check == 20)
		{
			cout << number << endl; //  232792560
			break;
		}
		number++;
	}
	
	::getchar();
}