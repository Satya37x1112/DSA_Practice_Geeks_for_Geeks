#include <iostream>
using namespace std;

class hello
{
private:
    int a;

public:
    void display(void);
};
void hello::display(void)
{
    cout<<"Enter the private number a: "<<endl;
    cin>>a;
    cout << "Hello, Satya!" << endl;
}

int main()
{
    hello satya;
    satya.display();
    return 0;
}