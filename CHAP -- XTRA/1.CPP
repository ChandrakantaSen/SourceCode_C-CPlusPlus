#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int k,l;
k=j-i;
l=i-j ;
clrscr ();
printf("enter two numbers");
scanf("%d%d",&i,&j);

if(i<j)
{
printf("\nmade profit");
printf("%d",k);
}
else
{
printf("incurred loss");
printf("%d",l);
}

getch ();
}