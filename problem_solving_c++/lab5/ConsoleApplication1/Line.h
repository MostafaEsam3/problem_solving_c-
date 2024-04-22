#pragma once
#include "Point.h"
#include<iostream>
using namespace std;
class Line
{
	Point *p1,*p2;
public:
	int x1, y1, x2, y2;
	Line()
	{

	}
	Line(int x1,int y1,int x2,int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
		
	}

	void draw()
	{
		int len = sqrt(pow(p1->getx() - p2->getx(), 2) + pow(p1->gety() - p2->gety(), 2));
		for (int i = 0; i < len; i++)
		{
			cout << "_";
		}

	}
	void setX(int X)
	{
		this->x1 = X;
	}
	void setX2(int X2)
	{
		this->x2 = X2;
	}
	void setY(int Y)
	{
		this->y1 = Y;
	}
	void setY2(int Y2)
	{
		this->y2 = Y2;
	}
};

