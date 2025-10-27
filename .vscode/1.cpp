#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value of a using pointer b is: "<<*b<<endl;
    int** c;
    c=&b;
    cout<<"The address of pointer b is: "<<c<<endl;
    cout<<"The value of a using double pointer c is: "<<**c<<endl;
    return 0;
}