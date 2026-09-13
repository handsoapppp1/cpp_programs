#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) : x(a) {}
    Number add(Number n) {
        return Number(x + n.x);
    }
    void show() { cout << x; }
};
int main() {
    Number a(5), b(8);
    Number c = a.add(b);
    c.show();
}

//13