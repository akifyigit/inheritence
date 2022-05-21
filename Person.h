#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        Person();
        virtual ~Person();

        string getFullName();
        string getFirstName();
        string getSurName();
        string getDateOfBirth();
        double getHeight();
        string getAddress();
        int getTelephone();
        string getEmail();

        void setFirstName(string firstName);
        void setSurName(string surName);
        void setDateOfBirth(string dateOfBirth);
        void setHeight(double height);
        void setAddress(string address);
        void setTelephone(int telephone);
        void setEmail(string email);

    protected:

        string gender;
        string getGender();
        void setGender(string gender);

    private:
        string firstName, surName;
        string dateOfBirth;
        double height;
        string address;
        int telephone;
        string email;
};

#endif // PERSON_H
