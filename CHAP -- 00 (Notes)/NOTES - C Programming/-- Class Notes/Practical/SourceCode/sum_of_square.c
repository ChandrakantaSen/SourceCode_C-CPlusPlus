#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	static int sum,sum_of_square;

	for(i=2;i<=30;i+=2)
	{
		sum+=i;
		sum_of_square+=(i*i);
	}
	printf("\n\nSum of first 15 +ve even numbers=\t%d\n",sum);
	printf("\n\nSum of their squares=\t%d\n\n",sum_of_square);
	return 0;
}
