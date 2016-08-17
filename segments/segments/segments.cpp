// segments.cpp
//Given the positive numbers A and B (A> B). 
//In the segment of length A contains the greatest possible number of segments of length B (without overlaps). 
//Not using multiplication and division, to find the number of segments B, located on the segment A.

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void func_seg(int,int);

int main()
{
	func_seg(20, 6);
	_getche();
    return 0;
}

void func_seg(int a, int b)
{
	int n=a;
	int f = 0;
	while (n > b)
	{
		n = a - b;
		a = a - b;
		f = f + 1;
	}
	cout << "number of segments B "<<f;
}