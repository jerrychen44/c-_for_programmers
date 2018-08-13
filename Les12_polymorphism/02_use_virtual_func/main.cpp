/*Goal: understand virtual functions
*In main.hpp we added the keyword
*virtual to the function calcWeeklyPay.
*Does this fix the problem?
*/

#include "main.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object

    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }

    e1->setPayRate(12000.00);
    cout<<"It works!\n";
    cout<<"e1 pay: $"<<e1->calcWeeklyPay() << endl;
    delete e1;
    return 0;
}


/*

It works!
e1 pay: $230.769



In the program below we define a manager and an employee.

The virtual function makes this possible:

check the main.hpp

    virtual float calcWeeklyPay();

Note:
we only had to add the keyword virtual in one location in the base class.
Any class derived from Employee that has a function by the same name will inherit the same properties.

*/