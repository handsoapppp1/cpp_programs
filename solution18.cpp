#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) : marks(m) {}
    friend void compare(Student, Student);
};
void compare(Student a, Student b) {
    if (a.marks > b.marks)
        cout << a.marks;
    else
        cout << b.marks;
}
int main() {
    Student s1(72), s2(91);
    compare(s1, s2);
}

//91