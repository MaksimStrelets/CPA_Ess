// Lab171.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float x;

	cin >> x;
	cout << x << endl;

	cin >> x;
	cout.precision(2);
	cout << fixed << x << endl;

	cin >> x;
	cout.precision(6);
	cout << x << endl;
	
	cin >> x;
	cout.precision(2);
	cout << x << endl;

	cin >> x;
	cout.precision(0);
	cout << x << endl;

    return 0;
}

