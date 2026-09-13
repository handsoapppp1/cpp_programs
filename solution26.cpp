#include <iostream>
using namespace std;

class Math{
    int number;
public:
    Math(){

    }
    Math(int n){
        number = n;
    }
    int add(Math num1, Math num2){
        number = num1.number + num2.number;
        cout << number;
    }
};

int main(){
    Math n1(10), n2(20);
    Math n3;
    n3.add(n1, n2);
}