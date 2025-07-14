#include<iostream.h>
#include<conio.h>
class add
{
private:
int a,b,c;
void input();
void display();
void ad();
public:
void show();
};
void add::input()
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
input();
display();
ad();
cout<<"The addition values of "<<a<<" and "<<b<<" is : - "<<c<<endl;
}
void main()
{
add ob;
ob.show();
getch();
}