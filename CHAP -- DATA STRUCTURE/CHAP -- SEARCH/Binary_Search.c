#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[5],i,m,n;
	int lb,ub,mid,flag=0;
	
	printf("Enter the size: ");
	scanf("%d",&n);
	
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	
	printf("Enter the searched element: ");
	scanf("%d",&m);
	
	lb = 0; ub = (n - 1);
	
	while(lb <= ub)
	{
		mid = (lb + ub)/2;
		
		if(m < mid)
		{
			ub = mid - 1;	
		}
		else if(m > mid)
		{
			lb = mid + 1;	
		}
		else
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("Element is found...");	
	}
	else
	{
		printf("Element is not found...")
	}
}