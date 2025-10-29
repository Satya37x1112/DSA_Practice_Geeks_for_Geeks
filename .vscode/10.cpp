#include <iostream>
using namespace std;

class hello
{
private:
    int a;
    void check(int);

public:
    void display(void);
};
void hello::display(void)
{
    cout<<"Enter the secret number a: "<<endl;
    cin>>a;
    check(a);
}
void hello::check(int num)
{
    if (num==0)
    {
        cout << "Welcome agent" << endl;
        cout << "Hello, Satya!" << endl;
    }
    else
        cout << "Who the hell are you!!!" << endl;
        exit(0);
}

int main()
{
    hello satya;
    satya.display();
    return 0;
}