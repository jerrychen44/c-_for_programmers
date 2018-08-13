/*We can change the code as shown below,
*but now we have to maintain two
*branches of the same code, one for
*each type of employee.
*/

//We tried to process all employees the same way.

#include "main.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    level = "hourly";

    if(status != level)//hourly
    {
        Employee e1;
        e1.setPayRate(10.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }
    else//salary
    {
        Manager e1;
        e1.setPayRate(12000.00);
        cout<<"e1 pay: $"<<e1.calcWeeklyPay();
    }


    return 0;
}


/*

Well, that worked, but we now we have to maintain a different branch for each employee type.


*/