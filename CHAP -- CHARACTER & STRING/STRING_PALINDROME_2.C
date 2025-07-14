#include<stdio.h>
#include<conio.h>
 void main()
{
char word[80];
int i=0,n,flag=0;
clrscr();
printf("Enter the word:");
fflush(stdin);gets(word);
while (word[i]!='\0')i++;
n=i;
i=0;
while(i<n/2)
{
if (word[i]!= word[n-i-1])
{
flag=1;
break;
}
i++;
}
if(flag==0)
printf("The given word is palindrome");
else
printf("The given word is not palindrome");
getch();
}