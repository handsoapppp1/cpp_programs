#include <iostream>
using namespace std;

void B(){
    throw runtime_error("Error in B");
}

void A(){
    try{
        B();
    }
    catch(exception& e){
        cout << e.what();
    }
}

int main(){
    A();
}