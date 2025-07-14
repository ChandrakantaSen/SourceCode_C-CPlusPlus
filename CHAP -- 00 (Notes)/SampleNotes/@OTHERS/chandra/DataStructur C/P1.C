#include<stdio.h>
#include<conio.h>
void main()
{
int k,i,j;
clrscr();
//printf("enter any no.");
//scanf("%d",&n);
k=15;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d",k--);
}
printf("\n");
}
getch();
}
