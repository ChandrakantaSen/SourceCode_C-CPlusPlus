#include<iostream.h>
#include<conio.h>
main()
{
int b,d,n,a[10],j,i=0;
clrscr();
cout<<"\t\t ENTER ANY DECIMAL NUMBER    "<<endl;
cin>>n;
cout<<"\t       ========================   "<<endl;
b=n;
while(n>0)
{
d=n%2;
n=n/2;
a[i]=d;
i++;
}
i--;
cout<<"\n\n BINARY NUMBER IS :    ";
for (j=i;j>=0;j--)
cout<<  a[j];
cout<<"\n\n DECIMAL NUMBER IS :   ";
cout<<b;
cout<<"\n\n OCTAL NUMBER IS :     ";
cout<<b;
cout<<"\n\n HEXADECIMAL NUMBER IS :";
cout<<b;
getch();
}

