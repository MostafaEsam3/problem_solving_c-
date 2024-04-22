#ifndef LINE_H
#define LINE_H


class Line
{
    Point *p1,*p2;
    public:
        Line(int x1, int y1, int x2, int y2){
            this->p1  = new Point(x1,y1);
            this->p2 = new Point(x2,y2);
        }

        void display(){
            cout << "Draw The Line Shape" << endl;
            this->p1->display();
            this->p2->display();
        }
    protected:


};

#endif // LINE_H
