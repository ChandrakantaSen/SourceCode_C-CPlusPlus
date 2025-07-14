#include<iostream.h>
#include<conio.h>
class Faltu
{
	int a[10];
	public:
	Faltu()
	{
		int i;
		for(i=0;i<10;i++)
		{
			a[i]=0;
		}
	}
	void enter()
	{
		int i;
		for(i=0;i<10;i++)
		{
		  cout<<"\nEnter the numbers:";
		  cin>>a[i];
		}
	}
	void faltuSort()
	{
		int i,j,temp;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
			if(a[i]<a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			}
		}
		cout<<"\nAfter selection sort:\n";
		for(i=0;i<10;i++)
		{
		cout<<a[i]<<"\t";
		}
	}

};
void main()
{
	clrscr();
	Faltu f;
	int num;
	f.enter();
	f.faltuSort();
	getch();
}
