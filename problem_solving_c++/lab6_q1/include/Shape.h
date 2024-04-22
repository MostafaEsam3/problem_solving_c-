#ifndef SHAPE_H
#define SHAPE_H


class Shape
{

    public:
        virtual float calcArea() = 0;

        void setDim1(int dim1){
            this->dim1 = dim1;
        }

        void setDim2(int dim2){
            this->dim2 = dim2;
        }

        int getDim1(){
            return this->dim1;
        }

        int getDim2(){
            return this->dim2;
        }

    protected:
        int dim1,dim2;

};

#endif // SHAPE_H
