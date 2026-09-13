#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal Sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog Barks";
    }
};

int main()
{
    Animal *a;
    Dog d;

    a = &d;
    a->sound();

    return 0;
}

// output: Dog Barks
// because sound() is virtual in base class, and a points to d, therefore using dog sound()