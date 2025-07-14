/*
    Postfix Evaluation (POSTVAL.C)
    Type any PostFix notation and return the Evaluated result 
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
   void post_eval(char[],int);  /* function prototype declaration */
   char postfix[20];
   int top,n;
   clrscr();
   gotoxy(30,5); printf("POSTFIX EVALUATION");
   gotoxy(10,10); printf("Enter The PostFix Notation : ");
   scanf("%s",postfix);
   n=strlen(postfix);
   post_eval(postfix,n);      /* Calling the function  */
   getch();
 }
 /******************************************************/
 void post_eval(char postfix[],int n)
 {
  int i,j=-1,a,b,flag=0;
  char st[20];
  for(i=0;i<n;i++)
   {
      if(postfix[i]>=48 && postfix[i]<=57)
       {  st[++j]=postfix[i];
	  continue;
       }
     if(flag==0)
	{ a=st[j-1]-48; flag=1;}  /* Execute only First Time  */
     else
	a=st[j-1];                /* Execute except First Time */

     b=st[j]-48;
     j-=1;
  switch(postfix[i])
   {
     case '+':
	st[j]=a+b;
	break;
     case '-':
	st[j]=a-b;
	break;
     case '*':
	st[j]=a*b;
	break;
     case '/':
	st[j]=a/b;
	break;
     default :
	gotoxy(10,12); printf("Invalid Operator\n");
	return;
   }
 }
   gotoxy(10,12); printf("The Evaluated Result Is    :  %d",st[0]);
   return;
}