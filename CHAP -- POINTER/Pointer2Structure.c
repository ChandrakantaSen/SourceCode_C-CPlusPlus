#include<stdio.h>
#include<conio.h>

struct student
{
	int id;
	char name[20];
	float percentage;
};

void main()
{
	struct student *ptr;

	struct student record = {1,"Raju",90.5};
	ptr = &record;
	
	printf("\nId is: %d",ptr ->id);
	printf("\nName is: %s",ptr->name);
	printf("\nPercentage is: %f",ptr->percentage);
}