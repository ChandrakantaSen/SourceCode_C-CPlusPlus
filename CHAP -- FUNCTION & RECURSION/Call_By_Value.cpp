#include<iostream>
using namespace std;

void CBV(int x)
{
    cout<<"\n\nValue of the number (1st time): "<<x;
    x = x + 20;
    cout<<"\n\nValue of the number (2nd time): "<<x;
}

int main()
{
    int n;
    cout<<"Enter the original value (1st time): ";
    cin>>n;
    CBV(n);
    cout<<"\nThe original value (2nd time): "<<n;
    return 0;
}
