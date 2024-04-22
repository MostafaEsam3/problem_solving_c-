#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public Shape
{
    public:
        Rectangle(int dim1, int dim2) {
            this->setDim1(dim1);
            this->setDim2(dim2);
        }

        float calcArea(){
            return this->getDim1() * this->getDim2();
        }
};

#endif // RECTANGLE_H
