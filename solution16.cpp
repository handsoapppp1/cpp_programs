#include <iostream>
using namespace std;

class Demo {
    static int x;
public:
    Demo() { x++; }
    ~Demo() { x--; }
    static void show() { cout << x << endl; }
};
int Demo::x = 0;

int main() {
    Demo::show();
    {
        Demo a, b;
        Demo::show();
    }
    Demo::show();
}

//0\n2\n0