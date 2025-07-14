#include<iostream>
#include<conio.h>

using namespace std;

class Example
{
		int a, b;
	public:

	Example(int x, int y)
	{
		a = x;
		b = y;
    }

    Example(const Example& obj)
	{
		a = obj.a;
		b = obj.b;
    }

	void Display()
	{
		cout << "\nValues :" << a << "\t" << b;
	}
};

int main()
{
   //Normal Constructor Invoked
   Example Object(10, 20);

   //Copy Constructor Invoked - Method 1
   Example Object2(Object);

   //Copy Constructor Invoked - Method 2
   Example Object3 = Object;

   Object.Display();
   Object2.Display();
   Object3.Display();

   return 0;
}
