#include<iostream.h>
#include<conio.h>
main()
{
char c;
cout<<"\n\n";
clrscr();
for(c=32;c<=64;c++)
{
if(c>47 && c<58)
continue;
cout<<c;
}
cout<<"\n";
getch();
}