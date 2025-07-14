/*Switch Case Statement - Menu Driven Program */

#include<iostream.h>
#include<conio.h>

class Addition
{
	int a,b,c;
	public:
	void add()
	{
		cout<<"\nEnter the numbers: ";
		cin>>a>>b;
		c = (a + b);
		cout<<"\nSum is: "<<c;
	}
};

class Substraction
{
	int a1,b1,c1;
	public:
	void sub()
	{
		int a1,b1,c1;
		cout<<"\nEnter the numbers: ";
		cin>>a1>>b1;
		c1 = (a1 - b1);
		cout<<"\nDifference is: "<<c1;
	}
};

class Average
{
	int a2,b2,c2;
	public:
	void avg()
	{
		int a2,b2,c2;
		cout<<"\nEnter the numbers: ";
		cin>>a2>>b2;
		c2 = (a2 + b2)/2;
		cout<<"\nAverage is: "<<c2;
	}
};

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
					Addition Aobj;
					Aobj.add();
					break;
		case 2:
					Substraction Sobj;
					Sobj.sub();
					break;
		case 3:
					Average Avobj;
					Avobj.avg();
					break;
		default:
					cout<<"Invalid input...";
	}
}
