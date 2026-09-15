#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal";
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat";
    }
};

void makeSound(Animal &a)
{
    a.sound();
}

int main()
{
    Cat c;
    makeSound(c);
}