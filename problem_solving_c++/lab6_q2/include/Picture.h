#ifndef PICTURE_H
#define PICTURE_H


class Picture
{
    Shape **shape;
    int numberOfShape;
    public:
        Picture(Shape **s, int numberOfShape) {
            this->numberOfShape = numberOfShape;
            shape = s;
        }

        void Paint(){
            for(int i=0;i<this->numberOfShape;i++){
                    this->shape[i]->draw();
            }
        }


};

#endif // PICTURE_H
