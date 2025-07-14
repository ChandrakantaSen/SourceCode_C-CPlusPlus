/***********************************************************/
/*		            			    */
/*  Program for split the link list into four lists      */
/*  accouding the elements.                                 */
/*                                                                       */
/************************************************************/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int value;
struct node *next;
}rec;
/***************************************************/
void main()
{
 void create(rec *),list(rec *),split(rec *);
 char choice;
 rec *head=(rec *)malloc(sizeof(rec)); head->next=NULL;
 head->value=NULL;
 do{
  clrscr();
  gotoxy(30,5); printf("M A I N    M E N U ");
  gotoxy(20,10); printf("1.......Insert Elements");
  gotoxy(20,12); printf("2.......Show Main Link List");
  gotoxy(20,14); printf("3.......Split Link List");
  gotoxy(20,16); printf("4.......Exit ");
  gotoxy(20,20); printf("Choose the option : ");
  choice=toupper(getche());
 switch(choice)
 {
 case '1':                      /* Create the lisk list  */
   create(head);  break;
 case '2':                      /* List the Link List    */
   list(head);  getch(); break;
 case '3':                      /* Split the Link List   */
   split(head);   break;
 case '4': 			/* Exit from the program */
  exit(0);
 default:
  printf("\nInvlid input "); getch();
 }
}while(1);
}
/*********************************************************/
void create(rec *p)
{
char ch;
 if(p->next==NULL && p->value==NULL)
 {
   printf("\nEnter number : "); scanf("%d",&p->value);
   printf("Do You Continue...[y/n]  "); ch=toupper(getche());
   if(ch=='N') return;
 }
 while(p->next!=NULL)
  p=p->next;

 do{
   p->next=(rec *)malloc(sizeof(rec));
   p=p->next;
   printf("\nEnter number : "); scanf("%d",&p->value);
   printf("Do You Continue...[y/n]  "); ch=toupper(getche());
   if(ch=='N') break;
   }while(1);
   p->next=NULL;
  return;
 }
/***********************************************************/
void list(rec *p)
{
 printf("\n The List of Numbers :\n");
 do{
  printf("%5d",p->value);
  if(p->next==NULL) break;
  p=p->next;
  }while(1);
}
/**********************************************************/
void split(rec *p)
{
 rec *p1,*p2,*p3,*p4,*head1,*head2,*head3,*head4;
 int flag1=0,flag2=0,flag3=0,flag4=0;
 head1=(rec *)malloc(sizeof(rec)); p1=head1;
 head2=(rec *)malloc(sizeof(rec)); p2=head2;
 head3=(rec *)malloc(sizeof(rec)); p3=head3;
 head4=(rec *)malloc(sizeof(rec)); p4=head4;

 do{
     if(flag1==0)
      { p1->value=p->value;p1->next=NULL; flag1=1; }
     else
      {
	p1->next=(rec *)malloc(sizeof(rec));
	p1->next->value=p->value; p1->next->next=NULL;
	p1=p1->next;
      }
     p=p->next;
    /*-------------------------------------------*/
  if(p==NULL) break;

     if(flag2==0)
      { p2->value=p->value;p2->next=NULL; flag2=1; }
     else
      {
	p2->next=(rec *)malloc(sizeof(rec));
	p2->next->value=p->value; p2->next->next=NULL;
	p2=p2->next;
      }
     p=p->next;

   /*---------------------------------------------*/
  if(p==NULL) break;

     if(flag3==0)
      { p3->value=p->value;p3->next=NULL; flag3=1; }
     else
      {
	p3->next=(rec *)malloc(sizeof(rec));
	p3->next->value=p->value; p3->next->next=NULL;
	p3=p3->next;
      }
     p=p->next;

   /*---------------------------------------------*/
  if(p==NULL) break;

     if(flag4==0)
      { p4->value=p->value;p4->next=NULL; flag4=1; }
     else
      {
	p4->next=(rec *)malloc(sizeof(rec));
	p4->next->value=p->value; p4->next->next=NULL;
	p4=p4->next;
      }
     p=p->next;
 }while(1);
 list(head1);  list(head2);  list(head3);  list(head4);
getch();
}
