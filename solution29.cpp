#include <iostream>
using namespace std;


class Student {
    int marks;
public:
    Student(int m) : marks(m) {}
    void show() const { cout << marks; }
    friend void update(Student &s);
};
void update(Student &s) {
    s.marks = 100;
}

int main(){
    Student s(50);
    s.show();
    update(s);
    s.show();
    return 0;
}