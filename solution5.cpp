#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Shape";
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Circle";
    }
};

int main()
{
    Shape s;
    Circle c;

    Shape *ptr = &s;
    ptr = &c;

    ptr->draw();

    return 0;
}

// output: Circle
// ptr is a shape, but points to c which is cirlce, so prints "circle"