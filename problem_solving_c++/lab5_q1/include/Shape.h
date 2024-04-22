#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        float calcShape(){
            return (dim1+dim2) * 2;
        }

    protected:
        int dim1,dim2;


};

#endif // SHAPE_H
