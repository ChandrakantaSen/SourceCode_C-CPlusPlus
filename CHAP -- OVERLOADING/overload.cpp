#include<iostream.h>
#include<conio.h>

class Overclass
{
	public:
				int x;
				int y;
		Overclass()
		{
			x = 0;
			y = 0;
		}
		Overclass(int a)
		{
			x = a;
			y = a;
		}
		Overclass(int a, int b)
		{
			x = a;
			y = b;
		}
};

void main()
{
	Overclass obj;
	Overclass obj1(4);
	Overclass obj2(8, 12);

	cout << "Overclass obj's x,y value:: " <<obj.x << " , "<< obj.y << "\n";
	cout << "Overclass obj1's x,y value:: "<<obj1.x << " ,"<< obj1.y << "\n";
	cout << "Overclass obj2's x,y value:; "<<obj2.x << " , "<< obj2.y << "\n";
}