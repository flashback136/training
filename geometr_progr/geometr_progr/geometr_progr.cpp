// geometr_progr.cpp
//A real number A and an integer N (> 0). Using one cycle, find the sum of 1 + A + A ^ 2 + A ^ 3 + ... + A ^ N.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void func_a(float,int);

int main()
{
	func_a(3,5);
	_getche();
    return 0;
}

void func_a(float a, int n)
{
	double sum = 0;
	for (int k = 0; k < n+1; k++)
	{
		sum = sum + pow(a,k);
	}
	cout <<"sum = "<< sum;
}
