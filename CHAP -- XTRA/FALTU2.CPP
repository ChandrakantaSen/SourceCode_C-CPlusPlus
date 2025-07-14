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
	void selectionLinear()
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
		int x,no,pos;
		cout<<"\nEnter number to search:";
		cin>>no;
		for(x=0;x<10;x++)
		{
			if(a[x]==no)
			{
			pos=x;
			cout<<"\nAfter Linear Search.....position of the number="<<pos;
			}
		}

	}
	void bubbleLinear()
	{
		int i,j,temp;
		for(i=0;i<10;i++)
		{
			for(j=0;j<9;j++)
			{
			if(a[j]>a[j+1])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			}
		}
		cout<<"\nAfter bubble sort:\n";
		for(i=0;i<10;i++)
		{
		cout<<a[i]<<"\t";
		}
		int x,no,pos;
		cout<<"\nEnter another number to search:";
		cin>>no;
		for(x=0;x<10;x++)
		{
		if(a[x]==no)
		{
			pos=x;
			cout<<"\nAfter Linear Search.....position of the number="<<pos;
		}
		}

	}
	void selectionBinary(int val)
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
		int st=0;
		int en=9;
		int mid;
		while(st!=en)
		{
			mid=(st+en)/2;
			if(val==a[mid])
			{
				cout<<mid;
				break;
			}
			else
			{
				if(val<a[mid])
				{
				en=mid-1;
				}
				else
				{
				st=mid+1;
				}
			}
		 }
		if(st==en)
		cout<<"-999";
		cout<<"\nPosition of the number after binary search:";
	}
	void bubbleBinary(int val)
	{
		int i,j,temp;
		for(i=0;i<10;i++)
		{
			for(j=0;j<9;j++)
			{
			if(a[j]>a[j+1])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			}
		}
		cout<<"\nAfter bubble sort:\n";
		for(i=0;i<9;i++)
		{
		cout<<a[i]<<"\t";
		}
		int st=0;
		int en=9;
		int mid;
		while(st!=en)
		{
			mid=(st+en)/2;
			if(val==a[mid])
			{
				cout<<mid;
				break;
			}
			else
			{
				if(val<a[mid])
				{
				en=mid-1;
				}
				else
				{
				st=mid+1;
				}
			}
		 }
		if(st==en)
		cout<<" -999";
		cout<<"\nPosition of the number after binary search:";
	}
};
void main()
{
	clrscr();
	Faltu f;
	int p,q;
	f.enter();
	f.selectionLinear();
	f.bubbleLinear();
	cout<<"\nAgain enter another number to search:";
	cin>>p;
	f.selectionBinary(p);
	cout<<"\nLast time :-) enter another number to search:";
	cin>>q;
	f.bubbleBinary(q);
	getch();
}

















