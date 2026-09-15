#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

int main()
{
    //Shape s;
    return 0;
}

// Becase shape is an abstract class, cannot create objects from an abstract