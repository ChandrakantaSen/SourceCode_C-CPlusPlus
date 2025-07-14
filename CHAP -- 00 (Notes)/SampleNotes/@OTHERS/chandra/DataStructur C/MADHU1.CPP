#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *next;
}*start=NULL;
void create();
void display();
void count();
void main()
{
	clrscr();
	int ch=0;
	while(1)
	{
		printf("\npress 1 for add\npress 2 for display\npress 3 for counting the no of nodes");
		printf("\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
						create();
						break;
			case 2:
						display();
						break;
			case 3:
						count();
						break;
			default:
						exit(0);
		}
	}
}
void create()
{
	struct node *p,*q;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value:");
	scanf("%d",&p->data);
	if(start==NULL)
	{
		start=p;
		return;
	}
	q=start;
	while(q->next!=NULL)
		q=q->next;
	q->next=p;
	return;
}
void display()
{
	int c=0;
	struct node *q;
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}
void count()
{
	int c=0;
	struct node *q;
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
		c++;
	}
	printf("\nThe no of nodes ion the linked list is %d",c);
}