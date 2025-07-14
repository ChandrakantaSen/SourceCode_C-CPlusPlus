#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	printf("\nInput two integers:\t");
	scanf("%d\t%d",&i,&j);
	printf("\nBefore Swaping:\t\t%d\t%d\n",i,j);
	swap (&i,&j);
	printf("\nAfter Swaping:\t\t%d\t%d\n",i,j);
	return 0;
}

int swap (int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}

