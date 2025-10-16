#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Hello " << name << " your age is: " << age << endl;
    return 0;
}
