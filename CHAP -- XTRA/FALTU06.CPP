#include<iostream.h>
#include<conio.h>
class Collection
{
	int a[100],len;
	public:
	Collection()
	{
	  int i;

	  for(i=0;i<len;i++)
	  {
	    a[i]=0;
	  }
	  len=0;
	}
	Collection(int l)
	{
	  len=l;
	}
	void inpArr()
	{
	  int i;
	  for(i=0;i<5;i++)
	  {
	    cout<<"\nEnter elements:";
	    cin>>a[i];
	  }
	}
	Collection common(Collection  c)
	{
	  Collection c2;
	  int i,j,k=0;
	  for(i=0;i<5;i++)
	  {
		for(j=0;j<5;j++)

		  if(a[i]==a[j])
		    k=k+1;

		//  c2.a[k++]=a[i];


			    }
	 // c2.len=k;
	 // return k;
	 cout<<k;
	}
	void arrange()
	{
	  int i,j,temp;
	  for(i=0;i<5;i++)
	  {
	     for(j=0;j<5;j++)
	     {
	      if(a[i]<a[j])
	      {
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	      }
	     }
	  }
	}
	void display()
	{

	  int i;
	  arrange();
	  cout<<"\nThe array:\n";
	  for(i=0;i<5;i++)
	  {
	       cout<<a[i]<<"\t";
	  }
	}
};
void main()
{
     clrscr();
     int len;
     cout<<"\nEnter length:";
     cin>>len;
     Collection c;
     Collection c2;
     c.inpArr();
     c.common(c);
     c.display();
     getch();
}
