/* Arrays of Structure */

#include<stdio.h>
#include<conio.h>
#define size 3

struct student
{
	int roll;
	char name[30];
	int total;
};

void main()
{
	struct student s[size];

	int i,j=0,max=0;

	for(i=1;i<size;i++)
	{
		printf("\nEnter roll no:\t");
		scanf("%d",&s[i].roll);

		printf("\nEnter name:\t");
		fflush(stdin);
		gets(s[i].name);

		printf("\nEnter total marks:\t");
		scanf("%d",&s[i].total);

		if(s[i].total>max)
		{
			max = s[i].total;
			j=i;
		}
	}
	printf("\n***Student Details Information***\n");
	printf("\nRoll no    :\t%d",s[j].roll);
	printf("\nName       :\t%s",s[j].name);
	printf("\nTotal Marks:\t%d",s[j].total);
}
