#include<stdio.h>
#include<conio.h>

void main()
{
FILE *pp;
int c;
clrscr();
pp=fopen("pri2.txt","r");
c=getc(pp);
while (c!=EOF)
{
putchar(c);
c=getc(pp);
}
fclose(pp);
getch();
}
