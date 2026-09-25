// 7. Create a noexcept function 
// and demonstrate why throwing from it terminates the program.
#include <iostream>
using namespace std;

void noErrorFunction() noexcept{
    throw runtime_error("Error");
}

int main(){
    noErrorFunction();
}

// a noexcept function with a throw will always terminate
// because no errors are supposed to happen