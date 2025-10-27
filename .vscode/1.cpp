#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value of a using pointer b is: "<<*b<<endl;
    return 0;
}