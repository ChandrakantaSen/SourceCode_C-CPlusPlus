#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];char b[100];
int j;
clrscr();
printf("\nEnter a string:");
scanf("%s",a);
printf("\nEnter another string:");
scanf("%s",b);
for(j=0;a[j]!='\0';j++)
{
if(a[j]!=b[j])
{
break;
}
}
if (!a[j]&&!b[j])
{
printf("\n Same");
}
else
{
printf("\n not same");
}
getch();
}