/* Traversing an array using Pointer - Pointer to Array */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5] = {11,21,31,41,51};
	int *p = arr;
	int i;

	cout<<"\nTraversing array elements are:\n";
	for(i=0;i<5;i++)
	{
		cout<<" "<<*(p+i);
	}
}




