/**
*   WAP to find the maximum among 3 input numbers.
**/

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;

    if(a >= b && a >= c)
    {
        if(b >= c)
        {
            cout<<"Second Maximum is: "<<b;
        }
        else
        {
            cout<<"Second Maximum is: "<<c;
        }
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
        {
            cout<<"Second Maximum is: "<<a;
        }
        else
        {
            cout<<"Second Maximum is: "<<c;
        }
    }
    else if(a >= b)
    {
        cout<<"Second Maximum is: "<<a;
    }
    else
    {
        cout<<"Second Maximum is: "<<b;
    }
    cout<<"\n\n";
    return 0;
}
