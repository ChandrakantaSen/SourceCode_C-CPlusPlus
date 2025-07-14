#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char text[80],*p,temp[20],word[20];
int i=0,j=0,count=0;
p=&text[0];
clrscr();
printf("Enter any text ");
fflush(stdin);
gets(text);
printf("Enter word to be searched");
gets(word);
for(i=0;i<=strlen(text);i++)
{
if(*p!=' ')
temp[j++]=*p;
else
{
temp[j]='\0';
if(strcmpi(temp,word)==0)
count++;
j=0;
}
p++;
}
printf("No. of Occurance=%d",count);
getch();
}