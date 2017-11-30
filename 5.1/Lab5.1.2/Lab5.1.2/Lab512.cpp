// Lab512.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Square {
private:
	float side, area;
public:
	void set_side(float val) {
		if (val>0) {
			side = val;
			area = 4 * side;
		}
	}
	void print(void) {
		cout << "It's square with side " << side << " and area " << area;
	}
};
int main()
{
	Square s;
	s.set_side(12);
	s.print();
	return 0;
}
