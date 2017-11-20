// Lab143.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int i, j, k;
	cout << "i: ";
	cin >> i;
	cout << " j: ";
	cin >> j;

	i += 2;
	j -= i;
	k = i / j;
	k += k;
	k--;
	j = k % i;
	k += k + i;
	k += k / j;
	k = k * k * k;
	k += i * j;

	cout << k << endl; 
    return 0;
}

