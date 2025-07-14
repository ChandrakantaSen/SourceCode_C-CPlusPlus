#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char c;
clrscr();
printf("Enter any key=");
scanf("%c",&c);
if(isalpha(c))
printf("This character is an alphabet.");
else if(isdigit(c))
printf("This character is a digit.");
else if(ispunct(c))
printf("This character is a punctuation mark.");
else if(isspace(c))
printf("This character is a spacebar.");
else
printf("This character is a special character.");
getch();
}