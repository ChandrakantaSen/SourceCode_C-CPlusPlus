#include<iostream.h>
#include<conio.h>

class Defal
{
	public:
			int x;
			int y;
	Defal()
	{
		x=0;
		y=0;
	}
};
void main()
{
	Defal obj;
	cout << "Default constructor "<<obj.x <<" , "<< obj.y << "\n";
}