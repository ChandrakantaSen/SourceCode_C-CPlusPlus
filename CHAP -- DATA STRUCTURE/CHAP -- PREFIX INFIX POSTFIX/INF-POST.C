/*****************************************************/
/* Infix Expression To Postfix Expression Conversion.*/
/*		INF-POST.C                           */
/*****************************************************/
#include<stdio.h>
#include<conio.h>
typedef struct stack		/* Stack container */
{
	char value;
	struct stack *next;
}rec;

main()
{
	char infix_exp[80];
	int i,is_operator(char);
	rec *st=NULL,*push(rec *,char),*push1(rec *,char),*pop(rec *);
	st->next=NULL; st->value=NULL;
	clrscr();
	gotoxy(20,5); printf(" Infix To Postfix Notation Conversion");
	gotoxy(20,6); printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	gotoxy(5,10); printf("Enter Infix Expression : ");
	fflush(stdin); gets(infix_exp);
	gotoxy(5,12); printf("The Postfix Expression : ");
	for(i=0;i<strlen(infix_exp);i++)
	{
		if(!is_operator(infix_exp[i]))
		printf("%c",infix_exp[i]);
		else if(st->value==NULL)
		st=push1(st,infix_exp[i]);
		else
		st=push(st,infix_exp[i]);
	}
	do{
		st=pop(st);
	}while(st!=NULL);
	getch();
}
/*************** End of main() *************************/
/***************Function for Operator Checking *********/
int is_operator(char a)
{
	if(a=='+'|| a=='-'|| a=='*'|| a=='/'|| a=='('|| a==')')
	return(1);
	else
	return(0);
}
/******************************************************/
/************7 For Precedence Checking *****************/
int precedence(char x,char y)
{
	if((x=='+' && y=='-')||(x=='-'&& y=='+'))
    return(0);
	else if((x=='*' && y=='/')||(x=='/'&& y=='*'))
    return(0);
	else
	return(1);
}
/*****************************************************/
rec *push(rec *st,char a)   /* Push in to the stack  */
{
	rec *temp,*pop(rec *);
	if(precedence(st->value,a)==0)
    {   st=pop(st);     st=push1(st,a);  }
	else
	st=push1(st,a);
}
/*****************************************************/
rec *push1(rec *st,char a)
{
	rec *temp=(rec *)malloc(sizeof(rec));
	temp->value=a; temp->next=st; return(temp);
}
/*****************************************************/
rec *pop(rec *st)
{
	rec *temp=st->next;
	printf("%c",st->value);
	free(st);  return(temp);
}
/*****************************************************/