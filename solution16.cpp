#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
};

class Car : public Vehicle
{
public:
    void start(){
        cout << "Car starts";
    }
    void stop()
    {
        cout << "Car Stop";
    }
};

int main()
{
    Car c;
}