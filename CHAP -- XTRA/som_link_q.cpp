#include<stdio.h>
#include<conio.h>
#define size 3
struct queue
{
int info[size],rear,front;
};
void main()
{
int ch,num,n;
struct queue q;
void push(struct queue*,int);
int pop(struct queue*);
void display(struct queue*);
q.rear=-1;
q.front=-1;
clrscr();
printf("\n MENU-\n 1.Push \n 2.Pop \n 3.Display \n");
while(1)
{
printf("\n Enter ur choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
		if(q.rear==size-1)
      {
      printf("\n Overflow \n");
      break;
      }
      else
      {
      printf("\n Enter a number to push :\n");
      scanf("%d",&num);
      push(&q,num);
      }
      break;
case 2:
		n=pop(&q);
      printf("\n The deleted element is %d \n",n);
      break;
case 3:
		printf("\n The Queue is :\n");
      display(&q);
      break;
default: return;
}
}
getch();
}


void push(struct queue*p,int num)
{
if(p->rear==-1)
{
p->rear=0;
p->front=0;
}
else
++p->rear;
p->info[p->rear]=num;
}

int pop(struct queue*p)
{
int num;
if(p->front==-1)
{
printf("\n Underflow \n");
return(0);
}
else
{
num=p->info[p->front];
if(p->front==p->rear)
{
 p->front=-1;
 p->rear=-1;
 }
else
++p->front;
return(num);
}
}

void display(struct queue*p)
{
int i;
if(p->front==-1)
printf("\n The queue is empty \n");
else
{
for(i=p->front;i<=p->rear;i++)
printf("\t %d",p->info[i]);
}
}


