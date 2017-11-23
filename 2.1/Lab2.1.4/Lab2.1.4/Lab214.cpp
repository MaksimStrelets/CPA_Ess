// Lab214.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year, month, day;
	do
	{
		cin >> year;
		cin >> month;
		cin >> day;
	} while (year < 0 | month < 0 | day < 0 | month > 12 | day > 31);

	month -= 2;
	if (month <= 0)
	{
		month += 12;
		year--;
	}
	month *= 83;
	month /= 32;
	month += day;
	month += year;
	month += year / 4;
	month -= year / 100;
	month += year / 400;
	cout << month % 7 << endl;
    return 0;
}

