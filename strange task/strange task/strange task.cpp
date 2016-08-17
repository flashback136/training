// strange task.cpp
//Two positive integers A and B (A <B). Output all integers from A to B inclusive; 
//with each number should be displayed many times, what is its value 
//(for example, the number 3 is displayed 3 times).

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void func(int,int);

int main()
{
	func(1, 5);
	_getche();
    return 0;
}

void func(int a, int b)
{
	for (int k = a; k < b + 1; k++)
		for (int j = 1;j < k+1; j++)
			cout << k << " ";
}