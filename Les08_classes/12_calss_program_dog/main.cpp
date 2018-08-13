/*Goal: practice creating and using a class
**Use the class 'Dog' to create to
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/


#include"main.hpp"

using namespace std;

int main()
{


    Dog dog1;
    Dog dog2;

    dog1.setName("Trixie");
    dog1.setLicenseNumber(1234);
    cout<<dog1.getName();
    cout<<dog1.getLicenseNumber();
    dog1.printInfo();
    cout<<"\n";

    dog2.setName("Kali");
    dog2.setLicenseNumber(5678);
    cout<<dog2.getName();
    cout<<dog2.getLicenseNumber();
    dog2.printInfo();

    return 0;
}