/*	Create Dynamic Queue */
#include<stdio.h>
#include<conio.h>

struct queue
{
int info;
struct queue *link;
};
struct queue *start=NULL;

constint n=5;
int q[5];
int f=-1;
int r=-1;
int i=0;
void main()
{
int ch;
while(ch!=4)
{
clrscr();
printf("1 for Insert\n");
printf("2 for Delete\n");
printf("3 for Display\n");
printf("4 for Exit\n");
printf("\nEnter ur choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: qinsert();
    break;
case 2: qdelete();
    break;
case 3: display();
    break;
case 4: break;
}
}
}

qinsert()
{
struct queue *new,*temp;
if(i>5)
 {
 printf("The queue is full\n");
 getch();
 }
else
 {
 new=(struct queue *)malloc(sizeof(struct queue));
 printf("Please enter info: ");
 scanf("%d",&new->info);
 new->link=start;
 start=new;
 i++;
 }
}

qdelete()
{
struct queue *temp;
int n=0,j;
for(temp=start;temp!=NULL;temp=temp->link)
   {
   n++;
   }
if(n==0)
   {
   printf("There is node in the Queue");
   getch();
   }
elseif(n==1)
   {
   temp=start->link;
   start=temp;
   }
else
   {
     temp=start;
     for(j=0;j<n-2;j++)
     {
      temp=temp->link;
     }
     temp->link=NULL;
   }
}

display()
{
struct queue *temp;
printf("\nThe Queue Info\n");
for(temp=start;temp!=NULL;temp=temp->link)
  {
  printf("%d ",temp->info);
  }
getch();
}