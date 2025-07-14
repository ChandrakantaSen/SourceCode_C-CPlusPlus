#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char word[100];
int i=0,vc=0,ascii_sum=0;
clrscr();
cout<<"\t\t enter any word:";
gets(word);
cout<<"---------------------\n";
cout<<"word in vertical form:\n";
while(word[i]!='\0')
{
switch(word[i])
{
case 'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U':
vc++;
}
ascii_sum=ascii_sum+word[i];
cout<<"\t\t\t\n"<<word[i];
i++;
}
cout<<"-----------------\n";
cout<<"number of vowels     ="<<vc;
cout<<"sum of ascii values  ="<<ascii_sum;
while(i>=0)

cout<<"word in reverse order  ="<<word[i--];

getch();
}