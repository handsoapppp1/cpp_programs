#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
    int radius;
public:
    Circle(int r){
        radius = r;
    }

    void area(){
        cout << 3.14159 * radius * radius;
    }
};

int main(){
    Circle c(2);
    c.area();
}