// 5. Demonstrate slicing with Base/Derived exceptions and fix it.

#include <iostream>
using namespace std;

int main(){
    try{
        throw runtime_error("hi there");
    }
    catch(const exception e){
        cout << e.what();
    }
}

// doesn't work