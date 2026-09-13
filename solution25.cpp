#include <iostream>
using namespace std;

class Product {
    int price;
public:
    Product(int p) : price(p) {}
    int discount() {
        price = price - 10;
        return price;
    }
};

int main(){
    Product chair(30);
    cout << chair.discount();
}