#include <iostream>
using namespace std;

class Math {
public:
    static int square(int x) {
        int y = 10;
        return x * y;
    }
};


int main() {
    cout << Math::square(5);
}