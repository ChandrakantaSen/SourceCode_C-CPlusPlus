#include<stdio.h>
#include<conio.h>

void main()
{
	int p = 100;
	int *q;			//declaration of pointer variable

	q = &p;        //connection between a normal variable and a pointer variable

	printf("Value of p: %d",p);
	printf("\nAddress of p: %d",&p);

	printf("\nValue of q: %d",q);
	printf("\nAddress of q: %d",&q);
	printf("\nValue of p: %d",*q);
}