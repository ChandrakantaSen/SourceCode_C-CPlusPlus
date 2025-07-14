#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class teacher
{
char name[20];
char subject[20];
float Basic,DA,HRA,salary;
 public:
 void Readdata()
 {
 cout<<"\n\t enter the name of the teacher :-"<<endl;
 gets(name);
 cout<<"\n\t enter the subject taught by the teacher :-"<<endl;
 gets(subject);
 cout<<"\n\t enter the basic of the teacher"<<endl;
 cin>>Basic;
 cout<<"\n\t enter the DA of the teacher :-"<<endl;
 cin>>DA;
 cout<<"\n\t enter the HRA of the teacher"<<endl;
 cin>>HRA;
 cout<<"\n\t enter the salary of the teacher "<<endl;
 cin>>salary;
 salary=Basic+DA+HRA;
 }
 void displaydata()
 {
 cout<<"\n\t the name of the teacher is"<<name<<endl;
 cout<<"\n\t the subject taught by him/her "<<subject<<endl;
 cout<<"\n\t the basic of the teacher is"<<Basic<<endl;
 cout<<"\n\t the DA of the teacher is "<<DA<<endl;
 cout<<"\n\t the HRA of the teacher is "<<HRA<<endl;
 cout<<"\n\t the total salary is"<<salary<<endl;
 }
 };
 void main()
 { teacher ob;
 ob.name;
 ob.subject;
 ob.Basic;
 ob.DA;
 ob.HRA;
 ob.salary;
 getch();
 }












