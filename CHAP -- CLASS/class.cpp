#include<iostream.h>
#include<conio.h>
class student
{
public:
int sroll,tel,tot,avg,s[5];
char n[100],a[100];
};
void main()
{
int a,b,c;
cout<<"Enter the first number : - "<<endl;
cin>>a;
cout<<"Enter the second number : - "<<endl;
cin>>b;
c=a+b;
cout<<"The first number is : - "<<a<<endl;
cout<<"The address is : - "<<&a<<endl;
cout<<"The second number is : - "<<b<<endl;
cout<<"The address is : - "<<&b<<endl;
cout<<"The third number is : - "<<c<<endl;
cout<<"The address is : - "<<&c<<endl;
getch();
}