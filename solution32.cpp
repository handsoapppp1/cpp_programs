#include <iostream>
using namespace std;

class Product{
    int price;
public:
    Product(int p){
        price = p;
    }
    friend int comparePrice(Product[]);
};

int comparePrice(Product p[]){
    int highestPrice = 0;

    for(int i = 0; i < 4; i++){
        if(p[i].price > highestPrice){
            highestPrice = p[i].price; 
        }
    }
    
    return highestPrice;
}

int main(){
    Product p1(10), p2(20), p3(30), p4(40);
    Product products[4] = {p1, p2, p3, p4};

    cout << comparePrice(products);
}