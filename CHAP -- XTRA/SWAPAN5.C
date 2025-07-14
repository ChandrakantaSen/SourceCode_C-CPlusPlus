#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14

void main()
{	double a1,r,h;
	clrscr();
	printf("\nEnter radius & height :");
	scanf("%lf%lf", &r,&h);
	a1=pi*pow(r,2)+2*pi*r*h;
	printf("\nArea is whose radius & height is %.lf & %.lf =%.2lf ",r,h,a1);
	getch();
}
