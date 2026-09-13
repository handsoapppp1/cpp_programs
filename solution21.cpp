#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) : x(a) {}
    friend Number add(Number, Number);
    void show() { cout << x; }
};
Number add(Number a, Number b) {
    return Number(a.x + b.x);
}
int main() {
    Number n1(10), n2(20);
    Number n3 = add(n1, n2);
    n3.show();
}

//30