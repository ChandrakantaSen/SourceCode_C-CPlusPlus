#include<iostream.h>
#include<conio.h>
#define colmax 10
#define rowmax 10
void main()
{
int row,column,y;
clrscr();
row=1;
cout<<"\n  multiplecation table   \n";
cout<<"---------------------------\n";
do
{
column=1;
do
{
column=column+1;
y=row*column;
cout<<y<<"\t";
}
while(column<=colmax);
cout<<"\n";
row=row+1;
}
while (row<=rowmax);
cout<<"------------------------\n";
getch();
}