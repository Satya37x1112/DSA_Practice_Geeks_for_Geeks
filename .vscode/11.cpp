#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
public:
    void setData(void);
    void getData(void);
    static void getCount(void);
};
int Employee::count=0;
void Employee::setData(void){
    cout<<"Enter the id"<<endl;
    cin>>id;
    count++;
}
void Employee::getData(void){
    cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
}
void Employee::getCount(void){
    cout<<"The value of count is "<<count<<endl;
}
int main() {
    Employee satya;
    int n;
    cout<<"Enter the number of time you want to execute"<<endl;
    for(int i=0;i<n;i++){
        satya.setData();
        satya.getData();
    }
    return 0;
}