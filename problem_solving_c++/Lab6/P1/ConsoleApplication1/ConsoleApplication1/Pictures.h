#pragma once
#include "Shap.h"
#include "Point.h"
#include "Rectangle.h"

class Pictures
{
	Shap**shapes;
	int noOfShaapes;
public :
	Pictures( Shap** shapes, int size)
	{
		noOfShaapes = size;
		this->shapes = shapes;
	}
	
	void paint()
	{
		for (int i = 0; i < noOfShaapes; i++)
		{
			shapes[i]->Draw();
		}
	}
};

