#include<stdio.h>
#include<conio.h>
void main()
{
char text[80],*p;
int i,n;
clrscr();
printf("Enter any text ");
gets(text);
printf("Enter the position no. of character: ");
scanf("%d",&n);
p=&text[0];
for(i=0;i<n-1;i++)
p++;
printf("the required character is[%c]",*p);
getch();
}
