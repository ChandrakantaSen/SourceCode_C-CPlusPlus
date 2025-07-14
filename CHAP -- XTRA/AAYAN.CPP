#include<iostream.h>
#include<conio.h>
class student
{
private:
int age;
int salary;
char name[20];
public:
void getdata()
{
cout<<"\nEnter age:";
cin>>age;
cout<<"\nEnter salary:";
cin>>salary;
cout<<"\nEnter name:";
cin>>name;
}
void show()
{
cout<<"\nage="<<age<<"\nsalary="<<salary<<"\nName="<<name;
}
};
void main()
{
clrscr();
student s[5];
int i;
for(i=0;i<5;i++)
{
s[i].getdata();
s[i].show();
getch();
}
}
