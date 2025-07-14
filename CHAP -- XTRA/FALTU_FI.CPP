#include<iostream.h>
#include<conio.h>
class fib
{
     int n;
     public:
     int fibonacci(int n)
     {
       if(n>0)
       {
       int a=0;
       int b=1;
       int c,i;
       cout<<a<<"\t"<<b<<"\t";
       for(i=2;i<n;i++)
       {
	 c=a+b;
	 cout<<c<<"\t";
	 a=b;
	 b=c;
	}
	return c;
	}
     }
};
void main()
{
	clrscr();
	fib f;
	int a;
	cout<<"\nEnter limit:";
	cin>>a;
	f.fibonacci(a);
	getch();
}