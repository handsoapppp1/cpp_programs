#include <iostream>
using namespace std;

class A {
    int x;
public:
    A(int n) : x(n) { cout << "C" << x << " "; }
    A(const A &a) : x(a.x + 10) { cout << "K" << x << " "; }
    ~A() { cout << "D" << x << " "; }
};

A create(A a) {
    A temp = a;
    return temp;
}

int main() {
    A x(5);
    A y = create(x);
    cout << "End ";
}