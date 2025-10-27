#include<iostream>
using namespace std;
int main(){
    int a[]={5,10,15,20,25,30,35,40,45,50};
    int *p=a;
    for(int i=0;i<10;i++){
        cout<<"The address of a["<<i<<"] is: "<<p+i<<endl;
        cout<<"The value of a["<<i<<"] is: "<<*(p+i)<<endl;
    }
    return 0;
}