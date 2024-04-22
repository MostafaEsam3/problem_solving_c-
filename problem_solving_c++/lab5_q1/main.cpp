#include <iostream>

using namespace std;
#include "Point.h"
#include "Line.h"
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"


void TotalArea(Rectangle *r, Circle *c, Square *s,int nor, int noc, int nos){

    cout << "Rectangle "<<endl;
    for(int i=0;i<nor;i++){
        cout << r[i].calcShape() << endl;
    }

    cout << "Circle " << endl;
     for(int i=0;i<noc;i++){
        cout << c[i].calcShape() << endl;
    }

    cout << "Square " << endl;
     for(int i=0;i<nos;i++){
        cout << s[i].calcShape() << endl;
    }



}


int main()
{


    Rectangle r1(9,10,6,8);
    Rectangle r2(9,10,11,12);
    Rectangle r3(13,14,15,16);
    Rectangle recs[3] = {r1,r2,r3};


    Line l1(9,10,6,8);
    Line l2(9,10,11,12);
    Line l3(13,14,15,16);
    Line lines[3] = {l1,l2,l3};

    Circle c1(9,10,6,8);
    Circle c2(9,10,11,12);
    Circle c3(13,14,15,16);
    Circle circles[3] = {c1,c2,c3};

    Picture pic(lines,recs,circles,3,3,3);
    pic.display();
*/

    Circle c1(5);
    Circle c2(4);
    Circle c3(3);
    Circle cirs[3] = {c1,c2,c3};


    Square s1(4);
    Square s2(5);
    Square s3(6);

    Square squ[3] = {s1,s2,s3};

    Rectangle r1(4,5);
    Rectangle r2(6,7);
    Rectangle r3(8,9);

    Rectangle res[3] = {r1,r2,r3};

    TotalArea(res,cirs,squ,3,3,3);





    return 0;
}
