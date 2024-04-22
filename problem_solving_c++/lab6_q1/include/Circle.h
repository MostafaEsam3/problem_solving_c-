#ifndef CIRCLE_H
#define CIRCLE_H


class Circle: public Shape
{
    public:
        Circle(int r) {
            this->setDim1(r);
            this->setDim2(r);
        }

        float calcArea(){
            return 3.14 * this->getDim1() * this->getDim2();
        }

};

#endif // CIRCLE_H
