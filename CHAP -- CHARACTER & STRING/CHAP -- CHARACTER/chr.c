#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{

char var,chr;
clrscr();

printf("\nenter any character :");
scanf("%c",&var);
if(isalpha(var))
if(islower(var))
{
chr=toupper(var);
printf("\ncharacter is in uppercase:\t%c",chr);
}
else
{
printf("\ncharacter is not in lowercase");
}
else
{
printf("\nthis is not an alphabet");
}
getch();
}