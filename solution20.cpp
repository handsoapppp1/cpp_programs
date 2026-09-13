#include <iostream>
using namespace std;

class Student{
    int mark;

public:
    Student(int m){
        mark = m;
    }
    friend int compareMark(Student, Student);
};

int compareMark(Student s1, Student s2){
    if(s1.mark > s2.mark){
        return s1.mark;
    }
    else{
        return s2.mark;
    }
}

int main(){
    Student s1(90), s2(39);
    cout << compareMark(s1, s2) << endl;
    return 0;
}
