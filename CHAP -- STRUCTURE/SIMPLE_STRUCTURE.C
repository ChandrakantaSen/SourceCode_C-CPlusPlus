#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int roll;
		int marks;
		char name[10];
	}k;

	printf("enter a roll-:");
	scanf("%d",&k.roll);
	
	printf("enter a marks-:");
	scanf("%d",&k.marks);
	
	printf("enter a name-:");
	scanf("%s",k.name);
	
	printf("\nroll=%d\nmarks=%d\nname=%s",k.roll,k.marks,k.name);

}

