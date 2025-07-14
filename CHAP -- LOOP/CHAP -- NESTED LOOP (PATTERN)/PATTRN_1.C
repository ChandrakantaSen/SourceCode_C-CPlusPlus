#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,flag=0;
clrscr();
printf("Enter the value of n:");
scanf("%d",&n);
printf("\n\n\n OUT PUT........\n\n\n");
for(i=0;i<=n;i++)
{
for(j=0;j<=(n-i);j++)
printf("%c",65+i);
if(flag==0)
{
printf("\b");
flag=1;
}
for(j=0;j<i*2-1;j++)
printf(" ");
for(j=(n-i);j>=0;j--)
{
printf("%c",48+i);
}
printf("\n");
}
getch();
}