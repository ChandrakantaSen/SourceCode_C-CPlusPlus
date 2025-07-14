#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i=1;
char str[100];
clrscr();
printf("enter your full name:");
gets(str);
printf("\n\nenter the number of times you want to print your name:");
scanf("%d",&n);
do
{
i++;
printf("\n\n%s",str);
}
while(i<=n);
getch();}