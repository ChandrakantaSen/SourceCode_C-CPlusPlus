#include<stdio.h>
#include<conio.h>
void main()
{char a[100];char b[100];
int j;
clrscr();
printf("\nenter a string:");
scanf("%s",a);
printf("\nenter a string:");
scanf("%s",b);
for(j=0;a[j]!='\0';j++)
{
if(a[j]!=b[j])
{printf("\nsame");
}
else
{printf("\nnot same");
}
}
getch();
}