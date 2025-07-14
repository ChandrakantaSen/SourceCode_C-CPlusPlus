/* WAP to search an element in Array by using Linear Search */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5],n,i,flag=0,temp;
	cout<<"Enter the array elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter the searched elements: ";
	cin>>n;

	for(i=0;i<5;i++)
	{
		temp=arr[i];

		if(temp == n)
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
	{
		cout<<"\nSearch Successfull...";
	}
	else
	{
		cout<<"\nSearch Unsuccessfull...";
	}

}

