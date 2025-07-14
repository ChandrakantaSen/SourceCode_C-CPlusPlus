#include<stdio.h>
#include<conio.h>
#define SIZE 8
int queue[SIZE],front=-1,rear=-1,top=-1,stack[SIZE];
void insertion(int num);
int deletion();
void display();
void reverse();
void push(int num);
int pop();
void main()
{
  int choice,n,num;
  clrscr();
  printf("\nMENU-\n1.Push\n2.Pop\n3.Display\n4.Reverse\n");
  while(1)
  {
     printf("\n\nEnter your choice(1-4)=");
     scanf("%d",&choice);
     switch(choice)
     {
	case 1:if(rear==SIZE-1)
	       printf("\nOVERFLOW");
	       else
	       {
		 printf("\nEnter a no to push = ");
		 scanf("%d",&num);
		 insertion(num);
		}
	       break;

	case 2:n=deletion();
	       printf("\nThe deleted element is = %d",n);
	       break;

	case 3:printf("\nThe QUEUE is - ");
	       display();
	       break;

	case 4:reverse();
	       break;

	default:return;
     }
  }
getch();
}
void insertion(int num)
{
    if(rear==-1)
    {
      rear=0;
      front=0;
    }
     else
     rear=rear+1;
     queue[rear]=num;

}

int deletion()
{
  int num;
  if(front==-1){
  printf("\nUNDERFLOW");
  return(0);    }
  else
  {
    num=queue[front];
    if(front==rear)
    {
      front=-1;
      rear=-1;
    }
    else
    front=front+1;
    return(num);
  }
}

void display()
{
  int i;
  if(front==-1)
  printf("\nThe queue is empty");
  else
  {
   // printf("The QUEUE is - ");
    for(i=front;i<=rear;i++)
    printf("\n%d",queue[i]);
  }
}

void reverse()
{
  int t;
  while(rear>-1)
  {
    t=deletion();
    push(t);
  }
   rear=-1;
   front=0;
   while(top!=-1)
   {
    t=pop();
    insertion(t);
    }
    printf("\nThe reversed QUEUE is - ");
    display();
}




void push(int num)
{
  if(top==SIZE-1)
	printf("\nOVERFLOW");
  else
   {
	top++;
	stack[top]=num;
   }
}


int pop()
{
  int r;
  if(top==-1)
	 printf("\nUNDERFLOW");
  else
    {
	 r=stack[top];
	 top--;
     }
   return(r);
}

