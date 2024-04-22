#include <iostream>

using namespace std;
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"

void PrintCalc(Shape *s[], int size){
    for(int i=0;i<size;i++){
        cout << s[i]->calcArea() << endl;
    }
}



int main()
{
    Shape *shape[3];

    shape[0] = new Square(5);
    shape[1] = new Circle(10);
    shape[2] = new Rectangle(4,5);

    PrintCalc(shape,3);


    return 0;
}
