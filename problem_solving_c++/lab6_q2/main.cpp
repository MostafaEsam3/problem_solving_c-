#include <iostream>

using namespace std;
#include "Point.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Line.h"
#include "Picture.h"

int main()
{



    Shape *shape[6];
    shape[0] = new Rectangle(1,2,3,4);
    shape[1] = new Rectangle(1,2,3,4);
    shape[2] = new Circle(4,5,6,7);
    shape[3] = new Circle(4,5,6,7);
    shape[4] = new Line(8,9,10,11);
    shape[5] = new Line(8,9,10,11);



    Picture pic(shape,6);
    pic.Paint();

    return 0;
}
