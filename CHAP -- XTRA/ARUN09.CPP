#include<iostream.h>
#include<conio.h>
struct pay
{
float gross,pf,it;
};
void main()
{
pay amount;
char name[30];
char month[10];
int year;
clrscr();
cout<<" Enter the name of the employee"<<endl;
cin>>name;
cout<<" Enter month" <<" Enter year"<<endl;
cin>> month>> year;
cout<<" Enter monthly gross pay"<<endl;
cin>>amount.gross;
amount.pf=0.12*amount.gross;
amount.it=0.10*amount.gross;
float monthpay=amount.gross-amount.pf-amount.it;
cout<<"\n"<<name;
cout<<"\n"<<month<<"\t"<<year;
cout<<"\nSalary is Rs."<<monthpay<<endl;
//return 0;
getch();
}
