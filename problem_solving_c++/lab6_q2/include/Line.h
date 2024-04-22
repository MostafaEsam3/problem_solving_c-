#ifndef LINE_H
#define LINE_H


class Line : public Shape
{
    Point *p1,*p2;
    public:
        Line(int x1, int y1, int x2, int y2) {
            this->p1 = new Point(x1,y1);
            this->p2 =  new Point(x2,y2);
        }
        void draw(){
            cout << "Drawing Line" << endl;
        }
};

#endif // LINE_H
