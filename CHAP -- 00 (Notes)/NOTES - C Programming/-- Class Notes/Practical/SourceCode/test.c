#include<stdio.h>
#include<conio.h>

int main()
{
	int i,num;
	int sum=0;
	printf("\nEnter the number:\t");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		printf("\nValue of i:\t%d\t\t",i);
		printf("Value of Sum:\t%d",sum);
		sum=sum+num;
	}
	printf("\n\n************************************************************\n\n");
	printf("\n\nTotal Num is:\t%d\tRequired sum is:\t%d",num,sum);
	return 0;
}

