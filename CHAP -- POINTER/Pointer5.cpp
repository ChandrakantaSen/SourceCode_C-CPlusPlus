/* Pointer to function - type I */

#include<iostream.h>
#include<conio.h>

int sum(int x, int y)
{
	int z = 0;
	z = (x + y);
	return z;
}

void main()
{
	int (*p)(int,int);
	int s;

	p = sum;
	s = p(10,20);
	cout<<"\nSum is: "<<s;
}
