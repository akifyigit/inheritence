#include <iostream>
#include <string>
#include "Person.h"
#include "Doctor.h"

using namespace std;

int main()
{
    Doctor a;
    a.setFirstName("Akif");
    a.setSurName("Yigit");
    a.setGender("Male");
    cout<<"Doctor: "<<a.getFullName()<<endl;
    a.operate();

    Person b;
    b.setFirstName("Aydin");
    b.operate(); //error: base class can not access derived class functions.

    return 0;
}
