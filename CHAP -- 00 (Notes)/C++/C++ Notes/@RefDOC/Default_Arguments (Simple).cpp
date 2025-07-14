#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a, int b=10);

int main()
{
    int p;
    cout<<"Enter the number: ";
    cin>>p;

    sum(p);
    return 0;
}

void sum(int x,int y)
{
    int z = (x + y);
    cout<<"Sum is: "<<z;
}
