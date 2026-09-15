#include <iostream>
using namespace std;

class Shape{
public:
    virtual void draw(){
        cout << "Shape";
    }
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Circle";
    }
};

class Rectange : public Shape{
public:
    void draw(){
        cout << "Rectange";
    }
};

class Triangle : public Shape{
public:
    void draw(){
        cout << "Triangle";
    }
};

int main(){
    Shape s;
    Rectange r;
    Triangle t;
    Shape *shapes[3] = {&s, &r, &t};

    for(int i = 0; i < 3; i++){
        shapes[i]->draw();
        cout << endl;
    }
    return 0;
}