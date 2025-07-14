#include<iostream.h>
#include<conio.h>
class student
{
private:
int roll;
char name[20];
int marks;
public:

void getdata()
{
cout<<"\nenter the roll:";
cin>>roll;
cout<<"\nenter the name:";
cin>>name;
cout<<"\nenter the marks:";
cin>>marks;
}
void putdata()
{
cout<<"\nroll="<<roll<<"name="<<name<<"marks="<<marks;
}
};
void main()
{
int i;
clrscr();
student s[3];
for(i=0;i<3;i++)
{
s[i].getdata();
}
for(i=0;i<3;i++)
{
s[i].putdata();
}
getch();
}