#pragma once
#include"Shap.h"
#include "Point.h"
class Line : public Shap
{
	Point* p1, *p2;
public :
	Line(int x1, int y1, int x2, int y2)
	{
		p1 = new Point(x1, y1);
		p2 = new Point(x2, y2);
	}
	void Draw()
	{
		cout << "Drawing Line\n";
	}
};

