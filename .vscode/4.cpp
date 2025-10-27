#include <iostream>
using namespace std;

int main() {
    typedef struct employee {
        int empid;
        string name;
        float salary;
    }emp;
    emp satya;
    satya.empid = 101;
    satya.name = "Satya";
    satya.salary = 50000.50;
    cout << "Employee ID: " << satya.empid << endl;
    cout << "Employee Name: " << satya.name << endl;
    cout << "Employee Salary: " << satya.salary << endl;

    return 0;
}