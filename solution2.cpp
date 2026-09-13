#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void work()
    {
        cout << "Employee Work";
    }
};

class Manager : public Employee
{
public:
    void work()
    {
        cout << "Manager Work";
    }
};

int main()
{
    Employee *e = new Manager();
    e->work();

    delete e;
}