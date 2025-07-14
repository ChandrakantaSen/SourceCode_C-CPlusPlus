#include<iostream.h>
#include<conio.h>
class Faltu
{
	int num;
	public:
	void enter()
	{
	  cout<<"\nEnter the number:";
	  cin>>num;
	}
	void automorphic()
	{
	   int x=(num*num);
	   int rem;
	   rem=x%10;
	   if(num==rem)
	   cout<<"\nAutomorphic";
	   else
	   cout<<"\nNot automorphic";
	}
};
void main()
{
	clrscr();
	Faltu f;
	f.enter();
	f.automorphic();
	getch();
}