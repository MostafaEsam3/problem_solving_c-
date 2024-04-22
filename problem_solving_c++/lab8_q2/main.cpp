#include <iostream>

using namespace std;
template<class T>
class appropriate
{
private:
    T  num1,  num2;
public:
        T res=0;
public:
    appropriate(T nu1,T nu2)
    {

        num1 = nu1;
        num2 = nu2;

    };

    T sum()
    {
        res = num1 + num2;
              return  res;
    }
    T sub()
    {
        res = num1 - num2;
              return  res;
    }

};


int main()
{
    appropriate<int> calcint(5,3);
    cout<<"int sum "<<calcint.sum()<<endl;

    cout<<"int sub "<<calcint.sub()<<endl;
    appropriate<float> calcfloat(3.5,3.4);
    cout<<"float sum "<<calcfloat.sum()<<endl;
    cout<<"float sub "<<calcfloat.sub()<<endl;
    return 0;
}   ;

