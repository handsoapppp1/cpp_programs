#include <iostream>
using namespace std;

class InvalidAge : public exception{
public:
    const char* what() const noexcept override {
        return "Age is not valid\n";
    }
};

class InvalidSalary : public exception{
public:
    const char* what() const noexcept override {
        return "Salary not valid\n";
    }
};

int main(){
    int age = -2;
    int salary = -1;
    try{
        if (age < 0){
            throw InvalidAge();
        }
    }
    catch(const InvalidAge& e){
        cout << e.what();
    }
    try{
        if (salary < 0){
            throw InvalidSalary();
        }
    }
    catch(const InvalidSalary& e){
        cout << e.what();
    }
}