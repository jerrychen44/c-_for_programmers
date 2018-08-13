/*Goal: look an example of inheritance
* that highlights the need for polymorphism.
*/

#include "main.hpp"

int main()
{
    Employee e1;
    e1.setPayRate(10.00);//hourly salary

    Manager m1;
    m1.setPayRate(12000.00);//yearly salary

    cout<<"e1 weekly pay: $"<<e1.calcWeeklyPay();
    cout<<"\nm1 weekly pay: $"<<m1.calcWeeklyPay();
    cout << endl;
    return 0;
}

/*

It would be nice if we didn't have to specify which type of employee when we instantiated an object.
It would be nice if we could just say employee, since both are employees.

*/