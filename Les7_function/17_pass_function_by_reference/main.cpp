#include "main.hpp"

int main()
{
    char operation = '/';
    float input1 = 9.8;
    float input2 = 2.3;
    float result = 99999;
    std::cout<< &result;
    calculate(input1, input2, operation, result);
    //printEquation(input1, input2, operation, result);
    return 0;
}