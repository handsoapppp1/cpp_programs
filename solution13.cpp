#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary() = 0;
};

class Manager : public Employee
{
public:
    void calculateSalary()
    {
        cout << "Manager Salary";
    }
};

class Developer : public Manager
{
public:
    void code()
    {
        cout << "Coding";
    }
};

int main()
{
    Developer d;
    Employee *e = &d;

    e->calculateSalary();
}

// works because employee overrides calculateSalary(), even though devloper
// doesn't have calculateSalary() it also inherits the overridden version 
