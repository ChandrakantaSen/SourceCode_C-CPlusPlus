#include<stdio.h>
#include<conio.h>
#define max 5
int front,rear,q[max];
void enqueue(void);
void dequeue(void);
void qdisplay(void);
void main(void)
{
     int c;
     clrscr();
     front=rear=-1;
     do
     {
	  printf("1:insert\n2:deletion\n3:display\n4:exit\nenter choice:");
	  scanf("%d",&c);
	  switch(c)
	  {
	       case 1:enqueue();
	       break;
	       case 2:dequeue();
		break;
	       case 3:qdisplay();
		break;
	       case 4:printf("pgm ends\n");break;
	       default:printf("wrong choice\n");break;
	  }
     }while(c!=4);
     getch();
}
void enqueue(void)
{
     int x;
     if((front==0&&rear==max-1)||(front==rear+1))                         //condition for full Queue
     {
	  printf("Queue is overflow\n");
     }
     if(front==-1)
     {
	  front=rear=0;
     }
     else
     {
	  if(rear==max-1)
	  {
	       rear=0;
	  }
		  else
	  {
	       rear++;
	  }
     }
     printf("enter the no:\n");
     scanf("%d",&x);
     q[rear]=x;
     printf("%d succ. inserted\n",x);
    }
void dequeue(void)
{
     int y;
     if(front==-1)
     {
	  printf("q is underflow\n");return;
     }
     y=q[front];
     if(front==rear)
     {
	  front=rear=-1;
     }
     else
     {
	  if(front==max-1)
	  {
	       front=0;
	  }
	  else
	  {
	       front++;
	  }
     }
     printf("%d succ. deleted\n",y);

}
void qdisplay(void)
{
     int i,j;
     if(front==rear==-1)
     {
	  printf("q is empty\n");return;
     }
     printf("elements are :\n");
     for(i=front;i!=rear;i=(i+1)%max)
     {
	  printf("%d\n",q[i]);
     }
     printf("%d\n",q[rear]);

}
