#include<stdio.h>
#include<conio.h>
void main()
{
long int p;
int      n=0;
double q;
clrscr();
printf("_____________________________________________________\n");
printf("2 to power n	     n	        2 to power -n\n");
printf("_____________________________________________________\n");
p=1;
do
{
if(n==0)
p=1;
else
p=p*2;
q=1.0/(double)p;
printf("%10ld  %10d %20lf\n",p,n,q);
n=n+1;
}
while(n<=20);
printf("_____________________________________________________\n");
getch();
}