#include<stdio.h>
#include<conio.h>

void main()
{
	int p = 100;
	int *q, **r;	//declaration of pointer variables

	q = &p;        //connection between a normal variable and a pointer variable
	r = &q;

	printf("Value of p: %d",p);
	printf("\nAddress of p: %d",&p);

	printf("\nValue of q: %d",q);
	printf("\nAddress of q: %d",&q);
	printf("\nValue of p: %d",*q);
	
	printf("\nValue of r: %d",r);
	printf("\nAddress of r: %d",&r);
	printf("\nValue of q: %d",*r);
	printf("\nValue of p: %d",**r);
}