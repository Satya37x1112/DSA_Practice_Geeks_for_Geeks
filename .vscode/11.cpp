#include <iostream>
#include <string>
using namespace std;
class Employee{
    int id;
    static int count;
    string name;
    int lucky;
public:
    void setData(void);
    void getData(void);
    static void getCount(void);
    void luckdraw(void);
};
void Employee::luckdraw(void){
    cout<<"Enter a number for lucky draw"<<endl;
    cin>>lucky;
    if(lucky==7){
        cout<<"You have won the lucky draw"<<endl;  
    }
    else{
        cout<<"Better luck next time"<<endl;
    }
}
int Employee::count=0;
void Employee::setData(void){
    cout<<"Enter the id"<<endl;
    cin>>id;
    cout<<"Enter the name"<<endl;
    cin>>name;
    count++;
}
void Employee::getData(void){
    cout<<"The id "<<id<<" and name "<<name<<" of this employee is and this is employee number "<<count<<endl;
    luckdraw();
}
void Employee::getCount(void){
    cout<<"The value of count is "<<count<<endl;
}
int main() {
    Employee satya;
    int n;
    cout<<"Enter the number of time you want to execute"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        satya.setData();
        satya.getData();
    }
    return 0;
}