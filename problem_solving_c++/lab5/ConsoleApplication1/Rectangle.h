#pragma once
#include "Point.h"
#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;
class Rectangle
{
	Point* p1, * p2;
public :
	Rectangle()
	{

	}
	Rectangle(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	void draw()
	{
		
		for (int i = 0; i < abs(p1->getx() - p2->getx()); i++)
		{
			cout << "-";
		}
		for (int i = 0; i < abs(p1->getx() - p2->gety()); i++)
		{
			cout << "|\n";
		}
		for (int i = 0; i < abs(p1->getx() - p2->getx()); i++)
		{
			cout << "-";
		}
	}
};

