/*Illustration of initialization function other than a Constructor */
#include<iostream.h>
#include<conio.h>
class employee
{
private:
int idno;
float salary;
public:
void intl()     //function to intialize//
{
idno=0;
salary=0.0;
}              //other public members//
}
  main()
{                               //creating an object//
employee account;
account.intl();
clrscr();      //initialize the object//
getch();
//return 0;
}

