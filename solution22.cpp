#include <iostream>
using namespace std;

class Distance {
    int meter;
public:
    Distance(int m) : meter(m) {}
    Distance add(Distance d) {
        return meter + d.meter;
    }
    void show(){
        cout << meter;
    }
};
int main() {
    Distance d1(5), d2(7);
    Distance d3 = d1.add(d2);
    d3.show();
}