#include<stdio.h>

int main()
{
	int i,j,num;
	printf("\nenter the number:\t");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
