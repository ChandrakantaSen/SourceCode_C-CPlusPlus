#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,s,a;
	cout<<"\nEnter a number to check automorphic or not:";
	cin>>num;
	int b=num;
	s=0;
	while(b>9)
	{
	   int m=b%10;
	   s=s*10+m;
	   b=b/10;
	}
	a=0;
	while(s>0)
	{
	   int p=s%10;
	   a=a*10+p;
	   s=s/10;
	}
	   if((a*a)==num)
	   {
	     cout<<"\nAutomorphic:";
	   }
	   else
	   {
		cout<<"\nNot automorphic:";
	   }
getch();
}






































































































































































































































































































