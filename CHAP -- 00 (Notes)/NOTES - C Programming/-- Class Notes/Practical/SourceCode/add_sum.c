#include<stdio.h>
#include<conio.h>

int main()
{
	int num1;
	int num2;
	float add_nos;

	printf ( "\n\nEnter the 1st num:\t" );
	scanf ( "%d", &num1 );

	printf ( "\n\nEnter the 1st num:\t" );
	scanf ( "%d", &num2 );

	add_nos = ( num1 + num2 );

	printf ( "\n\nSum of two nos. are:\t%f", add_nos );

	return 0;
}
