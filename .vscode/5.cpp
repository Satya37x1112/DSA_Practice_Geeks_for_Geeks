#include <iostream>
using namespace std;

int main() {
    typedef struct employee {
        int empid;
        string name;
        float salary;
    }emp;
    union data {
        int i;
        float f;
        char c;
    }d;
    emp satya;
    satya.empid = 101;
    satya.name = "Satya";
    satya.salary = 50000.50;
    cout << "Employee ID: " << satya.empid << endl;
    cout << "Employee Name: " << satya.name << endl;
    cout << "Employee Salary: " << satya.salary << endl;
    d.i = 10;
    d.f = 220.5;
    d.c = 'A';
    cout << "Data as character: " << d.c << endl;
    cout << "Data as float: " << d.f << endl;
    cout << "Data as integer: " << d.i << endl;

    return 0;
}