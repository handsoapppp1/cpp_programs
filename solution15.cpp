#include <iostream>
using namespace std;

class Database{
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
};

class MySQL : public Database{
public:
    void connect(){
        cout << "Connected on SQL";
    }
    void disconnect(){
        cout << "Disconnected";
    }
};

class MongoDB: public Database{
public:
    void connect(){
        cout << "Connected on DB!";
    }
    void disconnect(){
        cout << "Disconnected";
    }
};

int main(){
    MySQL s;
    Database* d = &s;
    d->connect();
    cout << endl;
    d->disconnect();
}