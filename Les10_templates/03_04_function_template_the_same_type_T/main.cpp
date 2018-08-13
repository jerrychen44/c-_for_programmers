/*Goal: Practice writing generic functions*/

#include "main.hpp"

//so far, the template fun
//all the input parameters and return variables are the same type.

int main()
{
    int a = 90;
    int b = 1;
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);


    float c = 0.333;
    float d = 0.2;
    std::cout<<c <<" + "<<d<<" = "<< sumTwo(c,d);

    return 0;
}