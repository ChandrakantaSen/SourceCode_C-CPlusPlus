#include<iostream.h>
#include<conio.h>
class add
{
	public:
	int a,b,c;
	void input();
	void display();
	void ad();
	void show();
};
void add::input()   /* SCOPE RESOLUTION */
{
	cout<<"Enter the first number : - "<<endl;
	cin>>a;
	cout<<"Enter the second number : - "<<endl;
	cin>>b;
}
void add::display()
{
	cout<<"The entered two numbers are "<<a<<" and "<<b<<endl;
}
void add::ad()
{
	c=a+b;
}
void add::show()
{
	cout<<"The addition values of "<<a<<" and "<<b<<" is : - "<<c<<endl;
}
void main()
{
	add ob;
	ob.input();
	ob.display();
	ob.ad();
	ob.show();
	getch();
}