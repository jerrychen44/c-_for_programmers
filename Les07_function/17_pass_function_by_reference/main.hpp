#include<iostream>

void calculate(float in1, float in2, char op, float &ans);
void printEquation(float input1,float input2, char operation, float result);

void calculate(float in1, float in2, char op, float &ans)
{
    std::cout << "\n2, " << ans << "\n";
    std::cout << "\n3, " << &ans << "\n";
    switch(op)
    {
        case '+': ans = in1 + in2;
                  break;
        case '-': ans = in1 - in2;
                  break;
        case '*': ans = in1 * in2;
                  break;
        case '/': ans = in1 / in2;
                  break;
        default:  std::cout<<"Illegal operation\n";
    }
}
void printEquation(float input1,float input2, char operation, float result)
{
    std::cout<<"\n"<<input1<<" "<<operation<<" "<<input2<<" = "<<result<<"\n";
}

