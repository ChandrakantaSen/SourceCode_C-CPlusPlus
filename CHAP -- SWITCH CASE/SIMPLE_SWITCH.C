#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
float a,b,c;
do{
clrscr();
printf("\n1.Addition");
printf("\t2.........Subtraction");
printf("\t3.........Multiplication");
printf("\t4.........Division");
printf("\5..........Termination");
printf("\tYour Choice Please.......[1,2,3,4]:");
scanf("%d",&ch);
if(ch==5)
break;
if(ch<1||ch>5)
{
printf("Invalid Input");
getch();
continue;
}
printf("\nEnter Two Values");
scanf("%f%f",&a,&b);
switch(ch)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
default:
printf("Invalid Input");
getch();
}
printf("The result is=%f",c);
getch();
}
while(1);
}