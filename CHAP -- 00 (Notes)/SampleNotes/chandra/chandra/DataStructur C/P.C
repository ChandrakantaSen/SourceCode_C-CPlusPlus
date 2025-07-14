#include<stdio.h>
#include<conio.h>
struct marks
{
char name[5];
int marks[5];
}s[5];
void main()
{
int i, max;
for(i=0;i<5;i++)
{
printf("\nEnter name of the candidates:- \n%d> ",i);
gets(s[i].name);
printf("\nEnter marks obtained by him :- \n%d> ",i);
scanf("%d",&s[i].marks);
}
for(i=0;i<5;i++)
{
if(s[i].marks>max)
{
max=s[i].marks;
}
}
printf("\nThe highest marks that has been scored is :- %d",max);
getch();
}