/*Goal: study a simple example if inheritance.
*/
#include"main.hpp"

int main()
{
    //Create an instance of the derived class,
    //GradStudent
    GradStudent gs1;


    //Because the base class are set as private to access
    //We can no longer to call public method void setId(int idIn);
    // and int getId(); of base class student,
    // so we have to write two new public method for GradStudent
    // and let those two fun to access the base class mthod.

    //Set the id of the grad student
    //using the function in the base class
    gs1.setStudentId(123456789);

    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

    cout<<gs1.getStudentId()<<" "<<gs1.getDegree();
    return 0;
}