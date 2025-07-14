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
	void faltuSortAbar()
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
	}
	int faltuBinarysearch(int val)
	{
	int st=0;
	int en=9;
	int mid;
	while(st!=en)
	{
	  mid=(st+en)/2;
	  if(val==a[mid])
	  {
	   return mid;
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
	    return -999;
	}
	void faltuLinearsearch()
	{
	    int i,no,pos;
	    cout<<"\nAgain enter another number to search:";
	    cin>>no;
	    for(i=0;i<10;i++)
	    {
	     if(a[i]==no)
	     {
	     pos=i;
	     cout<<"\nAfter Linear Search.....position of the number="<<pos;
	     }
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
	f.faltuSortAbar();
	cout<<"\nEnter no to search:";
	cin>>num;
	cout<<"\nAfter binary search.....Position of number="<<f.faltuBinarysearch(num);
	f.faltuLinearsearch();
	getch();
}



