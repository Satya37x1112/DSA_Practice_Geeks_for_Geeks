#include <iostream>
using namespace std;

class yo{
    int a,b;
public:
    void sum(int n1,int n2){
        a=n1;
        b=n2;
    }
    void display(){
        cout<<"The sum is "<<a+b<<endl;
    }
    friend yo friendsum(yo f1,yo f2);

};
yo friendsum(yo f1,yo f2){
    yo f3;
    f3.sum((f1.a+f2.a),(f1.b+f2.b));
    return f3;
}
int main() {
    yo s1,s2,s3;
    s1.sum(3,4);
    s1.display();
    s2.sum(5,6);
    s2.display();
    s3=friendsum(s1,s2);
    s3.display();
    return 0;
}