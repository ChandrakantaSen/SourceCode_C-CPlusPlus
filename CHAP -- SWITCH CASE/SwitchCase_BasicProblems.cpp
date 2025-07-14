/*Switch Case Statement - Menu Driven Program */

#include<iostream.h>
#include<conio.h>

void main()
{
	int ch;
	cout<<"1. Addition of two numbers";
	cout<<"\n2. Difference between two numbers";
	cout<<"\n3. Average of two numbers";

	cout<<"\n\nEnter the choice: ";
	cin>>ch;

	switch(ch)
	{
		case 1:
					int a,b,c;
					cout<<"\nEnter the numbers: ";
					cin>>a>>b;
					c = (a + b);
					cout<<"\nSum is: "<<c;
					break;
		case 2:
					int a1,b1,c1;
					cout<<"\nEnter the numbers: ";
					cin>>a1>>b1;
					c1 = (a1 - b1);
					cout<<"\nDifference is: "<<c1;
					break;
		case 3:
					int a2,b2,c2;
					cout<<"\nEnter the numbers: ";
					cin>>a2>>b2;

					c2 = (a2 + b2)/2;
					cout<<"\nAverage is: "<<c2;
					break;
		default:
					cout<<"Invalid input...";
	}
}
