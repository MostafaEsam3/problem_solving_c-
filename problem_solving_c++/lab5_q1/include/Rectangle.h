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

        Rectangle(int dim1, int dim2){
            this->dim1 = dim1;
            this->dim2 = dim2;
        }
        void display(){
            cout << "Draw Rectangle Shape" <<endl;
            this->p1->display();
            this->p2->display();
        }


        float calcShape()
        {
            return Shape::calcShape();
        }


};

#endif // RECTANGLE_H
