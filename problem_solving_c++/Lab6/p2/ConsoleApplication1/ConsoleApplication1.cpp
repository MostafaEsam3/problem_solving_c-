#include "Shap.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangel.h"
#include <iostream>
using namespace std;
void TotalArea(Shap **arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i]->CalcArea();
    }
}
int main()
{
    
    Shap* arr[5];
    arr[0] = new Circle(5);
    arr[1] = new Circle(4);
    arr[2] = new Circle(3);
    arr[3] = new Rectangel(2,4);
    arr[4] = new Square(2);
  
    TotalArea(arr, 5);
}

