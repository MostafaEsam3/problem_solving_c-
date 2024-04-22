#pragma once
#include "shap.h"
#include"Point.h"
#include<iostream>
using namespace std;
class Rectangle :public Shap
{
	Point* p1, * p2;
public:
	Rectangle(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	void Draw()
	{
		cout << "Draw Rectangle \n";
	}
};

