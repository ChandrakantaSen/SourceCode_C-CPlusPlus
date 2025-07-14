#include<stdio.h>
#include<conio.h>

void sum(int x, int y)
{
	int r = (x + y);
	printf("\nValue is: %d",r);
}

void main()
{
	void (*p)(int a, int b);
	p = sum;
	
	p(10,20);
}