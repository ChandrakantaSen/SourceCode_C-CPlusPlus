#include<iostream>
using namespace std;

class prog1
{
    int a,b,c;

    public:
    void input()
    {
        cout<<"Enter the numbers: ";
        cin>>a>>b;
    }

    void sum()
    {
        c = (a + b);
        cout<<"Sum is: "<<c;
    }
};


int main()
{
    prog1 obj1;
    obj1.sum();
    return 0;
}
