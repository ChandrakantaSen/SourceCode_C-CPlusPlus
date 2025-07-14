#include<iostream.h>
#include<conio.h>
void fib();
int sum=0;
int a=0,b=1;
void main()
{
   clrscr();
   fib();
   getch();
}
void fib()
{
  int n;
  cout<<"\nEnter limit:";
  cin>>n;
  int i=2;
  cout<<a<<"\t"<<b<<"\t";
  while(i<n)
  {
    sum=a+b;
    cout<<sum<<"\t";
    a=b;
    b=sum;
    i++;
//    fib();
  }
}
