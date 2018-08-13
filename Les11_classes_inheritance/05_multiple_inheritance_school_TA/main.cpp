/*Goal: understand multiple inheritance*/

#include "main.hpp"
//TeachingAssociate. It inherits attributes from Staff and from GradStudent.
int main()
{
    TA t1;
    t1.setSupervisor("Dr. Caohuu");
    t1.setStudentId(55555);
    t1.setTitle("Adjunct Prof.");
    cout<<t1.getSupervisor()<<" "<<t1.getId()<<" "<<t1.getTitle();
    return 0;
}