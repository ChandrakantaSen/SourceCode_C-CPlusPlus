/* To check a leap year using Ternay Operation */
#include<stdio.h>
#include<conio.h>

int main()
{
	int year, flag;
	printf("\n\nEnter the year:\t");
	scanf("%d",&year);

	flag = ((year%400==0)||((year%100)!=0&&(year%4==0))?1:0);
	if(flag==1)
	{
		printf("\n\nLeap Year!\n\n");
	}
	else
	{
		printf("\n\nNot Leap Year!\n\n");
	}
	return 0;
}
