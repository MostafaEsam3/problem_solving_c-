#pragma once
#include <iostream>
using namespace std;
#include "Shap.h"
class Circle :public Shap
{
	
public:
	Circle(int x)
	{
		Dim1 = x;
		Dim2 = x;
	
	}
	void CalcArea()
	{
		
		cout << "Area of Circle = " << 3.14 * Dim1 * Dim2 << endl;
	}
};

