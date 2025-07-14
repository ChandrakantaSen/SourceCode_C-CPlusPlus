#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 int queue[20];
 int front,rear;
 void display(void);

 void main()
 {
 int choice,item;
 void initqueue();
 initqueue();
 while(1)
 {
 printf("\n MENU \n");
 printf("1. Insert \n");
 printf("2. Delete \n");
 printf("3. display \n");
 printf("4. Exit \n");
 printf("\n\n");
 printf("\n Enter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
       if (rear<4)
       {
       printf("\n Enter the no:");
       scanf("%d",&item);
       if(front==0)
       {
        front=1;
        rear=1;
        }
    else
    {
     rear=rear+1;
     }
     printf("\nF=%d",front);
     printf("\nR=%d",rear);
     queue[rear]=item;
     }
     else
     printf("\n queue is full");
     getch();
     break;

 case 2:
       if(front==0||front>rear)
       {
       printf("\n queue is empty");
       }
       else
       {
       item=queue[front];
       printf("\n deleted no. is=%d from F=%d\n",item,front);
       front=front+1;
       }
       getch();
       break;
case 3:
       display();
       getch();
       break;
case 4:
        exit(0);
        break;
default:
        printf("\n you have enter wrong choice!!!!");
        getch();
        break;
        }
        }
 }
void initqueue()
{
    front=rear=0;
}
void display()
{
    int i;
    printf("\n F=%d",front);
    printf("\n R=%d",rear);
    printf("\n");
    for(i=front;i<=rear;i++)
    printf("\t %d",queue[i]);
}
