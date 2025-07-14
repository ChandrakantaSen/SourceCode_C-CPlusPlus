/*		Programe to count the frequency of the character	   */
#include<stdio.h>
#include<conio.h>
void main()
{
char text[80],result[80];
int count[80],i,j,n,c,k=0;
clrscr();
printf("ENTER ANY TEXT:");
fflush(stdin);
gets(text);
for(i=0;i<n;i++)
{
if (text[i]==' ')
continue;
c=1;
for(j=i+1;j<n;j++)
{
if(text[i]==text[j])
{
c++;text[j]=' ';}
}
result[k]=text[i];
count[k++]=c;
c=1;
}
printf("\n\n\n");
for(i=0;i<k;i++)
printf("%c	-	%d\n",result[i],count[i]);
getch();
}
