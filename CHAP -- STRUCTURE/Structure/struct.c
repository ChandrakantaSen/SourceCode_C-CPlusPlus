/* Basic Structure Program */

#include<stdio.h>
#include<conio.h>

void main()
{
	struct employee
	{
		char name;
		int age;
		float salary;
	}emp1,emp2,emp3;
	
	//struct employee emp1,emp2,emp3;

	printf("\nEnter the name, age, salary of 3 employees?\n");
	scanf("%c %d %f\n",&emp1.name,&emp1.age,&emp1.salary);
	scanf("%c %d %f\n",&emp2.name,&emp2.age,&emp2.salary);
	scanf("%c %d %f",&emp3.name,&emp3.age,&emp3.salary);

	printf("\n***The Student Information***\n");
	printf("%c %d %f\n",emp1.name,emp1.age,emp1.salary);
	printf("%c %d %f\n",emp2.name,emp2.age,emp2.salary);
    printf("%c %d %f\n",emp3.name,emp3.age,emp3.salary);
}
