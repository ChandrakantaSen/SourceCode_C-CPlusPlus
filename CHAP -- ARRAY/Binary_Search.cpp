/* WAP to search an element in Array by using Binary Search */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5],n,i,temp,lb,ub,mid,flag=0;
	cout<<"Enter the array elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter the searched elements: ";
	cin>>n;

	lb = arr[0];
	ub = arr[4];

	while(lb<=ub)
	{
		mid = (lb + ub)/2;

		if(n<mid)
		{
			ub = mid - 1;
		}
		else if(n>mid)
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
		cout<<"Search Successfull...";
	}
	else
	{
		cout<<"Search Unsuccessfull...";
	}
}

