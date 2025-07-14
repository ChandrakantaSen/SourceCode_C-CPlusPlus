/*       Postfix Evaluation (POSTEVAL.CPP)
	 Type any PostFix notation and return the
	 Evaluated result */
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class postfix
{
private:
 char postfix[10];
public:
 void post_eval();
 void get_expression()
  { clrscr();
   gotoxy(30,5); cout<<"POSTFIX EVALUATION";
   gotoxy(10,10); cout<<"Enter The PostFix Notation : "; cin>>postfix;}
};
//*******************************************
 void postfix::post_eval()
 {
  int i,j=-1,a,b,flag=0,n;
  char st[10];
  n=strlen(postfix);
  for(i=0;i<n;i++)
   {
      if(postfix[i]>='0' && postfix[i]<='9')
       {  st[++j]=postfix[i]; continue; }
     if(flag==0)
	{ a=st[j-1]-48; flag=1;}  /* Execute only First Time  */
     else
	a=st[j-1];                /* Execute except First Time */

     b=st[j]-48;  j-=1;
  switch(postfix[i])
   {
     case '+':
	st[j]=a+b;  break;
     case '-':
	st[j]=a-b;  break;
     case '*':
	st[j]=a*b;  break;
     case '/':
	st[j]=a/b;  break;
     default :
	gotoxy(10,12); cout<<"Invalid Operator"<<endl;
	return;
   }
 }
   gotoxy(10,12); cout<<"The Evaluated Result Is    :  "<<st[0];
   return;
}
//*****************************************************************
void main()
 {
   postfix obj;
   obj.get_expression();
   obj.post_eval();      /* Calling the function  */
   getch();
 }
 //*****************************************************************
