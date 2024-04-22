#pragma once
#include "Point.h"
#include<iostream>
using namespace std;
class Circle
{
	Point* p1, * p2;
public:
	Circle()
	{

	}
	Circle(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	void draw()
	{
		cout << "Circle\n";
	}

};

