#pragma once
#include <iostream>
using  namespace std;
#include "Shap.h"
class Square : public Shap
{
public:

	Square(int x)
	{
		Dim1 = x;
		Dim2 = x;
	}
	void  CalcArea()
	{
		cout << "Area of square = " << Dim1 * Dim2 << endl;
	}

};

