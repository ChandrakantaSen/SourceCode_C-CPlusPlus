#include<stdio.h>
#include<conio.h>
struct stack
{
	int info;
	struct stack *next;
};
struct stack *top;
void push(int element);
int pop();
int peek();
void main()
{
	int info,a,x,y;
	char ch;
	clrscr();
	top=NULL;
	do
	{
		printf("Enter your choice\n1:Push\n2:Pop\n3:Access the top element\n");
		scanf("%d",&a);
		if(a==1)
		{
			printf("Enter the element\n");
			scanf("%d",&info);
			push(info);
		}
		else if(a==2)
		{
			x=pop();
			if(x==0)
			{
				printf("Stack is empty\n");
			}
			else
			{
				printf("Element deleted: %d\n",x);
			}
		}
		else if(a==3)
		{
			y=peek();
			printf("Top element: %d\n",y);
		}
		printf("Do you want to continue? y/n\n");
		scanf(" %c",&ch);
		clrscr();
	}
	while(ch=='y');
}
void push(int element)
{
	struct stack *newptr;
	newptr=(struct stack *)malloc(sizeof(struct stack));
	if(newptr==NULL)
	{
		printf("No memory available\n");
		return;
	}
	else
	{
		newptr->info=element;
		newptr->next=top;
		top=newptr;
	}
}
int pop()
{
	int value;
	struct stack *ptr;
	if(top==NULL)
	{
		return 0;
	}
	else
	{
		value=top->info;
		ptr=top;
		top=top->next;
		free(ptr);
		return value;
	}
}
int peek()
{
	return (top->info);
}