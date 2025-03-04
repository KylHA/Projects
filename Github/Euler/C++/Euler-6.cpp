#include "pch.h"
#include <iostream>
#include <cstdint>
#include <cmath>
using namespace std;

//  Project-Euler Problem VI
//  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
//  Code By KylHA

int main()
{
	double sumofsq = 0;
	double sqofsum = 0;
	int x = 100;
	int total;

	sumofsq = x * ( x + 1 ) * ( 2 * x + 1) / 6;
	
	sqofsum = pow( x * (x+1) / 2, 2);

	total = sqofsum - sumofsq;

	cout << total << endl; //  25164150

	::getchar();
}