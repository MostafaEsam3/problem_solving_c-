#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape
{
    Point *p1,*p2;
    public:
        Rectangle(int x1, int y1, int x2, int y2) {
            this->p1 = new Point(x1,y1);
            this->p2 =  new Point(x2,y2);
        }

        void draw() {
            cout << "Drawing Rectangle" << endl;
        }
};

#endif // RECTANGLE_H
