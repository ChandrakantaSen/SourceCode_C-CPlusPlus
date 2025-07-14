#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],*p,i,s=0;
clrscr();
p=&a[0];
for(i=0;i<10;i++)
{
printf("Enter value");
scanf("%d",p);
s = s + *p;
p++;
}
printf("\n\n\nThe outputs\n\n\n");
p=&a[9];
for(i=0;i<10;i++)
printf("%d+",*p--);
printf("\b=%d",s);
getch();
}
