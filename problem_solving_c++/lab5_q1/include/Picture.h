#ifndef PICTURE_H
#define PICTURE_H


class Picture
{
    int numberOfLine,numberOfRec,numberOfCir;
    Line *line;
    Rectangle *rec;
    Circle *cir;
    public:
        Picture(Line *line,Rectangle *rec, Circle *cir, int l , int r, int c) {
            this->line = line;
            this->rec = rec;
            this->cir = cir;
            numberOfCir = c;
            numberOfLine = l;
            numberOfRec =r;
        }

        void display(){
            cout << "Draw..."<<endl;
            cout << this->numberOfLine << " Line" << endl;
            cout << this->numberOfRec << " Rec" << endl;
            cout << this->numberOfCir << " Circle" << endl;

            for(int i=0;i<numberOfLine;i++){
                this->line[i].display();
            }

            for(int i=0;i<numberOfRec;i++){
                this->rec[i].display();
            }

             for(int i=0;i<numberOfCir;i++){
                this->cir[i].display();
            }


        }


};

#endif // PICTURE_H
