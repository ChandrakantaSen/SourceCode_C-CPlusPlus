//voters.cpp
//voters list using inheritance.
//
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//-------------------------------------------------------------------
class voter
{
protected:
 int voter_id;
 char name[30];
 char address[30];
};
class student:virtual public voter
{
 protected:
  int enrol;
  char school_name[30];
  float fees;
public:
  void get_student();
};
class employee:virtual public voter
{
 protected:
  int emp_no;
  char company_name[30];
  float salary;
 public:
  void get_employee();
};
class voter_type :public student,public employee
{
 private :
   int v_type;
 public:
   void show_student_voters();
   void show_employee_voters();
   void show_voters();
   void get_voter_type();
   int voters() { return v_type; }
};
//-------------------------------------------------------------------
void student::get_student()
{
 cout<<"\t\t\t  TYPE STUDENT'S INOFORMATION"<<endl<<endl;
 cout<<"Enter Voter Id : "; cin>>voter_id;
 cout<<"Enter Name     : "; fflush(stdin); gets(name);
 cout<<"Enter Address  : "; fflush(stdin); gets(address);
 cout<<"School Name    : "; fflush(stdin); gets(school_name);
 cout<<"Enrolment No.  : "; cin>>enrol;
 cout<<"Course Fees    : "; cin>>fees;
 }
//-------------------------------------------------------------------
void employee::get_employee()
{
 cout<<"  TYPE EMPLOYEE'S INFORMATION"<<endl<<endl;
 cout<<"Enter Voter Id : "; cin>>voter_id;
 cout<<"Enter Name     : "; fflush(stdin); gets(name);
 cout<<"Enter Address  : "; fflush(stdin); gets(address);
 cout<<"Company Name   : "; fflush(stdin); gets(company_name);
 cout<<"Emp. No.       : "; cin>>emp_no;
 cout<<"Salary         : "; cin>>salary;
}
//-------------------------------------------------------------------
void voter_type::show_student_voters()
{
 cout<<setw(3)<<voter_id<<setw(20)<<name<<setw(20)<<address<<setw(5)<<enrol<<setw(20)<<school_name<<setw(7)<<fees<<".00"<<endl;
}
//-------------------------------------------------------------------
void voter_type::show_employee_voters()
{
 cout<<setw(3)<<voter_id<<setw(20)<<name<<setw(20)<<address<<setw(5)<<emp_no<<setw(20)<<company_name<<setw(7)<<salary<<".00"<<endl;
}//------------------------------------------------------------------
void voter_type::show_voters()
{
  if(v_type==0)
   show_student_voters();
  else
   show_employee_voters();
}
//-------------------------------------------------------------------
void voter_type::get_voter_type()
 {
  cout<<"Enter Voter Type [ 0 - Student , 1 - Employee ]  :  ";
  cin>>v_type;
  }
//-------------------------------------------------------------------
void main()
{
 voter_type obj[100];
 int choice,i,n=0;
 char ch;
 do{
   clrscr();
   cout<<"1..........Entry Voters"<<endl;
   cout<<"2..........Show Student Voters Only"<<endl;
   cout<<"3..........Show Employee Voters Only"<<endl;
   cout<<"4..........Show All Voters"<<endl;
   cout<<"5..........Exit";
   cout<<"Enter Your Choice [1-5] :"; cin>>choice;
   switch (choice)
   {
   case 1:   // entry voters
	 i=n;
      do{
	   clrscr();
	     obj[i].get_voter_type();
	   if(obj[i].voters()==0)
	     obj[i].get_student();
	   else
	     obj[i].get_employee();
	    cout<<"Do you continue [ y/n ] : "; ch=tolower(getche());
	   i++;
	 }while(ch=='y');
	 n=i;
	 break;
   case 2:    // list of student voters.
	clrscr();
	cout<<"\t\t\tLIST OF STUDENT  VOTERS"<<endl;
	cout<<"V-ID...............NAME.............ADDRESS..ENROL.............SCHOOL.FEES(Rs.)"<<endl;
	for (i=0;i<n;i++)
	 if(obj[i].voters()==0)
	   obj[i].show_student_voters();
	 getch();
	break;
   case 3:    // list of employee voters.
	clrscr();
	cout<<"\t\t\tLIST OF EMPLOYEE  VOTERS"<<endl;
	cout<<"V-ID...............NAME.............ADDRESS..EMPNO............COMPANY.SALS(Rs.)"<<endl;
	for (i=0;i<n;i++)
	 if(obj[i].voters()!=0)
	   obj[i].show_employee_voters();
	 getch();
	break;
   case 4:  // list of all voters.
	clrscr();
	cout<<"\t\t\tLIST OF ALL  VOTERS"<<endl;
	cout<<"                                             ENROL/           SCHOOL/.FEES(Rs.)"<<endl;
	cout<<"V-ID...............NAME.............ADDRESS..EMPNO............COMPANY.SALS(Rs.)"<<endl;
	for (i=0;i<n;i++)
	  obj[i].show_voters();
	getch();
	break;
   case 5:   // exit from the program.
    exit(0);
   }
 i++;
 }while(1);
 } // end of main
 //---------------------------------------------------------