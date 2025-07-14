#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,temp,c;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	for(i=0;i<=9;i++)
	{
		c = 0;
		temp = n;
		while(temp != 0)
		{
			d = temp % 10;
			if(d == i)
			{
				c++;
			}
			temp = temp / 10;
		}
		
		if(c != 0)
		{
			printf("\nFrequency of %d is: %d",i,c);
		}
	}
}