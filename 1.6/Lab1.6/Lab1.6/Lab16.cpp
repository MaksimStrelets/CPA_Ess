// Lab16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool answer;
	int	value;
	cout << "Enter a value: ";
	cin	>> value;
	answer = (value >= 0 && value < 10) || (value == 111) || (value * 2 < 20 && value - 2 > -2) || (value - 1 > 1 && value / 2 < 10);
	cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}

