#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,30,40,50,60,70};
    int b[5]={10,20,30,40,50};
    cout<<"The elements of array a are: "<<endl;
    for(int i=0;i<7;i++){
        cout<<a[i]<<endl;
    }
    int i=0;
    cout<<"The elements of array a using while loop are: "<<endl;
    while(i<7){
        cout<<a[i]<<endl;
        i++;
    }
    int i1=0;
    cout<<"The elements of array a using do-while loop are: "<<endl;
    do{
        cout<<a[i1]<<endl;
        i1++;
    }while(i1<7);
    return 0;
}