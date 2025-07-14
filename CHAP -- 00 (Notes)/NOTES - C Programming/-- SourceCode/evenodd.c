#include<stdio.h>
#include<conio.h>
int main()
{
		int num;
		printf("\nEnter the number:\t");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("\n%d is even no.",num);
		}
		else
		{
			printf("\n%d is odd no.",num);
		}
		return 0;
}
