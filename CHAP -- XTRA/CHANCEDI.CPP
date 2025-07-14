#include<iostream.h>
#include<conio.h>
void digit_word(int e,int a);
//int digit_word(int x,int flag);
 main()
{
int n,d=0,c=0,e,a=0;
clrscr();
cout<<"ENTER ANY NUMBER ";
cin>>n;
while(n>0)
{
d=d*10+n%10;
n/=10;
c++;
}
while (d>0)
{
e=d%10;
switch(c)
{
case 1:
digit_word(e,a);
cout<<"only";
break;
case 2:
if (e==1)
{
a=2;
break;
}
digit_word(e,a);
cout<<"hundred";
break;
case 4:
digit_word(e,a);
cout<<"thousant";
break;
}
d/=0;
c--;
}
if(c!=0)
cout<<"only";
getch();
}
void digit_word(int x ,int flag)
{
if (flag==1)
{
switch(x)
{
case 2:
cout<<"twenty";
break;
case 3:
cout<<"thirty";
break;
case 4:
cout<<"fourty";
break;
case 5:
cout<<"fivety";
break;
case 6:
cout<<"sixty";
break;
case 7:
cout<<"seventy";
break;
case 8:
cout<<"eighty";
break;
case 9:
cout<<"ninety";
break;
}
//return 0;
}
if (flag==2)
{
switch(x)
{
case 1:
cout<<"eleven";
break;
case 2:
cout<<"twelve";
break;
case 3:
cout<<"thrteen";
break;
case 4:
cout<<" fourteen";
break;
case 5:
cout<<"fiveteen";
break;
case 6:
cout<<"sixteen";
break;
case 7:
cout<<"seventeen";
break;
case 8:
cout<<"eighteen";
break;
case 9:
cout<<"ninrteen";
break;
}
//return;
}
switch(x)
{
case 0:
cout<<"zero";
break;
case 1:
cout<<"one";
break;
case 2:
cout<<"two";
break;
case 3:
cout<<" three";
break;
case 4:
cout<<" four";
break;
case 5:
cout<<"five";
break;
case 6:
cout<<"six";
break;
case 7:
cout<<"seven";
break;
case 8:
cout<<"eight";
break;
case 9:
cout<<"nine";
break;
}
}
































































































































































