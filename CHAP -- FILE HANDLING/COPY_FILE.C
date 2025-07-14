#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
FILE *kk,*pp;
char c;
clrscr();
pp=fopen("pp.txt","w");
kk=fopen("kk.txt","r");
if(!kk)
{
printf("\nfile is not found");
getch();
exit(0);
}
while ((c=fgetc(kk))!=EOF)
{
fputc(c,stdout);
fputc(c,pp);
}
fclose(kk);
printf("\nfile copied");
getch();
}
