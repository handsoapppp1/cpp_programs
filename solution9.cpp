#include <iostream>
using namespace std;

class Animal{
public:
    virtual void sound(){
        cout << "Animal noise";
    }
};

class Dog : public Animal{
    void sound(){
        cout << "Woof";
    }
};

int main(){
    Animal a = Dog();
    a.sound();
    cout << endl;
    Animal *b = new Dog();
    b->sound();

}