#pragma once
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"

class Picture
{
	Line* line;
	int noOfLine;
	Rectangle* rec;
	int noOfRec;
	Circle* circle;
	int noOfCircle;
public:
	Picture(Line* line, Rectangle* Rec, Circle* circ, int r, int c, int L)
	{
		this->line = line;
		this->rec = Rec;
		this->circle = circ;
		this->noOfLine = L;
		this->noOfRec = r;
		this->noOfCircle = c;
	}
	void paint()
	{

		for (int i = 0; i < noOfLine; i++)
		{
			line[i].draw();
		}
		cout << "-----------------------\n";
		for (int i = 0; i < noOfCircle; i++)
		{
			circle[i].draw();
		}
		cout << "-------------------------\n";
		for (int i = 0; i < noOfRec; i++)
		{
			rec[i].draw(); 
		}
	}
};

