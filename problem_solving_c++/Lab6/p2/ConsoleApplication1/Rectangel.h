#pragma once
#include<iostream>
using namespace std;
#include "Shap.h"
class Rectangel : public Shap
{
public :
	Rectangel(int x, int y)
	{
		Dim1 = x;
		Dim2 = y;
	}
	void CalcArea()
	{
		cout << "Area of Rectangle = " << Dim1 * Dim2 << endl;
	}
};

