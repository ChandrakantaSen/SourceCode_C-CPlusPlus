#include<iostream.h>
#include<conio.h>
#include<math.h>
int sum(int n)
{
int  x;
int s;
int k=1+x;

 if(n>0)
 { s=k+pow(x,n);
// n=n-1;
     return(s+(sum(n-1)));
 }
 else
 {
 return(1);
 }
 }
 void main()
 {
 int l,j;
 clrscr();
 cout<<"Type a limit:";
 cin>>l;
 cout<<"Type a number:";
 cin>>j;

 cout<<"sum="<<sum(l);
 getch();
 }
