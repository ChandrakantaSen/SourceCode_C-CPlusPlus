#include<stdio.h>
#include<conio.h>
void main()
{
int i=10;
int *j;
int **k;
clrscr();
j=&i;
k=&j;
printf("\nThe address of i is %x",&i);
printf("\nValue of j is %x",j);
printf("\nValue in i is %d",i);
printf("\nValue in i is %d",*j);
printf("\nValue in i is %d",**k);
getch();
}






