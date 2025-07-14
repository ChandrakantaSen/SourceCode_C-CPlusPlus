#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class string
{
	public:
	int a,c;
	inline void input()
	{
		void input()
		cout<<"Enter the string : - "<<endl;
		cin>>a;
		void display()
		{
			cout<<"The entered string is  "<<a<<endl;
		}
		void copy()
		{
			puts("ENter The first string");
			gets(str1);
			puts("ENter The second string");
			gets(str2);
			strcpy(str1,str2);
		}
	};
	void main()
	{ string ob;
		ob.input();
		ob.display();
		ob.copy();
		getch();
	}	