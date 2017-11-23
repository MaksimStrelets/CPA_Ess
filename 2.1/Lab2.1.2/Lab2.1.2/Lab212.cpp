// Lab212.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int gross, taxrate, net, taxvalue;

	cin >> gross;
	cin >> taxrate;

	cout << gross * 100 / (100 + taxrate) << endl;
	cout << gross * taxrate / (100 + taxrate) << endl;

    return 0;
}

