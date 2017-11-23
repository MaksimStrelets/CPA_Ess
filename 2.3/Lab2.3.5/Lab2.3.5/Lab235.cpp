// Lab235.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace	std;
int main()
{
	int c;
	cin >> c;
	cout << '+';
	c -= 2;
	for	(int i = 0; i <	c; i++)
		cout <<	'-';
	cout << '+'	<< endl;
	for (int i = 0; i <	c; i++) 
	{
		cout << '|';
		for	(int j = 0; j <	c; j++)
			cout <<	' ';
		cout <<	'|'	<<	endl;
	}
	cout << '+';
	for (int i = 0; i <	c; i++)
		cout <<	'-';
	cout << '+'	<< endl;
    return 0;
}

