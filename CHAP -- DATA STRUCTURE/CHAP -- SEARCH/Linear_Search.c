#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a[10],k=0,i,loc;

	printf("\n\nEnter the array:");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\nEnter the terms:\t");
	scanf("%d",&n);

	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			k=1;
			loc=(i+1);
			break;
		}
	}

	if(k==1)
	{
		printf("\n\n%d is found at %dth position",n,loc);
	}
	else
	{
		printf("\n\n%d is not found",n);
	}
}
