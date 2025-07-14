#include<conio.h>
#include<stdio.h>
#define N 3
typedef struct node
{
 int value;
 struct node *next;
}rec;
/*************************************************/
void main()
{
rec *head,*p;
char ch;
head=(rec *)malloc(sizeof(rec)); head->next='\0';
do{
  clrscr();
  printf("1..........Append Number");
  printf("\n2..........List Player");
  printf("\n3..........Play Game");
  printf("\n4..........Exit");
  printf("\nChoose option...[1/2/3/4] ");   ch=getch();

 switch(ch)
 {
  case '1':                /*********   Add number   *********/
      append(head);  break;
  case '2':               /**********   List numbers *********/
      list(head);  getch();  break;
  case '3':               /**********   Play *****************/
      printf("\n");
      play(head);      break;
  case '4':               /***********  Exit *****************/
      exit();
  default :
      printf("Invalid"); getch();
 }
}while(1);
}
/**************************************************/
append(rec *p)
{
 int num;  rec *temp=p;
  printf("Enter Value "); scanf("%d",&num);
  if(p->next=='\0')
   {
     p->value=num;
     p->next=p;
     return;
   }
  while(p->next!=temp)
      p=p->next;
  p->next=(rec *)malloc(sizeof(rec));
  p->next->value=num;
  p->next->next=temp;
 return;
 }
 /*************************************************/
list(rec *p)
{
 rec *temp=p;
 printf("\n\n");
 do
 {
  printf("%5d",p->value);
  if(p->next==temp) break;
  p=p->next;
 }while(1);
return;
}
/**************************************************/
play(rec *p)
{
 rec *temp=p,*t;
 int i;
  while(p!=p->next)
  {
   for(i=1;i<N;i++)
    { temp=p; p=p->next;  }
      printf("%5d",p->value);
     temp->next=p->next; free(p); p=temp->next;
  }
  printf("\nWinner is - %d",p->value);  getch();
  }
  /******************************************************/