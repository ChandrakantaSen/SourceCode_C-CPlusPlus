/* WAP to insert an element in Array */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[10],n,pos,i;

	cout<<"Enter the array elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"Enter the elements to be inserted: ";
	cin>>n;

	cout<<"Enter the position for insertion: ";
	cin>>pos;
	pos--;

	for(i=5;i>=pos;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = n;

	for(i=0;i<6;i++)
	{
		cout<<" "<<arr[i];
	}
}

