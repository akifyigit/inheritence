#include "Doctor.h"
#include <string>
using namespace std;

Doctor::Doctor()
{
    //ctor
}

Doctor::~Doctor()
{
    //dtor
}

void Doctor::operate(){
    cout<<" I am doctor, I can operate..";
    setGender("Male");
    setFirstName("Akif");
    setSurName("Yigit");
}

void Doctor::setSalary(int Salary){
this->Salary=Salary;
}

int Doctor::getSalary(){
return Salary;
}
