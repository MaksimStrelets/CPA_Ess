// Lab213.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int sys;
	cin >> sys;
	bool s = sys;
	float m, ft, in;
	if (s)
	{
		cin >> ft;
		cin >> in;
		cout << ft * 0.3048 + in * 0.0254 << "m" << endl;
		
	}
	else 
	{
		cin >> m;
		in = m * 39.3701;
		ft = (int)in / 12;
		in -= 12 * ft;
		cout << ft << "\'" << in << "\"" << endl;
		
	}
	
    return 0;
}

