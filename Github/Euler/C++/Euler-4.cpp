#include "pch.h"
#include <iostream>
#include <cstdint>
using namespace std;

//  Project-Euler Problem IV
//  Find the largest palindrome made from the product of two 3-digit numbers.
//  Code By KylHA

bool is_palid(int number) 
{
	int counter = 0;
	int lenght=0;
	int dummy = number;
	int *arr;

	while (dummy / 10 != 0)
	{
		lenght++;
		dummy /= 10;
	}
	lenght++;

	arr = (int*)malloc(lenght * sizeof(int));

	while(counter != lenght)
	{
		arr[counter] = number % 10;
		number /= 10;
		counter++;
	}

	for (int i = 0; i <= lenght; i++)
	{
		if (arr[i] != arr[lenght - 1])
		{
			return false;
		}
		lenght -= 1;
	}
	
	return true;
}

int main()
{
	int number=0;
	int dummy;

	for (int i = 999; i >= 100; i--)
	{
		for (int j = 999; j >= 100; j--)
		{
			if(is_palid(i*j))
			{
				dummy = i * j;

				if(dummy>number)
				{
					number = dummy;
				}
			}
		}
	}

	cout << number; //  906609
	::getchar();
}