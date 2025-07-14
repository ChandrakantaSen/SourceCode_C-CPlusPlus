#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,temp,d;
    int sum = 0,c=0;

    cout<<"Enter number: ";
    cin>>n;

    temp=n;

    while(temp != 0)
    {
        temp = temp / 10;
        c++;
    }

    temp=n;

    while(temp != 0)
    {
        d = temp % 10;
        float p = pow(d,c);
        sum = sum + (int)p;
        temp = temp / 10;
        c--;
    }

    if(sum == n)
    {
        cout<<"\nDisarium Number";
    }
    else
    {
        cout<<"\nNot Disarium Number";
    }
    return 0;
}
