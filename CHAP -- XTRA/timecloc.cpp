#include<iostream.h>
class CLOCK
{
public:
int h1,m1;
int readtime(int h,int m);
void showtime();
void addtime(CLOCK T1,CLOCK T2); /*PARAMETERIZED OBJECT*/
};
int CLOCK :: readtime(int h,int m)
{
h1=h;
m1=m;
return h1,m1;
}
void CLOCK :: showtime()
{
cout<<"The hours is : - "<<h1<<endl;
cout<<"The minutes is : - "<<m1<<endl;
}
void CLOCK::addtime(CLOCK T1,CLOCK T2)
{
int p,x,c;
x=T1.m1+T2.m1;
if(x>=60)
{
c=x/60;
x=x%60;
p=T1.h1+T2.h1+c;
}
else
{
p=T1.h1+T2.h1;
}
cout<<p<<" hrs. "<<x<<" mins ";
}
void main()
{
int h2,m2;
CLOCK FT,ST,ob;
cout<<"Enter the hour : - "<<endl;
cin>>h2;
cout<<"Enter the minutes : - "<<endl;
cin>>m2;
FT.readtime(h2,m2);
FT.showtime();
cout<<"Enter the hour : - "<<endl;
cin>>h2;
cout<<"Enter the minutes : - "<<endl;
cin>>m2;
ST.readtime(h2,m2);
ST.showtime();
ob.addtime(FT,ST);
}
