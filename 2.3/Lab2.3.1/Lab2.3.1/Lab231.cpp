// Lab231.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int c0;
	cin >> c0;
	int st = 0;
	while (c0 > 1)
	{
		st++;
		if (c0 % 2 == 0)
			c0 = c0 / 2;
		else c0 = 3 * c0 + 1;
		cout << c0 << endl;
	}
	cout << "steps: " << st << endl;
    return 0;
}

