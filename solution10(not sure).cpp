#include <iostream>
using namespace std;

class Employee
{
public:
    virtual ~Employee()
    {
        cout << "Employee Destructor\n";
    }
};

class Manager : public Employee
{
public:
    ~Manager()
    {
        cout << "Manager Destructor\n";
    }
};

int main()
{
    Employee *e = new Manager();

    delete e;
}