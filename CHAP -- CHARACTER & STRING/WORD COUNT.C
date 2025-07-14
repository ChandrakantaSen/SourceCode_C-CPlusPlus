#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,j=0;
    clrscr();
printf("\nenter a sentence");
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ' )
{j++;
}
}
printf("\n%d",j+1);
getch();
}

