#include <iostream>
using namespace std;
void fibonacci(int n,int n1,int n2){
    if(n==0){
        return;
    }
    int c;
    c=n1+n2;
    n1=n2;
    n2=c;
    cout<<n1<<" "<<n2<<" ";
    fibonacci(n-1,n1,n2);
}
int main() {
    int n;
    cout << "Enter number of terms : " << endl;
    cin >> n;
    int n1=0,n2=1;
    fibonacci(n,n1,n2);
    return 0;
}