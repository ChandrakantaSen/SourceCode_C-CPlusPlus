#include<stdio.h>
/* Program for Doubly Link List for the operatoion
   of Append , Insert , List , Delete of Nodes.
   The special <box.h> header file is used dbox()  */

#include<stdlib.h>
#include<box.h>
#include<conio.h>
typedef struct node
{
int val;                /* node defination */
struct node *prev;
struct node *next;
}rec;

int flag=0;
/***************************************/
main()
{
rec *head,*delete(rec *);
char choice;
 head=(rec *)malloc(sizeof(rec));
 head->next=NULL;
 head->prev=NULL;
 do{
   clrscr();
   textcolor(WHITE);
   dbox(25,8,56,22);
   dbox(20,4,62,6);
   textcolor(YELLOW+BLINK);
   gotoxy(24,05); cprintf("OPERATION THROUGH DOUBLE LINK LIST");
   textcolor(GREEN);
   gotoxy(30,10); cprintf("1......Append Records");
   gotoxy(30,12); cprintf("2......List   Records");
   gotoxy(30,14); cprintf("3......Insert Records");
   gotoxy(30,16); cprintf("4......Delete Records");
   gotoxy(30,18); cprintf("5......Exit   Program");
   gotoxy(30,20); printf("choice [1/2/3/4/5 ]  ");
   choice=getche();
   textcolor(WHITE);
/****************************** Accept the choice****/
   switch(choice)
   {
   case '1':            /* Append the records */

     clrscr();  dbox(28,4,45,6); textcolor(YELLOW);
     gotoxy(30,5); cprintf("Append Records\n\n");
     textcolor(WHITE); append(head);  break;

   case '2':            /* List the records   */

     clrscr();  dbox(28,3,50,5);
     gotoxy(30,4); printf("  List of Records\n\n\n");
     list(head);    break;

    case '3':            /* Insert the records */

     clrscr();
     dbox(28,4,50,6);
     gotoxy(30,5); printf("Insertion of Node");
     insert(head); break;

    case '4':            /* Delete the records */
     clrscr(); dbox(28,4,50,6);
     gotoxy(30,5); printf("Deletion of Node");

     head=delete(head); break;

    case '5':               /* EXIT FROM PROGRAM */
     exit(0);
   }
  }while(1);
}
/*************  end of main() *******************/
append(rec *p)
{
 while(p->next !=NULL)  p=p->next;
 if(flag==0)     /* for first record */
  { gotoxy(30,10);
    printf("Enter 1st value "); scanf("%d",&p->val);
    flag=1;  return;
  }
 else                        /* other than first recors */
  {
   p->next=(rec *)malloc(sizeof(rec));
   p->next->prev=p; p->next->next=NULL;
   gotoxy(30,10);
   printf("Enter value "); scanf("%d",&p->next->val);
   return;
  } /*************** end of append() ***************/
}

list(rec *p)
{
  do{
     printf("%5d",p->val);
     if(p->next==NULL) break;
     p=p->next;
    }while(1);
    textcolor(YELLOW); gotoxy(1,10);
    cprintf("================REVERSE ORDER LIST ====================");
    textcolor(WHITE);
    gotoxy(1,12);
  do{
     printf("%5d",p->val);
     if(p->prev==NULL) break;
     p=p->prev;
    }while(1);
   getch(); return;
}
/************************** end of list() ********/

insert(rec *p)
{
 rec *temp=p;
 int value,found=0;
 gotoxy(20,10);
 printf("Enter the node Value after insertion : ");  scanf("%d",&value);
 while(p->next!=NULL)
 {
   if(p->val==value)
    {
	found=1;
        temp=(rec *)malloc(sizeof(rec));
	temp->next=p->next; temp->prev=p;
	p->next=temp;       temp->next->prev=temp;
	printf("Enter the new number");scanf("%d",&temp->val);
    }  /* end of if */
   p=p->next;
 }  /* End of while */

  if(p->val==value)            /* for last Node */
    {
	found=1;
	p->next=(rec *)malloc(sizeof(rec));
	p->next->next=NULL; p->next->prev=p;
	printf("Enter the new number"); scanf("%d",&p->next->val);
    }  /* end of if */

  if(found==0)
   { printf("Node not Found"); getch(); }
 }   /***************** end of insert() ************/

 rec *delete(rec *p)
 {
   rec *temp,*hd=p;
  int value,found=0;
  gotoxy(25,10);
  printf("Enter the number to be deleted "); scanf("%d",&value);
  while(p->next!=NULL)
  {
   if(p->val==value)
    {
      if(p==hd)      /* deletion of first node */
       {
	found=1;
	temp=p;	p->next->prev=NULL;
	hd=p->next; free(temp);
        printf("Node is deleted Successfully"); getch();
	return(hd);
       }
     found=1;  temp=p;
     p->next->prev=p->prev;
     p->prev->next=p->next;  free(temp);
     printf("Node is deleted Successfully"); getch();
     return(hd);
    }
   p=p->next;
  } /* end of while */

  if(p->val==value)  /* Deletion of Last Node */
  { temp=p; p->prev->next=NULL; free(temp); return(hd); }

   if(found==0) printf("Record not found"); getch();
 }
 /*************** end of delete()  ********************/