#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a) : x(a) {}
    Test(const Test &t) : x(t.x + 1) {}
    ~Test() { cout << x << " "; }
};
int main() {
    Test a(1);
    {
        Test b = a;
        Test c = b;
    }
    cout << "End ";
}

// a = 1, b = 2, c = 3
// output: 3 2 End 1