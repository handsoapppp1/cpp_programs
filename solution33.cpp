#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;
public:
    Employee(int i) : id(i) {
        count++;
    }
    static void show(Employee e) {
        cout << e.id << " " << count;
    }
};
int Employee::count = 0;

int main(){
    Employee x(101);
    Employee y(102);

    Employee::show(x);
}