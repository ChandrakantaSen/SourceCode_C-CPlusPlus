#include<stdio.h>
#include<conio.h>

int main()
{

	int i,j,range;
	printf("\nEnter the range:\t");
	scanf("%d",&range);
	for(i=1;i<=range;i++)
		{
		for(j=1;j<=i;j++)
			{
			printf("*");
			}
			printf("\n");
		}
		return 0;
}
