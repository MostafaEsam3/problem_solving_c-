#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Picture.h"
#include <iostream>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    Line L1[5];

    for (int i = 0; i < 5; i++)
    {

        L1[i].setX(x1);
        L1[i].setX2(x2);
        L1[i].setY(y1);
        L1[i].setY2(y2);
    }
    Rectangle r5 = Rectangle(2, 5,5,5);
    Circle c1(x1, x2, y1, y2);
    Circle c2(x1, x2, y1, y2);
    Circle c3(x1, x2, y1, y2);
    Circle c[3] ;
    c[0] = c1;
    c[1] = c2;
    c[2] = c3;


    Rectangle r1(5,2,2,5);
    Rectangle r2(1, 2, 3, 5);
    Rectangle r3(1, 2, 3, 5);
    Rectangle r[3] = { r1,r2,r3 };
 
    Picture p1(L1,r,c,3,3,5);
    p1.paint();

    
}
