/* To form a pyramid of numbers for a given number */
#include<stdio.h>

int main()
{
	int n,i,j,k;
	printf("\n\nEnter a number:\t");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("\t");
			for(k=1;k<=i;k++)
			{
				printf("%d",k);
				for(k=i-1;k>0;k--)
				{
					printf("%d",k);
					printf("\n\t\t\t");
				}
			}
		}
	}
	return 0;
}
