#include<stdio.h>
#include<conio.h>

void main()
{
	double a,b,c,d,e,f;
	clrscr();
	printf("\nEnter 2 numbers :");
	scanf("%lf%lf",&a,&b);
	c=a+b;
	d=b-a;
	e=a*b;
	f=a/b;
	printf("\nThe addition of %.lf & %.lf is =%.2lf",a,b,c);
	printf("\nThe subtraction of %.lf & %.lf is =%.2lf",a,b,d);
	printf("\nThe multiplication of %.lf & %.lf is =%.2lf",a,b,e);
	printf("\nThe division of %.lf & %.lf is =%.4lf",a,b,f);
	getch();
	}
