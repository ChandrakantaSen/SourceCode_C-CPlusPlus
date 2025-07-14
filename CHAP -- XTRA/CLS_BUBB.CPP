#include<iostream.h>
#include<conio.h>
class Sort
{
int a[10],l;
public:
Sort(int x)
{
 l=x;
 int i;
 for(i=0;i<l;i++)
 {
 a[i]=0;
 }
}
void enter()
{
 int i;
 for(i=0;i<l;i++)
 {
 cout<<"\nEnter elements of the array:";
 cin>>a[i];
 }
}
void bubbleSort()
{
int i,j,temp;
for(i=0;i<l;i++)
{
for(j=i;j<l;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
void show()
{
bubbleSort();
for(int i=0;i<l;i++)
{
  cout<<a[i]<<"\t";
}
}
};
void main()
{
clrscr();
Sort s(5);
s.enter();
s.show();
getch();
}










