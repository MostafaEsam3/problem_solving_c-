#ifndef SQUARE_H
#define SQUARE_H


class Square : public Shape
{
    public:
        Square(int dim1) {
            this->dim1 = dim1;
            this->dim2 = dim1;
        }


};

#endif // SQUARE_H
