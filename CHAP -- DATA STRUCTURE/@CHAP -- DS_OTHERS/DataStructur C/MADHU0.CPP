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
void main()
{
	clrscr();
	int ch=0;
	while(1)
	{
		printf("\npress 1 for add\npress 2 for display");
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
	struct node *q;
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
}