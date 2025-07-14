/* To find the reverse of a +ve integer */
#include<stdio.h>
#include<conio.h>

int main()
{
	int number,reverse=0;
	printf("\n\nEnter a number:\t");
	scanf("\t%d",&number);
	while(number!=0)
	{
		reverse = ((reverse*10) + (number%10));
		number = number/10;
	}
	printf("\n\nReverse number is:\t%d\n",reverse);
	return 0;
}
