#include<iostream.h>
#include<conio.h>

class Demo
{
		int m,n;
	public:
		Demo()
		{
			m=0;
			n=0;
		}
		Demo(int a, int b)
		{
			m = a;
			n = b;
		}
		void display()
		{
			cout<<"Value is: "<<m<<" "<<n;
		}
};

void main()
{
	clrscr();
	
	Demo obj;
	obj.display();
	
	Demo obj1(10,20);
	obj1.display();
	
	getch();
}
