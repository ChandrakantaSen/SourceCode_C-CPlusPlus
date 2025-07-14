/* Traversing an array using Pointer - Pointer to Array */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5];
	int *p;
	int i;
	p = &arr[0];

	cout<<"\nEnter the array elements:\n";
   for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"\nTraversing array elements are:\n";
	for(i=0;i<5;i++)
	{
		cout<<" "<<*(p+i);
	}
}

