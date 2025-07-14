#include<iostream.h>
#include<conio.h>


class Rectangle
{
		int width, height;
  public:
	 Rectangle (int,int);
	 
	 int area ()
	 {
		return (width*height);
	 }
};

Rectangle::Rectangle (int a, int b)
{
  width = a;
  height = b;
}

void main()
{
  Rectangle rect (3,4);
  Rectangle rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
}