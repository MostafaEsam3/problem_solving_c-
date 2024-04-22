#include <iostream>
#include "Shap.h"
#include "Point.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Pictures.h"
using namespace std;
int main()
{
	Shap *arr[6];
	arr[0] = new Circle(2, 3,4,5);
	arr[1]= new Circle(2, 3, 4, 5);
	arr[2] = new Circle(2, 3, 4, 5);
	arr[3] = new Square(2, 2, 5, 5);
	arr[4] = new Square(2, 2, 5, 5);
	arr[5] = new Rectangle(2, 2, 5, 5);
	Pictures p1(arr,6);
	p1.paint();

}
