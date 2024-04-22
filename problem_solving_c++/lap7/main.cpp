#include <iostream>

using namespace std;
class parent{
public:int x;
parent(){}
};

class child1 :virtual public parent{
public:
    child1(){
    x=1;}


};
class child2 :virtual public parent{
public:
    child2(){
    x=2;}


};
class child3 : public child1,public child2{
public:
    child3(){
    }


};

int main()
{
child3 c;
cout<<"x="<<c.x;
   return 0;
}
