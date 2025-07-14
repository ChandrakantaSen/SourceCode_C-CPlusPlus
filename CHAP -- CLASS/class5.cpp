#include<iostream.h>
#include<conio.h>
#define pi 3.14
class circle
{
public:
float r,a,c;
void radius(float x,float y);
void area();
void cir();
};
void circle::radius(float x,float y)
{
r=(x+y)/2;
}
void circle::area()
{
a=pi*r*r;
cout<<"The area of the circle is : - "<<a<<endl;
}
void circle::cir()
{
c=2*pi*r;
cout<<"The circumference of the circle is : - "<<c<<endl;
}
void main()
{
circle ob;
float m,n;
cout<<"Enter the first coordinates : - "<<endl;
cin>>m;
cout<<"Enter the second coordinates : - "<<endl;
cin>>n;
ob.radius(m,n);
ob.area();
ob.cir();
getch();
}