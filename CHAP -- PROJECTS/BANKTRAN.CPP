
#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<process.h>
#include "c:\tc-old\include\box.h"
void background();
void clear(int,int,int,int);
void heading1();
void heading2();
class ledger;
class master
{
private:
  char name[20];
  int account;
  float balance;
public:
  void new_customer();           // Entry for new customer's entry
  void customer_list(int);       // For customer's list
  void update_master();
  friend int updation(master&,ledger&);
  int search();
};
class ledger
{
private:
  int account;
  char d_o_o[11];                 // date of operation;
  char mode;                      // Mode of operation;
  float amount;
public:
  int ledger_entry(int);          // Entry to ledger
  void show_details(int,int);     // List details of customer's
  friend int updation(master&,ledger&);
};
/*****************************************************************/
void master::new_customer()    // Open new account.
{
background();
clear(10,5,70,11);
dbox(10,5,70,11);
gotoxy(30,5); cout<<" OPENING NEW ACCOUNT ";
gotoxy(20,7); cout<<"Customer's Name       :  ";
gotoxy(20,9); cout<<"Customer's Account No.:  ";
gotoxy(45,7); fflush(stdin); gets(name);
gotoxy(45,9); cin>>account;
balance=0;
}
/*****************************************************************/
int updation(master& m,ledger& l)
{
  gotoxy(17,11); cout<<"Customer's Name   :  "<<m.name;
  l.account=m.account;
  gotoxy(17,13); cout<<"Date of operation : ";
  gotoxy(17,15); cout<<"Amount (Rs.)      : ";
  gotoxy(17,17); cout<<"Withdrawl / Deposit [ W / D ] [ ]";
  gotoxy(45,13); cin>>l.d_o_o;
  gotoxy(45,15); cin>>l.amount;
  gotoxy(48,17); cin>>l.mode;
  int success=1;
 switch(l.mode)
 {
  case 'w':
  case 'W':
     if(l.amount>=m.balance)
       { gotoxy(20,19);cout<<"Sorry! No over draft will be issued";success=0; getch(); }
     else
	 m.balance=m.balance-l.amount;
     break;
  case 'd':
  case 'D':
     m.balance=m.balance+l.amount;
     break;
  default :
     cout<<"Invalid input..";
 }
return success;
}
/******************************************************************/
void master::customer_list(int sl)        //List of Total Customers.
{
 gotoxy(15,sl+4); cout<<sl;
 gotoxy(20,sl+4); cout<<name;
 gotoxy(45,sl+4); cout<<account;
 gotoxy(60,sl+4); cout<<balance;
}

int master::search()
{
return account;
}
/*******************************************************************/
float final=0;
void ledger::show_details(int sl,int acno)
{
 if(account==acno)
 {
 gotoxy(15,sl+6); cout<<sl;
 gotoxy(20,sl+6); cout<<d_o_o;
 if(mode=='d'|| mode=='D')
 { gotoxy(40,sl+6); cout<<"Deposit";final=final+amount; }
 else
 { gotoxy(40,sl+6); cout<<"Withdrawn";final=final-amount; }
 gotoxy(57,sl+6);cout.width(10); cout<<amount;
}
}
/****************************** MAIN ()******************************/
void main()
{
 master p[100];
 ledger q[100];
  int count1=0;
  int count2=0;
  do{
     clrscr();
     background();
     clear(20,4,63,23);
     dbox(20,8,63,20);
     dbox(20,4,63,23);
     gotoxy(25,5); cout<<"[ BANK ACCOUNT MAINTENCE SYSTEM ]";
     gotoxy(33,7); cout<<"M A I N   M E N U";
     gotoxy(25,10); cout<<"1......Open New Account";
     gotoxy(25,12); cout<<"2......Operation of Account";
     gotoxy(25,14); cout<<"3......List of Customers";
     gotoxy(25,16); cout<<"4......Detail of Customer's Account";
     gotoxy(25,18); cout<<"5......Exit.";
     gotoxy(25,22); cout<<"Choice Please.....[1,2,3,4,5]..[ ]\b\b";
     int ch; cin>>ch;
    switch(ch)
    {
    case 1:
       //	p[count1]= new master;
	p[count1].new_customer();
	count1++;
	break;
    case 2:
       // q[count2]=new ledger;
	//int temp_account=q[count2].entry();   count2++;
	int temp_account;
	background();
	clear(22,2,58,4);
	dbox(22,2,58,4);
	gotoxy(27,3); cout<<"PERSONAL ACCOUNT OPERATION";
	clear(15,8,65,20);
	dbox(15,10,65,20);
	dbox(15,8,65,20);
	gotoxy(17,9);cout<<"Account number Please...:  "; cin>>temp_account;
	int found=0;   // True = 1 , Faluse = 0
	int success;
	for(int i=0;i<count1;i++)
	 {   if(temp_account==p[i].search())
	       { success=updation(p[i],q[count2]);
	       if(success) count2++;  found=1; }
	 }
	 if (found==0)
	 { gotoxy(17,9);cout<<"         Account No not found !              "; getch(); }
	break;
    case 3:
	  heading1();
	for(i=0;i<count1;i++)
	  p[i].customer_list(i+1);     	getch();
	break;
    case 4:
	  heading2();
	  int acno;
	  gotoxy(45,3); cin>>acno;
	for(i=0;i<count2;i++)
	    q[i].show_details(i+1,acno);
	  gotoxy(20,20); cout<<"Final Balance(Rs.) : "<<::final;
	  ::final=0;
	  getch();
	break;
    case 5:
	exit(0);
    default:
	cout<<"Invalid Choice ";        getch();
    }  //  End of switch
  }while(1);
  }
/**********************************************/
void background()
{
clrscr();char ch=176;
for(int i=0;i<2000;i++)
cout<<ch;
}

void clear(int x,int y,int z,int w)
{
  for(int i=x;i<=z;i++)
    for(int j=y;j<=w;j++)
       { gotoxy(i,j);cout<<" ";}
}
 void heading1()
 {
 background();
 clear(12,2,70,22);  dbox(12,4,70,22);  dbox(12,2,70,22);
 gotoxy(32,2); cout<<"LIST OF CUSTOMERS";
 gotoxy(15,3); cout<<"SL";
 gotoxy(20,3); cout<<"NAME";
 gotoxy(45,3); cout<<"ACCOUNT-NO";
 gotoxy(57,3); cout<<"BALANCE";
 }
 void heading2()
 {
 background();
 clear(12,2,70,22);
 dbox(12,4,70,22); dbox(12,6,70,22);  dbox(12,2,70,22);
 gotoxy(28,2); cout<<"DETAILS OF CUSTOMERS ACCOUNT";
 gotoxy(20,3); cout<<"Account No Please : ";
 gotoxy(15,5); cout<<"SL";
 gotoxy(20,5); cout<<"DATE ";
 gotoxy(40,5); cout<<"MODE";
 gotoxy(57,5); cout<<"AMOUNT(Rs.)";
 }



















