#include <iostream>
using namespace std;

class Student{
    int mark;
    static int count;
    string name;

public:
    Student(int m, string n){
        mark = m;
        name = n;
        count++;
        cout << "Student created" << endl;
    }
    Student(const Student &other){
        mark = other.mark;
        name = "John Doe";
        count++;
        cout << "Copy created" << endl;
    }
    ~Student(){
        cout << "Destroyed" << endl;
    }

    static void countStudents(){
        cout << count << " students in the school" << endl;
    }

    friend void compareMarks(Student &s1, Student &s2);
};

void compareMarks(Student &s1, Student &s2){
    if(s1.mark > s2.mark){
        cout << s1.name << " has higher mark";
    }
    else if (s1.mark == s2.mark){
        cout << s1.name << " and " << s2.name << " has the same mark";
    }
    else{
        cout << s2.name << " has higher mark";
    }
    cout << endl;
}

int Student::count = 0;

int main(){
    Student::countStudents();
    Student s1(92, "Max");
    Student s2(93, "Bob");
    Student::countStudents();
    compareMarks(s1, s2);
    Student s3 = s2;
    compareMarks(s3, s2);
    return 0;
}