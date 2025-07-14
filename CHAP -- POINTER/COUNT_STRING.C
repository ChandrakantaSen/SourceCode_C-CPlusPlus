#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100],*t;
int l,space=0,vow=0,num=0,nl=0,tab=0;
clrscr();
printf("enter the text:");
gets(s);
l=strlen(s);
t=&s[0];
while(*t!='\0')
{
if(*t==' ')
space++;
t++;
if(*t=='1'||*t=='2'||*t=='3'||*t=='4'||*t=='5'||*t=='6'||*t=='7'||*t=='8'||*t=='9'||*t==0)
num++;
t++;
if(*t=='a'||*t=='e'||*t=='i'||*t=='o'||*t=='u')
vow++;
t++;
if(*t=='\t')
tab++;
t++;
if(*t==',')
nl++;
t++;
}
printf("space=%d\nvowels=%d\nnumbers=%d\ntabs=%d\nnewlines=%d\nconsonants=%d",space,vow,num,tab,nl,(l-nl-tab-num-space-vow));
getch();
}