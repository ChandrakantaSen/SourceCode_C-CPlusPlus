#include<stdio.h>
#include<conio.h>
main()
{
int b,n,d,a[10],i,j=0;
clrscr();
printf("enter any decimal?");
scanf("%d",&n);
printf("===========================\n");
b=n;
while(n>0)
{
d=n%2;n=n/2;
a[i]=d;
i++;
}
i--;
printf("binery number =");
for(j=i;j>=0;j_)
printf("%d",a[j]);
printf("\n octal number   =%0",b);
printf("\n decimal number  =%d",b);
printf("\nhexa-decimal number=%x",b);
getch();
}
