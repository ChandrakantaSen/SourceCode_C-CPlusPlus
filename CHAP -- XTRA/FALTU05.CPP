#include<iostream.h>
#include<conio.h>
class Fib
{
    int l;
    public:
    int fibo(int c)
    {
     while(l>0)
     {
       int a=0,b=1;
       c=a+b;
	 cout<<c<<"\t";
	 a=b;
	 b=c;
       return(c*fibo(c-1));
       }
    }
};
void main()
{
	clrscr();
	int l;
	cout<<"\nEnter limit:";
	cin>>l;
	Fib f;
	f.fibo(l);
	getch();
}


























































































































































































