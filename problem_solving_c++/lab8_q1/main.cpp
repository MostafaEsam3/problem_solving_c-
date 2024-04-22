#include <iostream>

using namespace std;


template<class T>

maximum(T num1,T num2){
    if(num1>num2){
cout <<num1 <<endl;
        return num1;
            }
            else{
cout <<num2 <<endl;

               return num2;
;            }
}
int main()
{
    maximum<int>(2,3);
    maximum<float>(2.3,3.4);

       return 0;
}
