/*Switch Case Statement - Menu Driven Program */

#include<iostream.h>
#include<conio.h>

void main()
{
	int ch;
	cout<<"1. Statement 1";
	cout<<"\n2. Statement 2";
	cout<<"\n3. Statement 3";

	cout<<"\n\nEnter the choice: ";
	cin>>ch;

	switch(ch)
	{
		case 1:
					cout<<"hello ggi";
					break;
		case 2:
					cout<<"welcome to department of BCA";
					break;
		case 3:
					cout<<"we are learning C++ programming";
					break;
		default:
					cout<<"Invalid input...";
	}
}
