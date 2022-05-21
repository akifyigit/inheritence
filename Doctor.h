#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include "Person.h"

class Doctor : public Person
{
    public:
        Doctor();
        virtual ~Doctor();
        void operate();
        void setSalary(int salary);
        int getSalary();

    protected:

    private:
    int Salary;
};

#endif // DOCTOR_H
