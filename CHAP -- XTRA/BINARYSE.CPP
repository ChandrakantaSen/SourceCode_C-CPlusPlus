#include<iostream.h>
#include<conio.h>
class MyArray
{
	int a[100],nm;
	public:
	MyArray(int n)
	{
	nm=n;
	}
	void readArray()
	{
		int i;
		for(i=0;i<nm;i++)
		{
		cout<<"\nEnter numbers:";
		cin>>a[i];
		}
	}
	void displayArray()
	{
		for(int i=0;i<nm;i++)
		{
		   cout<<a[i]<<"\t";
		}
	}
	int BinarySearch(int val)
	{
	   int st=0,en=nm-1,f;
	   while(st!=en)
	   {
		f=(st+en)/2;
		if(val==a[f])
		{
		return f;
		break;
		}
		else
		{
		if(val<a[f])
		{
		en=f-1;
		}
		else
		{
		st=f+1;
		}
		}
	   }
		if(st==en)
		return -999;
	  }
};
void main()
{
	clrscr();
	int n,val;
	cout<<"\nEnter size of array:";
	cin>>n;
	MyArray m(n);
	m.readArray();
	m.displayArray();
	cout<<"\nEnter a value:";
	cin>>val;
	cout<<"\n"<<"Position="<<m.BinarySearch(val);
	getch();
}