#pragma once
#include<iostream>
#include "Shap.h"
#include"Point.h"
using namespace std;

class Square :public Shap
{
	Point *p1, * p2;
public:
	Square(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	void Draw()
	{
		cout << "Drawing Square\n";
	}
};

