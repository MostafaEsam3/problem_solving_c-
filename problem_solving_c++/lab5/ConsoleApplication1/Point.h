#pragma once
#include<iostream>
using namespace std; 
class Point
{
	int x, y;

public :
	Point()
	{
		
	}
	Point(int x, int y )
	{
		this->x = x;
		this->y = y;
	}
	void display()
	{
		cout << "This point ( "<<this->x<<", "<<this->y<<" )";
	}
	int getx()
	{
		
		return this->x;

	}
	int gety()
	{
		return this->y;

	}

};

