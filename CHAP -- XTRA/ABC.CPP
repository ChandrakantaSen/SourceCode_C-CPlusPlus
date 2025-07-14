#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
union book
{
int price;
char name[2];
};
union book val;
val.price=288;
printf("val.price=%d\n",val.price);
printf("val.name[0]=%d\n",val.name[0]);
printf("val.name[1]=%d\n",val.name[1]);
val.name[1]=4;
printf("after assign a new value to val.name[1]=4\n");
printf("val.price=%d\n",val.price);
printf("val.name[0]=%d\n",val.name[0]);
printf("val.name[1]=%d\n",val.name[1]);
getch();
}