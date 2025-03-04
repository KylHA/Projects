#include "pch.h"
#include <iostream>

using namespace std;

//  Project-Euler Problem II
//  By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
//  Code By KylHA

int main()
{
	int sum=0;
	int arr[3];
	
	arr[0] = 0;
	arr[1] = 1;

	arr[2] = 0;

	while (arr[2] < 4000000)
	{
		if (arr[2] % 2 == 0)
		{
			cout << arr[2] << endl;
			sum += arr[2];
		}

		arr[2] = arr[0] + arr[1];

		arr[0] = arr[1];
		arr[1] = arr[2];
	}
	cout << "sum : " << sum; //  4613732
	::getchar();
}