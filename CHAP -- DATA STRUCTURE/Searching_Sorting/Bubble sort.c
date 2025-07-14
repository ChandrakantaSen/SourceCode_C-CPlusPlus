#include<stdio.h>
#include<conio.h>

void Create_List();
void Bubble_Sort();
void Display_List();

int a[50];
int i=0,j,k,temp,n;

void Create_List()
{
	printf("\n Enter the array limit:\n");
	scanf("%d",&n);
	printf("\n Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void Bubble_Sort()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void Display_List()
{
	printf("\n The sorted Array list is:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}

void main()
{
	Create_List();
	Bubble_Sort();
	Display_List();
	getch();
}
