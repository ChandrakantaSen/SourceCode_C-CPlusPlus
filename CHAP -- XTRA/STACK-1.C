/* Program for stack operation  */
#include<stdio.h>
#define STACK_SIZE 5
typedef struct node
{
 int num;
 struct node *next;
}rec;
int count=0;
main()
{
 rec *head=NULL,*push(rec *),*pop(rec *);
 int choice;
 do {
     clrscr();
     gotoxy(35,5); printf("MAIN MENU");
     gotoxy(30,10); printf("1 .... PUSH ");
     gotoxy(30,12); printf("2 .... POP ");
     gotoxy(30,14); printf("3 .... LIST");
     gotoxy(30,16); printf("4 .... EXIT");
     gotoxy(30,18); printf("Your Choice Please [1-4] ");
     scanf("%d",&choice);
   switch(choice)
   {
   case 1:  /* PUSH */
     if(count == STACK_SIZE)
      { printf("STACK FULL"); getch(); }
     else
      {  head=push(head); count++; }
     break;
   case 2:  /* POP */
     if(count==0)
      { printf("STACK EMPTY"); getch(); }
     else
      { head=pop(head); count--; }
     break;
   case 3:   /* LIST */
      clrscr();
      gotoxy(35,5); printf("STACK CONTAINER\n\n\n");
      list(head);
     break;
   case 4:  /* EXIT */
      exit();
  } /* end of switch */
 }while(1); /* end of while */
 } /* end of main() */
 /***********************************/
rec *push(rec *p)
{
 rec *temp;
 if(p==NULL)  /* for first time */
 {
    p=(rec *)malloc(sizeof(rec));
    printf("Enter Value : "); scanf("%d",&p->num);
    p->next=NULL; return(p);
 }
 else     /* other than first time */
 {
   temp=(rec *)malloc(sizeof(rec));
   printf("Enter Value : "); scanf("%d",&temp->num);
   temp->next=p; return(temp);
 }
}
/*********************************************/
rec *pop(rec *p)
{
 rec *temp;
 temp=p->next;
 free(p); return(temp);
}
/********************************************/
list(rec *p)
{
 while(p!=NULL)
 {
  printf("\t\t\t\t\t%d\n",p->num);
  p=p->next;
 }
getch();
}
/********************************************/
