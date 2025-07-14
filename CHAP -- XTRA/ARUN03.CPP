#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class student
{
public:
int roll;
int marks;
char name[20];
int age;
void getdata();
void show();
void del();
};
void student ::getdata()
{
cout<<"\n enter the roll:-";
cin>>roll;
cout<<"\n enter the marks:-";
cin>>marks;
cout<<"\n enter the name:-";
cin>>name;
cout<<"\n enter the age:-";
cin>>age;
}
void student::show()
{
cout<<"\nROLL="<<roll<<"\tNAME="<<name<<"\n MARKS="<<marks<<"\nAGE="<<age;
}
void student::del()
{
roll=0;
strcpy(name, " ");
marks=0;
age=0;
}
void main()
{
clrscr();
int op,i,j;
cout<<"\n enter no  of student ";
cin>>i;
student *s=new student[i];
for(j=0;j<i;j++)
{
cout<<"\n-------------------enter record"<<j+1<<"-----------";
s[j].getdata();
}
do
{
clrscr();
cout<<"\n1.show all record";
cout<<"\n2.show specific record";
cout<<"\n3.show delet record";
cout<<"\n4.show updata record";
cout<<"\n 5.exit";
cout<<"\n enter an option";
cin>>op;
switch(op)
{
case 1:
clrscr();
for(j=0;j<i;j++)
{
cout<<"\n----------record"<<j+1<<"-----------------------------------";
