#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14

void main()
{	double a1,a2,a3,p1,p2,p3,a,l,b,r;
	clrscr();
	printf("\nEnter the side of the square=");
	scanf("%lf",&a);
	a1=pow(a,2);
	p1=4*a;
	printf("\nThe area of square whose side is %.lf is=%.2lf",a,a1);
	printf("\nThe perimeter of square whose side is %.lf is=%.2lf",a,p1);
	printf("\nEnter the length & bredth of a rectangle=");
	scanf("%lf%lf",&l,&b);
	a2=l*b;
	p2=2*(l+b);
	printf("\nThe area of rectangle whose length & breadth is %.lf & %.lf is=%.2lf",l,b,a2);
	printf("\nThe perimeter of rectancle whose length & breadth is %.lf & %.lf is=%.2lf",l,b,p2);
	printf("\nEnter the radius of a circle :");
	scanf("%lf",&r);
	a3=pi*pow(r,2);
	p3=2*pi*r;
	printf("\nThe area of a circle having radius %.lf is=%.2lf",r,a3);
	printf("\nThe perimeter of a circle having radius %.lf is=%.2lf",r,p3);
	getch();
}

