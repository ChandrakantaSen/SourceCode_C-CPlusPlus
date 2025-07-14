#include<iostream.h>
//class RectangleTwo;

class RectangleOne
{
	int L,B;


	public:

	RectangleOne(int l,int b)
	{
	L = l;
	B = b;
	}

	friend void Sum(RectangleOne, RectangleTwo);
};


class RectangleTwo
{
	int L,B;


	public:

	RectangleTwo(int l,int b)
	{
	L = l;
	B = b;
	}

	friend void Sum(RectangleOne, RectangleTwo);
};



void Sum(RectangleOne R1,RectangleTwo R2)
{
	cout<<"\n\t\tLength\tBreadth";
	cout<<"\n Rectangle 1  :   "<<R1.L<<"\t  "<<R1.B;
	cout<<"\n Rectangle 2  :   "<<R2.L<<"\t  "<<R2.B;
	cout<<"\n -------------------------------";
	cout<<"\n\tSum   :   "<<R1.L+R2.L<<"\t  "<<R1.B+R2.B;
	cout<<"\n -------------------------------";
}


void main()
{

	RectangleOne Rec1(5,3);
	RectangleTwo Rec2(2,6);

	Sum(Rec1,Rec2);

}
