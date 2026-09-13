#include <iostream>
using namespace std;

class BankAccount{
    int accountNum;
    int balance;
    static int count;

public:
    BankAccount(int a, int b){
        accountNum = a;
        balance = b;
        count++;
    }
    BankAccount(const BankAccount &original){
        balance = original.balance;
        accountNum = 0;
        count++;
    }
    ~BankAccount(){
        cout << accountNum << " account has been destroyed\n";
    }
    
    static void showCount(){
        cout << count << " accounts currently\n";
    }

    friend void compareBalance(BankAccount &b1, BankAccount &b2);

    BankAccount upgradeBalance(BankAccount account){
        account.balance *= 2;
        cout << "Balance upgraded";
        return account;
    }
};

int BankAccount::count = 0;

void compareBalance(BankAccount &b1, BankAccount &b2) {
    if (b1.balance > b2.balance) {
        cout << "Account " << b1.accountNum << " has a higher balance than Account " << b2.accountNum << "\n";
    } else if (b2.balance > b1.balance) {
        cout << "Account " << b2.accountNum << " has a higher balance than Account " << b1.accountNum << "\n";
    } else {
        cout << "Both accounts have equal balances.\n";
    }
}

int main(){
    BankAccount b1(1, 1000);
    BankAccount b2 = b1;
    BankAccount b3 = b2.upgradeBalance(b2);
    compareBalance(b1, b2);
    compareBalance(b1, b3);

    BankAccount people[3] = {b1, b2, b3};
}
