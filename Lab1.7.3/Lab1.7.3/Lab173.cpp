// Lab173.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int q1, q2, q3, q4;
	do
	{
		cout << "type ip:" << endl;
		cin >> q1;
		cin >> q2;
		cin >> q3;
		cin >> q4;
	} while (!(q1 > 0 & q2 > 0 & q3 > 0 & q4 > 0 & q1 < 256 & q2 < 256 & q3 < 256 & q4 < 256));

	cout << q1 << "." << q2 << "." << q3 << "." << q4 << endl;

    return 0;
}

