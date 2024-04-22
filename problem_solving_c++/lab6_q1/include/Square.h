#ifndef SQUARE_H
#define SQUARE_H


class Square : public Shape
{
    public:
        Square(int dim1) {
            this->setDim1(dim1);
            this->setDim2(dim1);
        }

        float calcArea(){
            return this->getDim1() * this->getDim2();
        }

};

#endif // SQUARE_H
