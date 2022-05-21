#include "Person.h"

Person::Person(){
    //ctor
}

Person::~Person(){
    //dtor
}

string Person::getFullName(){
    return firstName + " " + surName;
}

string Person::getFirstName(){
    return firstName;
}

string Person::getSurName(){
    return surName;
}
string Person::getDateOfBirth(){
    return dateOfBirth;
}

double Person::getHeight(){
    return height;
}

string Person::getAddress(){
    return address;
}

int Person::getTelephone(){
    return telephone;
}

string Person::getEmail(){
    return email;
}
string Person::getGender(){
return gender;
}
void Person::setFirstName(string firstName){
    this->firstName = firstName;
}

void Person::setSurName(string surName){
    this->surName = surName;
}

void Person::setDateOfBirth(string dateOfBirth){
    this->dateOfBirth = dateOfBirth;
}

void Person::setHeight(double height){
    this->height = height;
}

void Person::setAddress(string address){
    this->address = address;
}

void Person::setTelephone(int telephone){
    this->telephone = telephone;
}

void Person::setEmail(string email){
    this->email = email;
}
void Person::setGender(string Gender){
this->gender=gender;
}
