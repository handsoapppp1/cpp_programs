#include <iostream>
using namespace std;

class Employee{
public:
    virtual void work() = 0;
};

class Developer : public Employee{
public:
    void work(){
        cout << "Developer working";
    }
};

class Tester: public Employee{
public:
    void work(){
        cout << "Tester working";
    }
};

class Manager : public Employee{
public:
    void work(){
        cout << "Developer working";
    }
};

int main(){
    Developer d;
    Tester t;
    Manager m;

    Employee *e1 = &d;
    Employee *e2 = &t;
    Employee *e3 = &m;

    Employee *employees[3] = {e1, e2, e3};

    for(int i = 0; i < 3; i++){
        employees[i]->work();
        cout << endl;
    }
}