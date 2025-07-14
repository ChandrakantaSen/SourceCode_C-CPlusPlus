#include<iostream>
using namespace std;

int main()
{
    int a, b, c, big=0;

    cout<<"Enter three numbers: \n";
    cin>>a>>b>>c;

    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;

    cout<<"\nThe biggest number is: "<<big;
    cout<<"\n";
    return 0;
}
