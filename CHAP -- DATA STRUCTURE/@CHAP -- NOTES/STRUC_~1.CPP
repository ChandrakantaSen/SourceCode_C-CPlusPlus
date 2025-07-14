#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
char name[30];
int roll;
}s[10];

void main()
{
clrscr();
 int i,j,t=0;
 char b[20];
for(i=0;i<10;i++)
{
printf("Enter the name of the student ");
scanf("%s",&s[i].name);
printf("Enter the roll ");
scanf("%d",&s[i].roll);
}
for(i=0;i<10;i++)
{
for (j=i+1;j<10;j++)
{
if(s[i].roll>s[j].roll)
{
t=s[i].roll;
strcpy(b,s[i].name);
s[i].roll=s[j].roll;
strcpy(s[i].name, s[j].name);
s[j].roll=t;
strcpy(s[j].name,b);
}
}

}
printf(" Roll number after sortin ");
for(i=0;i<10;i++)
{
printf("\n %d",s[i].roll);
printf(" \n %s",s[i].name);

 }
getch();
}