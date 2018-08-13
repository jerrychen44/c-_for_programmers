//header file for main.cpp

#include<iostream>

//The class accepts strings,
//so we need to use namespace
using namespace std;

//tell compiler this class uses a generic value
template <class T>
class StudentRecord
{
    private:
        const int size = 5;
        T grade;
        int studentId;
    public:
        StudentRecord(T input);
        void setId(int idIn);
        void printGrades();
};
/*

*The member functions must all be treated as generic functions.
You will have to add the template command to each member function.
*/

//use template, can accept all kind of typs inputs
template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}




//other two fun are not template fun, but since
// these two are the fun inside a class, it have to add the template
template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}