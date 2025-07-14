
#include<string.h>
#include<conio.h>
#include<stdio.h>
main()
{
char word[80];
int i,n,c;
clrscr();
printf("your name plese..");
 gets(word);
n=strlen(word);
for(i=0;i<n;i++)
{
  if(i==0&& word[0]!=' ')printf("%c.",word[0]);
  if(word[i]==' ')
  {
   if(word[i+1]==' ')continue;
   printf("%c.",word[i+1]);
   c=i;
  }
}
printf("\b");
for(i=c+2;i<n;i++)
printf("%c",word[i]);
getch();
}

