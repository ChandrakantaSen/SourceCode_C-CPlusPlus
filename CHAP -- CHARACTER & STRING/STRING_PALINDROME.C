#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char word1[80],word2[80];
clrscr();
printf("Enter the word");
gets(word1);
strcpy(word2,word1);
strrev(word1);
if(strcmpi(word1,word2)==0)
printf("The given word is palindrome");
else
printf("The given word is not palindrome");
getch();
}