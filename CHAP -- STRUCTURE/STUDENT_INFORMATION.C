#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
struct emp
{
int ecode;
char name[30];
int sal;
int age;
}*e;
void main()
{
int i,op;
int j,ec1;
clrscr();
printf("\n enter the no of student:-");
scanf("%d",&i);
e=(struct emp*)(malloc(i));
for(j=0;j<i;j++)
{
printf("\n enter code:-");
scanf("%d",&e[j].ecode);
printf("\n enter name:-");
fflush(stdin);
scanf("%s",e[j].name);
printf("\n enter age:-");
scanf("%d",&e[j].age);
printf("\n enter salary:-");
scanf("%d",&e[j].sal);
}
do
{
clrscr();
printf("\n1.show records");
printf("\n2.find records");
printf("\n3.delete records");
printf("\n4.edit records");
printf("\n5.exit");
printf("\n enter an option:-");
scanf("%d",&op);
switch(op)
{
case 1:
for(j=0;j<i;j++)
{
printf("\n code=%d\tname=%s\tsalary=%d\tage=%d",e[j].ecode,e[j].name,e[j].sal,e[j].age);
}
break;
case 2:
printf("enter ecode of the employee:-");
scanf("%d",&ec1);
for(j=0;j<i;j++)
{
if(e[j].ecode==ec1)
{
printf("\ncode=%d\tname=%s\tsalary=%d\tage=%d",e[j].ecode,e[j].name,e[j].sal,e[j].age);
}
}
break;
case 3:
printf("\nenter ecode of the employee:-");
scanf("%d",&ec1);
for(j=0;j<i;j++)
{
if(e[j].ecode==ec1)

if(e[j].sal==ec1)

if(e[j].age==ec1)
e[j].ecode=0;
strcpy(e[j].name,"   ");
e[j].sal=0;
e[j].age=0;
 }
break;
case 4:
printf("enter the ecode of the employee:-");
scanf("%d",&ec1);
for(j=0;j<i;j++)
{
if(e[j].ecode==ec1)
{
printf("\n enter code");
scanf("%d",&e[j].ecode);
printf("\n enter name:-");
fflush(stdin);
gets(e[j].name);
printf("\nenter the salary:-");
scanf("%d",&e[j].sal);
printf("\n enter age:-");
scanf("%d",&e[j].age);
}
}
break;
case 5:
exit(0);
break;
default:
printf("\n invalid record");
}
getch();
}
while(op!=5);
getch();
}



