// min_count.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

void min(int);


int main()
{
	min(3665);
	return 0;
}

void min(int n)
{
	int k = (n / 60)%60;
	cout << k;
	_getche();
}