#include<stdio.h>
#include<conio.h>

int sum(int x, int y)
{
	int r = (x + y);
	return r;
}

void main()
{
	int (*p)(int a, int b);
	p = sum;
	
	int r = p(10,20);
	printf("\nValue is: %d",r);
}