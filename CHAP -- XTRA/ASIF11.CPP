#include<iostream.h>
#include<conio.h>
void main()
{
char sex,ms;
int age;
cout<<"enter the age,sex,marital status";
cin>>age>>sex>>ms;
if(ms=='m')
cout<<"the driver is insured";
else
{
if(sex=='m')
{
if(age>=30)
cout<<"the driver insured";
else
cout<<"the driver is not insured";
}
else
{
if(age>=25)
cout<<"the driver insured";
else
cout<<"the driver not insured";
}
}
getch();
}