#include<stdio.h>
#include<conio.h>
#define size 3
void push();
void pop();
void display();
int stack[size],top;
void main()
{
  int choice;
  clrscr();
  top=-1;
  printf("\nMENU-\n1.Push\n2.Pop\n3.Display");
  while(1)
  {
    printf("\n\nEnter your choice(1-3)= ");
    scanf("%d",&choice);
    switch(choice)
    {
	 case 1: push();
		 break;
	 case 2: pop();
		 break;
	 case 3: display();
		 break;
	 default:return;
    }
  }
}
void push()
{
  int num;
  if(top==size-1)
	printf("\nOVERFLOW");
  else
   {
	printf("\nEnter a number to push = ");
	scanf("%d",&num);
	top++;
	stack[top]=num;
	printf("\nThe pushed element = %d",stack[top]);
   }
}
void pop()
{
  if(top==-1)
	 printf("\nUNDERFLOW");
  else
    {
	 printf("\nThe popped number is = %d",stack[top]);
	 top--;
     }
}
void display()
{
  int i;
  if(top==-1)
       printf("\nThe stack is empty");
  else
  {
	printf("\nThe stack is -");
	for(i=top;i>=0;i--)
	printf("\n%d",stack[i]);
  }
}

