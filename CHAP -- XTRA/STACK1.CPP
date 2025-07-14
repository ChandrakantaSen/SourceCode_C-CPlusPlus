#include<stdio.h>
#include<conio.h>
# define SIZE 5
struct stack
 {
   int info[SIZE],top;
   };
void main()
{
 int num,choice;
 struct stack s;
 void push(struct stack*,int);
 void pop(struct stack*);
 void display(struct stack*);
 s.top=-1;
 clrscr();
 printf("\nMenu-\n1.Push\n2.Pop\n3.Display\n4.Exit");
 while(1)
 {
   printf("\nEnter your choice(1-4)");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1 : printf("\nEnter a number to push");
	      scanf("%d",&num);
	      push(&s,num);
	      break;
     case 2 : pop(&s);
	      break;
     case 3 : display(&s);
	      break;

     default: return;
   }
 }
}
void push(struct stack*p,int n)
{
  if(p->top==SIZE-1)
  {
    printf("\nOverflow");
    getch();
    return;
  }
  ++p->top;
  p->info[p->top]=n;
}
void pop(struct stack*p)
{
  if(p->top==-1)
  {
    printf("\nUnderflow");
    getch();
    return;
  }
  printf("\nPopped number=%d",p->info[p->top]);
  --p->top;
}
void display(struct stack*p)
{
  int i;
  if(p->top==-1)
  {
    printf("\nEmpty stack");
    getch();
    return;
  }
  for(i=p->top;i>=0;i--)
  printf("\n%d",p->info[i]);
}
