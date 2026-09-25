#include <iostream>
using namespace std;

void C(){
    throw runtime_error("Error in C");
}

void B(){
    C();
}

void A(){
    try {
        B();
    }
    catch(exception& e){
        cout << e.what();
    }
}

int main(){
    A();
}