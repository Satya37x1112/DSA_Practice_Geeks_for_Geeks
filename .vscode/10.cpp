#include <iostream>
using namespace std;

class hello 
{
    public: 
        void display(void);
};      
void hello::display(void) 
{
    cout << "Hello, Satya!" << endl;
}

int main() {
    hello satya;
    satya.display();
    return 0;
}