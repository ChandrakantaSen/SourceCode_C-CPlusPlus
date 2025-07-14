#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{ clrscr();
int a[20],size,i,flag=0,num,pos;
cout<<"\n\t enter the number of elements in the arrray to be searched:"<<endl;
cin>>size;
cout<<"\n\t enter the elements of array in acessending order :"<<endl;
for(i=0;i<size;i++)
cin>>a[i];
cout<<"n\t enter the elements to be searched for:"<<endl;
cin>>num;
for(i=0;i<size;i++)
if (a[i]==num)
{ flag =i;
pos=i;
break;
}
if(flag==0)
cout<<"\n\t element not found"<<endl;
else
cout<<"\n\t elements found at position "<<pos+1<<endl;
getch();
}
