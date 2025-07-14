/* Program to find the gcd of two numbers */
#include<stdio.h>
#include<conio.h>

int gcd(int,int);

int main()
{
	int a,b,igcd;
	printf("\nEnter 1st num:\t");
	scanf("%d",&a);
	printf("\nEnter 2nd num:\t");
	scanf("%d",&b);
	igcd=gcd(a,b);
	printf("\n GCD of %d and %d is %d\n",a,b,igcd);
	return 0;
}

int gcd (p,q)
{
	int remainder;
	remainder = p-(p/q*q);
	if(remainder == 0)
	{
		return q;
	}
	else
	{
		gcd(q,remainder);
	}
	return 0;
}
