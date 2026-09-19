#include <iostream>
using namespace std;

class Payment{
public:
    virtual void pay() = 0;
};

class CreditCard : public Payment{
public:
    void pay(){
        cout << "Paying with credit card";
    }
};

class UPI : public Payment{
public:
    void pay(){
        cout << "Paying with UPI";
    }

};

class Cash : public Payment {
public:
    void pay(){
        cout << "Paying with cash";
    }
};

int main(){
    Cash c;
    Payment *p = &c;

    p->pay();
}