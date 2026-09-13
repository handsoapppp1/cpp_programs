#include <iostream>
using namespace std;

class Item {
    int value;
public:
    Item(int v) : value(v) {}
    Item(const Item &i) {
        value = i.value + 100;
        cout << "Copy ";
    }
    ~Item() { cout << "Destroy "; }
    void show() { cout << value << " "; }
};

Item makeItem(Item x) {
    return x;
}

int main() {
    Item a(50);
    Item b = makeItem(a);
    b.show();
}

// copy
// 150
// Destroy