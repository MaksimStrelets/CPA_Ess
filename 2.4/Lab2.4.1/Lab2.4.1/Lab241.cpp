// Lab241.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	unsigned long counter = 0;
	int var;
	cout << "Enter a number: ";
	cin >> var;
	while (var)
	{
		counter += var & 1;
		var >>= 1;
	}
	cout << counter;
	return 0;
}

