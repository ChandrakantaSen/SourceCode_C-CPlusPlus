/* example of Typedef statement & structure to function */
#include <stdio.h>
#include <string.h>

typedef struct student
{
				int id;
				char name[20];
				float percentage;
}stu;

void func(stu record);  //struct object passed as a function parameter

void main()
{
				stu record;

				record.id=1;
				strcpy(record.name, "Raju");
				record.percentage = 86.5;

				func(record);   //function call
}

/* Function body */
void func(stu record)
{
				printf(" Id is: %d \n", record.id);
				printf(" Name is: %s \n", record.name);
				printf(" Percentage is: %f \n", record.percentage);
}