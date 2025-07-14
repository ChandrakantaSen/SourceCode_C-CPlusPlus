#include<iostream.h>
#include<conio.h>
void main()
{
int n, seven=0,sodd=0,i=0;
clrscr();
cout<<"\nenter any range";
cin>>n;
do
{
if(i%2==0)
{
seven=seven+i;
}
 else
{
sodd=sodd+i;
}
i++;
}
while(i<=n);
cout<<"The sum of even number is="<<seven<<endl;
cout<<"The sum of odd number is="<<sodd;
getch();
}