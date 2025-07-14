#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,d,a[10];
	cout<<"\nEnter a number:";
	cin>>n;
	while(n>10)
	{
	 int s=1;
	 while(n>0)
	 {
	 s=s*(n%10);
	 n=n/10;
	 }
	 cout<<s;
	 n=s;
	 getch();
	}
}
