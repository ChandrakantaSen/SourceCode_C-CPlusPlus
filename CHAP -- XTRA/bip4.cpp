#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class number
{
public:
int n,m,s,d,y,b,i,j,count;
char a[100];
void amstrong();
void reverse();
void palimdrome();
void krishnomurty();
void magic();
void prime();
void numberpattern();
void spattern();
void length();
void menu();
void word();
void spaces();
void vowel();
void consonant();
void spal();
void toupper();
void tolower();
void wextract();
};
void number::amstrong()
{
cout<<"\n Enter the number \n";
cin>>n;
m=n;
s=0;
while(m>0)
{
d=m%10;
s=s+(d*d*d);
m=m/10;
}
if(s==n)
{
cout<<"number is the aramstrong \n"<<s;
}
else
{
cout<<"number is not aramstrong \n"<<s;
}
}
void number::reverse()
{
cout<<"\n Enter the number \n";
cin>>n;
m=n;
d=s=0;
while(m>0)
{
d=m%10;
s=(s*10)+d;
m=m/10;
}
cout<<"\n The reverse number of "<<n<<" is = "<<s;
}

void number::palimdrome()
{
cout<<"\n Enter the number \n";
cin>>n;
m=n;
d=0,s=0;
while(n!=0)
{
d=n%10;
s=s*10+d;
n=n/10;
}
if(m==s)
{
cout<<"\n the number is a palimdrome number\n"<<s;
}
else
{
cout<<"\n the number is not palimdrome number\n"<<s;
}
}
void number::krishnomurty()
 {
cout<<"\n Enter any number:"<<endl;
cin>>n;
b=n;
s=0;
y=0;
i=0;
do
{
y=n%10;m=1;
for(i=1;i<=y;i++)
{
m=m*i;
}
s=s+m;
n/=10;
}
while(n>0);
if(s==b)
{
cout<<"The number is a krishnomurty no."<<endl;
}
else
{
cout<<"The number is not a krishnomurty no."<<endl;
}
}
void number::magic()
{
cout<<"\n Enter the number";
cin>>n;
i=n;
s=0;
j=0;
while(n>0)
{
j=n%10;
s=s+j;
n/=10;
}
if(s==10||s==1)
{
cout<<i<<" is a magic number"<<endl;
}
else
{
cout<<i<<" is not a magic number"<<endl;
}
}
void number::prime()
{
count=0;
cout<<"\n Enter the number";
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
cout<<"\n number is a prime number"<<endl;
}
else
{
cout<<"\n number is not a prime number"<<endl;
}
}
void number::length()
{
count=0;
cout<<"\n Enter any string to find out its length : - "<<endl;
gets(a);
count=strlen(a);
cout<<"\n Length of the string  is : - "<<count<<endl;
}
void number::numberpattern()
{
int ch;
do
{
clrscr();
cout<<"__________________________________________________________________"<<endl;
cout<<"____________________________MENU_________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"PRESS 1 FOR CHECK WHETHER THE NUMBER IS AMSTRONG OR NOT "<<endl;
cout<<"PRESS 2 FOR REVERSE OF A NUMBER  "<<endl;
cout<<"PRESS 3 FOR CHECK WHETHER THE NUMBER IS PALINDROME OR NOT "<<endl;
cout<<"PRESS 4 FOR CHECK WHETHER THE NUMBER IS KRISHNAMURTY OR NOT "<<endl;
cout<<"PRESS 5 FOR CHECK WHETHER THE NUMBER IS MAGIC OR NOT "<<endl;
cout<<"PRESS 6 FOR CHECK WHETHER THE NUMBER IS PRIME OR NOT "<<endl;
cout<<"PRESS 7 FOR BACK TO MAIN MENU .  "<<endl;
cout<<"PRESS 8 FOR BACK TO PROGRAM .  "<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"Enter your choice : - "<<endl;
cin>>ch;
switch(ch)
{
case 1:
amstrong();
break;
case 2:
reverse();
break;
case 3:
palimdrome();
break;
case 4:
krishnomurty();
break;
case 5:
magic();
break;
case 6:
prime();
break;
case 7:
menu();
break;
case 8:
exit(0);
break;
default:
cout<<"Wrong Choice . "<<endl;
}
getch();
}
while(1);
}
void number::spattern()
{
int ch1;
do
{
clrscr();
cout<<"__________________________________________________________________"<<endl;
cout<<"____________________________MENU_________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"PRESS 1 FOR FIND OUT THE LENGTH OF THE STRING : -  "<<endl;
cout<<"PRESS 2 FOR FIND OUT THE  NUMBER OF THE  WORD IN A STRING : -  "<<endl;
cout<<"PRESS 3 FOR FIND OUT THE  NUMBER OF THE  SPACES IN A STRING : -  "<<endl;
cout<<"PRESS 4 FOR FIND OUT THE  NUMBER OF THE  VOWELS IN A STRING : -  "<<endl;
cout<<"PRESS 5 FOR FIND OUT THE  NUMBER OF THE  CONSONANT IN A STRING : -  "<<endl;
cout<<"PRESS 6 FOR CHECKING PALINDROME WORD :-"<<endl;
cout<<"PRESS 7 FOR ENTER ANY LOWER LETTER AND CONVAT  IN A UPPER LETTER IN A STRING:-"<<endl;
cout<<"PRESS 8 FOR ENTER ANY UPPER LETTER AND CONVAT  IN A LOWER LETTER IN A STRING:-"<<endl;
cout<<"PRESS 9 FOR ENTER ANY TEXT AND SERCH THE PARTICULAR WORD IN A STRING:-"<<endl;
cout<<"PRESS 10 TO MAIN MENU .  "<<endl;
cout<<"PRESS 11 TO EXIT TO PROGRAM. .  "<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"Enter your choice : - "<<endl;
cin>>ch1;
switch(ch1)
{
case 1:
length();
break;
case 2:
word();
break;
case 3:
spaces();
break;
case 4:
vowel();
break;
case 5:
consonant();
break;
case 6:
spal();
break;
case 7:
toupper();
break;
case 8:
tolower();
break;
case 9:
wextract();
break;
case 10:
menu();
case 11:
exit(0);
break;
default:
cout<<"Wrong Choice . "<<endl;
}
getch();
}
while(1);
}
void number::word()
{
char a[100];
int i,c=0;
cout<<"Enter any text : - "<<endl;
gets(a);
for(i=0;i<strlen(a);i++)
{
if(a[i]==' ')
{
c++;
}
}
cout<<"The number of words are : - "<<(c+1)<<endl;
}
void number::spaces()
{
char d[100];
int i,s=0;
cout<<"Enter any text :-"<<endl;
gets(d);
for(i=0;i<strlen(d);i++)
{
if(d[i]==' ')
{
s++;
}
}
cout<<"The number of spaces are:-"<<(s)<<endl;
}
void number::vowel()
{
char e[100];
int i,v=0;
cout<<"Enter the text :-"<<endl;
gets(e);
for(i=0;i<strlen(e);i++)
{
if((e[i]=='A')||(e[i]=='E')||(e[i]=='I')||(e[i]=='O')||(e[i]=='U')||(e[i]=='a')||(e[i]=='e')||(e[i]=='i')||(e[i]=='o')||(e[i]=='u'))
{
v++;
}
}
cout<<"The number voiwels are:-"<<(v)<<endl;
}
void number::consonant()
{
char e[100];
int i,c=0;
cout<<"Enter the text :-"<<endl;
gets(e);
for(i=0;i<strlen(e);i++)
{
if(((int)(e[i])>=65)&&((int)(e[i]<=90)))
{
if((e[i]!='A')&&(e[i]!='E')&&(e[i]!='I')&&(e[i]!='O')&&(e[i]!='U'))
{
c++;
}
}
else if(((int)(e[i])>=97)&&((int)(e[i]<=122)))
{
if((e[i]!='a')&&(e[i]!='e')&&(e[i]!='i')&&(e[i]!='o')&&(e[i]!='u'))
{
c++;
}
}
}
cout<<"The number of consonants are:-"<<c<<endl;
}
void number::spal()
{
char s[100],p[100];
cout<<"Enter any word  :-"<<endl;
gets(s);
strcpy(p,(strrev(s)));
if(strcmp(p,strrev(s))==0)
{
cout<<s<<" is a palimdrome text";
}
else
{
cout<<s<<" is not a palimdrome text";
}
}
void number::toupper()
{
char s[100];
int c,i;
cout<<"Enter any text:-"<<endl;
gets(s);
for(i=0;i<strlen(s);i++)
{
c=(int)(s[i]);
if((c>=97)&&(c<=122))
{
c=c-32;
cout<<(char)(c);
}
else
{
cout<<(char)(c);
}
}
}
void number::tolower()
{
char s[100];
int c,i;
cout<<"Enter any text:-"<<endl;
gets(s);
for(i=0;i<strlen(s);i++)
{
c=(int)(s[i]);
if((c>=65)&&(c<=90))
{
c=c+32;
cout<<(char)(c);
}
else
{
cout<<(char)(c);
}
}
}
void number::wextract()
{
char a[100], b[50];
int i,j;
cout<<"Enter any text:-"<<endl;
gets(a);
j=0;
for(i=0;i<strlen(a);i++)
{
if(a[i]!=' ')
{
b[j]=a[i];
cout<<b[j];
j++;
}
else
{
cout<<endl;
strcpy(b,"");
j=0;
}
}
}
void number::menu()
{
int ch2;
number ob;
do
{
clrscr();
cout<<"__________________________________________________________________"<<endl;
cout<<"________________________MAIN_MENU_________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"PRESS 1 FOR ENTER THE NUMBER PATTERN FOMATION  "<<endl;
cout<<"PRESS 2 FOR STRING FORMATION  "<<endl;
cout<<"PRESS 3 FOR EXIT TO THE PROGRAM .  "<<endl;
cout<<"__________________________________________________________________"<<endl;
cout<<"Enter your choice : - "<<endl;
cin>>ch2;
switch(ch2)
{
case 1:
numberpattern();
break;
case 2:
spattern();
break;
case 3:
exit(0);
default:
cout<<"Wrong Choice . "<<endl;
}
}
while(1);
}
void main()
{
clrscr();
number ob;
ob.menu();
getch();
}


