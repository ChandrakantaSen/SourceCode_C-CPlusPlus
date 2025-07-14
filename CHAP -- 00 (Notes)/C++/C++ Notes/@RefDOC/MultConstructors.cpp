#include<iostream>
#include<conio.h>

using namespace std;

class MultConstructors
{
public:
    int a,b,c;

    MultConstructors()
    {
        a = 0;
        b = 0;
    }

    MultConstructors(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    MultConstructors mDObj;
    cout<<"Value is: "<<mDObj.a<<"\t"<<mDObj.b;

    MultConstructors mPObj(1,2);
    cout<<"\nValue is: "<<mPObj.a<<"\t"<<mPObj.b;
    return 0;
}
