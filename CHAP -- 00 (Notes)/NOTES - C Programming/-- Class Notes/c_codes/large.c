#include<stdio.h>
#include<conio.h>

int main()
{
		int num1,num2;
		printf("\nEnter the num1:\t");
		scanf("%d",&num1);
		printf("\nEnter the num2:\t");
		scanf("%d",&num2);
		if(num1>num2)
		{
			printf("\n\nlarger num is:\t%d",num1);
		}
		else
		{
			printf("\n\nlarger num is:\t%d",num2);
		}
		return 0;
}
