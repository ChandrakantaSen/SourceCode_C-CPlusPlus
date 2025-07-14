/* WAP to check the prime numbers of an array elements */
#include<iostream.h>
#include<conio.h>

void main()
{
	int arr[5],i,j,temp,c;
	cout<<"Enter the array elements: ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}

	cout<<"\nPrime Elements are:\n";
	for(i=0;i<5;i++)
	{
		temp = arr[i];
		c=0;
		for(j=1;j<=temp;j++)
		{
			if(temp%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<" "<<temp;
		}
	}

}
