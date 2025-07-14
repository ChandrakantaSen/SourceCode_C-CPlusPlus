#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char names[][10]={
	     "aks",
	     "pra",
	     "ram",
	     "sri",
	     "gop",
	     "raj",
	     };
int i;
char t;
clrscr();

printf("\noriginal:%s%s",&names[2][0],&names[3][0]);
for(i=0;i<10;i++)
{
t=names[2][i];
names[2][i]=names[3][i];
names[3][i]=t;
}
printf("\nnew:%s%s",&names[2][0],&names[3][0]);
getch ();
}
