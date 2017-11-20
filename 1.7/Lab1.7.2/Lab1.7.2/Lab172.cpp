// Lab172.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cin >> x;
	cin >> y;

	cout << (abs(1. / x - 1. / y) < 0.000001 ? "equal" : "not equal") << endl;

    return 0;
}

