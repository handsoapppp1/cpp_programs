// 8. Build a menu program where input errors 
// use exceptions but normal validation uses loops.

#include <iostream>
using namespace std;

class User{
private:
    string name;
    int age;
    int passcode;
public:
    User(string n, int a, int p){
        name = n;
        age = a;
        passcode = p;
    }
};

class InvalidPassword : public exception{
public:
    const char* what() const noexcept override {
        return "Password is too simple\n";
    }
};


int main(){
    string name = "f;ewiapfjidasopgdafdsa";
    int age = 0;
    int passcode = 321;
    
    try{
        if(name.length() > 40){
            throw length_error("Username exceeds maximum characters");
        }
        if(age < 0){
            throw invalid_argument("Age is negative, needs to be = or greater to 0");
        }
        if(passcode == 123){
            throw InvalidPassword();
        }
        User(name, age, passcode);
        cout << "User created!";
    }
    catch(const length_error& e){
        cout << e.what();
    }
    catch(const invalid_argument& e){
        cout << e.what();
    }
    catch(const InvalidPassword& e){
        cout << e.what();
    }
}