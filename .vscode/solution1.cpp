#include <iostream>
using namespace std;

void divide(int numerator, int denominator) {
    try {
        if (denominator == 0) {
            throw invalid_argument("Doesn't work");
        }
        else {
            cout << numerator / denominator;
        }
    }
    catch (const invalid_argument& e) {
        cout << e.what();
    }
}

int main() {
    divide(5, 0);
    return 0;
}