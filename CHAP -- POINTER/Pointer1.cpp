#include<iostream.h>
#include<conio.h>

void main()
{
	int n,*p, **q;
	cout<<"Enter the value: ";
	cin>>n;

	p = &n;
	q = &p;

	cout<<"Value of n: "<<n;
	cout<<"\nAddress of n: "<<&n;
	cout<<"\nValue of p: "<<p;
	cout<<"\nAddress of p: "<<&p;
	cout<<"\nContent of p: "<<*p;
	cout<<"\nValue of q: "<<q;
	cout<<"\nAddress of q: "<<&q;
	cout<<"\nContent of q: "<<*q;
	cout<<"\nContent of q: "<<**q;
}
