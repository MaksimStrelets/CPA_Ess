// Lab141.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <string>
#include <iomanip>
#include <iostream>

int main()
{
	float v = 2;
	float result = v + 2 * 2;
	cout << result << ",  expected  6" << endl;
	result = v + 9 * v + 2 * 2;
	cout << result << ",  expected  24" << endl;
	result = v - 1 * 2 + 3 * 2;
	cout << result << ",  expected  6" << endl;
	result = v * 7 * v + 2 * 2;
	cout << result << ",  expected  32" << endl;
	result = v * 0 + 2 * 2 - 1 * 4;
	cout << result << ",  expected  0" << endl;

    return 0;
}

