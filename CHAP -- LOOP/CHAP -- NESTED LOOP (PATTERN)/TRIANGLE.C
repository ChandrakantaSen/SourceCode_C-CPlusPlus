#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,j,k=0,a=1;
clrscr();
printf("\n\n");
while(i>=0)
{
for(j=i;j<5;j++)
printf("  ");
for(a=(i*2)-1;a>0;a--)
printf("* ");
if(i==5)
k++;
if(k==0)
i++;
else
i--;
printf("\n");
}
getch();
}