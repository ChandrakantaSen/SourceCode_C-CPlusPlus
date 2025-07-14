#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ITEMS 5
#define MAXCHAR 20
void main()
{
char string[ITEMS][MAXCHAR],dummy[MAXCHAR];
int i=0,j=0;
clrscr();
printf("ENTER THE NAME OF ITEMS: \t");
while(i<ITEMS)
scanf("%s", string[i++]);
for(i=0;i<=ITEMS;i++)
{
for(j=0;j<=ITEMS-1;j++)
{
if(strcmp(string[j-1],string[j])>0)
{
strcpy(dummy,string[j-1]);
strcpy(string[j-1],string[j]);
strcpy(string[j],dummy);
}
}
}
printf("\n\n ALPHABETICAL LIST: ");
for(i=0;i<=ITEMS;i++)
printf("\n%s",string[i]);
getch();
}