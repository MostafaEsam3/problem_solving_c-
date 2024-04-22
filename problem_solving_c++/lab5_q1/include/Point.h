#ifndef POINT_H
#define POINT_H


class Point
{


    public:
        Point(int x, int y) {
            setX(x);
            setY(y);
        }

        void setX(int x){
            this->x = x;
        }
        int getX(){
            return this->x;
        }

        void setY(int y){
            this->y = y;
        }

        int getY(){
            return this->y;
        }

        void display(){
            cout << "Draw Point" << endl;
            cout << this->getX() << ", " << this->getY() << endl;
        }
    private:
        int x,y;

};

#endif // POINT_H
