#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int q[MAX],front=-1,rear=-1;
void add_rear();
void delete_front();
void display();

void main()
{
          int ch;
          clrscr();
          do
          {

          //clrscr();
          printf("\n DQueue Menu");
          printf("\n--------------");
          printf("\n 1. AddRear");
          printf("\n 2. DeleteFront");
          printf("\n 3. Display");
          printf("\n 6. Exit");
          printf("\n--------------");
          printf("\n Enter your choice:-");
          scanf("%d",&ch);

                   switch(ch)
                   {
                             case 1:
                             
                             add_rear();
                             printf("\n Queue after insert at rear");
                             display();
                             break;
                                                                                                                    
                                                   
                             
                             case 2:
                            
                             delete_front();
                             printf("\n Queue after delete at front");
                             display();
                             break;
                                                       


								   case 3:
                                      
                                                display();
                                                break;
                                      
                             case 4:
                                      
                                                exit(0);
                                                break;
                                      
                             default:
                                      
                                                printf("\n Wrong Choice\n");

                                      
                   }
          } while(ch!=4);
}

void add_rear()
{
          int no;
          printf("\n Enter value to insert : ");
          scanf("%d",&no);
          if(rear==MAX)
          {
                   printf("\n Queue is Overflow");
                   return;
          }
          else
          {
                   rear++;
                   q[rear]=no;
                   if(rear==0)
                             rear=1;
                    if(front==0)
                             front=1;
          }
}


void delete_front()
{
          int no;
          if(front==0)
          {
                   printf("\n Queue is Underflow\n");
                   return;
          }
          else
          {
                   no=q[front];
                   printf("\n Deleted element is %d\n",no);
                   if(front==rear)
                   {
                             front=0;
                             rear=0;
                   }
                   else
                   {
                             front++;
                   }
          }
}



void display()
{
         for(i=0;i<=rear;i++)
                   {
                             printf("\n %d",q[i]);
                   }
          }
}

