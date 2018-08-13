/*Goal: learn to use constructors*/


#include<iostream>
using namespace std;

//The cats class that we used earlier in the lesson.
class Cats
{
    string name;
    string breed;
    int age;
public:

    //constructor and destructor is called automatically.
    //Constructors do not return a value, including void
    Cats(); //declaring the constructor
    ~Cats(); //declaring the destructor



    //normal fun section
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//defining the constructor,destructor
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}

Cats::~Cats()
{
    cout<<"\nDeleting the Object\n";

}

//normal fun
void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}
string Cats::getName()
{
    return name;
}
string Cats::getBreed()
{
    return breed;
}
int Cats::getAge()
{
    return age;
}
void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age<<"\n";
}

//+++++++
int main()
{
    Cats cat1;
    cout<<"Cat1 information: ";
    cat1.printInfo();
    return 0;
}