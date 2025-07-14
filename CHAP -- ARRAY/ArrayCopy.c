#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],b[5],i;
	
	
	printf("Enter the array elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		b[i] = a[i];
	}
	
	printf("Required array elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d",b[i]);
	}
	getch();
}