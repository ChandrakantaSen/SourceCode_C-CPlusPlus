/* Programe to generate fibonacci series using iteration */

#include<stdio.h>
#include<conio.h>

int Fibo(unsigned int n); // function protype

int main()
{
	unsigned int n;
	printf("Program to generate Fibonacci Numbers\n");
	printf("\nEnter the total number:\t");
	scanf("%d",&n);

	Fibo(n); // function call
	return 0;
}

int Fibo(unsigned int Totnum)
{
	unsigned int flast=1, slast=0;
	unsigned int curnum;
	printf("\n\n\t\t\t***Fibonacci Numbers***\n");
	printf ("0");
	do
	{
		curnum=flast + slast;
		printf("\t%u\t",curnum);
		slast=flast;
		flast=curnum;
		Totnum--;
	}while(Totnum>1);
	return 0;
}








