#include <iostream>
using namespace std;
int sum(int*,int*);
int main() {
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout<<"Sum is: "<<sum(a,b)<<endl;
    return 0;
}
int sum(int &x,int &y){
    return x+y;
}