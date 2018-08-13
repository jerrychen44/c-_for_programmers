/*The header file for inheritance.*/

#include<iostream>
#include<string>
using namespace std;

//The base class
class Student
{
    private:
        int id;
    public:
        void setId(int idIn);
        int getId();
        Student();
        void setId();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{

    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : private Student
{
    private:
        string degree;
    public:
        GradStudent();
        void setDegree(string degreeIn);
        string getDegree();
        void setStudentId(int idIn);//need this to access Student::setId()
        int getStudentId();//need this to access Student::getId()
};

GradStudent::GradStudent()
{
    degree = "undelcared";
}

int GradStudent::getStudentId()
{
    //We must access getId() as a private function
    return Student::getId();
}
void GradStudent::setStudentId(int idIn)
{
    //We must access setId() as a private function
    Student::setId(idIn);
}



void GradStudent::setDegree(string degreeIn)
{
    degree = degreeIn;
}
string GradStudent::getDegree()
{
    return degree;
}