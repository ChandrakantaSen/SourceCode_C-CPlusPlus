#include<iostream.h>
#include<conio.h>

void small(int *x,int *y)
{
	if(*x<*y)  /* POINTER */
	{
		*x=0;
	}
	else
	{
		*y=0;
	}
}

void main()
{
	int a,b;
	cout<<"Enter the first number : - "<<endl;
	cin>>a;
	cout<<"Enter the second number : - "<<endl;
	cin>>b;

	small(&a,&b);

   cout<<"\nValues after checking:"<<endl;
	cout<<a<<" "<<b;

	getch();
}

