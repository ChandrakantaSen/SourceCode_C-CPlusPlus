#include<iostream.h>
#include<conio.h>
class stud
{
char n[20];
int m,r;
int a;
public:
void getdata();
void show();
};
void stud::getdata()
{
cout<<"\nenter roll:";
cin>>r;
cout<<"\nenter name:";
cin>>n;
cout<<"\nenter marks:";
cin>>m;
cout<<"\nenter age:";
cin>>a;
}
void stud::show()
{
cout<<"\nroll="<<r<<"\tname="<<n<<"\nMarks="<<m<<"\tAge="<<a;
}
void main()
{
clrscr();
int op,i,j;
cout<<"\nhow many student you want?:";
cin>>i;
stud * s=new stud[i];
for( j=0;j<i;j++)
{
cout<<"\n-----------------enter record"<<j+1<<"--------------";
s[j].getdata();
}
clrscr();
for(j=0;j<i;j++)
{
cout<<"\n---------------record"<<j+1<<"-----------------------------";
s[j].show();
}
getch();
}

