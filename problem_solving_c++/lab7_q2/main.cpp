#include <iostream>
using namespace std;
class Parent
{
private:
    int x;
protected:
    int y;
public:
    int z;
};

//puplic,private,protected //error: 'int Parent::x' is private within this context|
class Child1 : public Parent
{
public:
    int a;
    Child1() {}; // x=3;

    void ctor ()
    {
        // x;
        y;
        z;

    }
};

class Child2 :public Child1
{

public:Child2(){
    // x;
   // y;
    z;
    };
};



int main()
{
    Child1 c;
    c.x;
    c.y;
    c.z;
}
