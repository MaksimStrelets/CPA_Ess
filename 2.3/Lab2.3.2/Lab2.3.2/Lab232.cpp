// Lab232.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double pi4 = 0.;
	long n;
	cin >> n;

	for (long i = 0; i < n; i++)
		pi4 += 1. / (2 * i + 1) * pow(-1, i % 2);
	cout.precision(20);
	cout << pi4 * 4. << endl;
    return 0;
}

