#include<stdio.h>
#include<conio.h>
void main()
{
float u,b;
clrscr();
printf("Enter the E-Bill:- ");
scanf("%f",&u);
if (u<=50)
b=100;
else if (u<=100)
b=100+(u-50)*1;
else if (u<=200)
b=100+50*1+(u-100)*1.5;
else if (u<=300)
b=100+50*1+100*1.5+(u-200)*2;
else if (u<=500)
b=100+50*1+100*1.5+100*2+(u-300)*2.5;
else
b=100+50*1+100*1.5+100*2+200*2.5+(u-500)*3+100;
printf("\tit is unit%.2f",b);
getch();
}
