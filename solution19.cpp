#include <iostream>
using namespace std;

class Box {
    int length;
    int width;
public:
    Box(int l, int w) : length(l), width(w) {}
    friend int area(Box b);
};
int area(Box b) {
    return b.length * b.width;
}