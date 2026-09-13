#include <iostream>
using namespace std;

class Time{
    int hour;
public:
    Time(int h){
        hour = h;
    }

    void add(Time other){
        hour += other.hour;
        //cout <<hour;
    }

    void show(){
        cout << hour;
    }
};

int main(){
    Time t1(1), t2(3);
    t1.add(t2);
    t1.show();
    //t2.show();
    return 0;
}