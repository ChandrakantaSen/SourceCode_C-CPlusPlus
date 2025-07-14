#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,k,j;
clrscr();
printf("Enter the number of stars:");
scanf("%d",&n);
for(i=n;i>=0;i--)
{
for(k=n-i;k>=0;k--)
{
printf("      ");
}
for(j=i;j>0;j--)
{
printf(" *    ");
}
printf("\n");
}
getch();
}
