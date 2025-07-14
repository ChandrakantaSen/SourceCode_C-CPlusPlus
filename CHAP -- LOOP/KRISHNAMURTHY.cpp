#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0,i,s=0,f=i,n1;
printf("Enter one number");
scanf("%d",&n);
n1=n;
while(n>0)
{
r=n%10;
for(i=1;i<=r;i++)
{
f=f*i;
}
s=s+f;
f=1;
n=(n/10);
}
if(n1==s)
printf("It is a Krishnamurti number");
else
printf("It is not a Krishnamurti number");
getch();
}