// switch.cpp
// An integer in the range of 1-99. Print string - the description of the number of

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

void func_sw(int);

int main()
{
	for (int i = 1; i < 100; i++)
	{
		std::cout << i << " is ";
		func_sw(i);
	}
	_getche();
	return 0;
}

void func_sw(int n)
{
	int a = n/10;
	int b = n % 10;

	switch (a)
	{
	case 1:  switch (b)
	{
		case 0: cout << "ten" << endl; break;
		case 1: cout << "elleven" << endl;break;
		case 2: cout << "twelve" << endl;break;
		case 3: cout << "thirteen" << endl;break;
		case 4: cout << "forteen" << endl;break;
		case 5: cout << "fifteen" << endl;break;
		case 6: cout << "sixteen" << endl;break;
		case 7: cout << "seventeen" << endl;break;
		case 8: cout << "eighteen" << endl;break;
		case 9: cout << "nineteen"<<endl;break;
	} break; 
	case 2: cout << "twenty" << " "; break;
	case 3: cout << "thirty" << " "; break;
	case 4: cout << "forty" << " "; break;
	case 5: cout << "fifty" << " "; break;
	case 6: cout << "sixty" << " "; break;
	case 7: cout << "seventy" << " "; break;
	case 8: cout << "eighty" << " "; break;
	case 9: cout << "ninety" << " "; break;
	}
	if ((n < 10) || (n>19))
	{
		switch (b)
		{
		case 0: cout << endl;break;
		case 1: cout << "one" << endl; break;
		case 2: cout << "two" << endl; break;
		case 3: cout << "three" << endl; break;
		case 4: cout << "four" << endl;break;
		case 5: cout << "fife" << endl;break;
		case 6: cout << "six" << endl;break;
		case 7: cout << "seven" << endl;break;
		case 8: cout << "eight" << endl;break;
		case 9: cout << "nine" << endl;break;
		}
	}
}