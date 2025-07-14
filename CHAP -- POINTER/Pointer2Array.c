#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i;
	int *p = arr;

	printf("Enter the elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}

  //p = &arr[0];


	printf("\nPrinting the array elements\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(p+i));
	}

}