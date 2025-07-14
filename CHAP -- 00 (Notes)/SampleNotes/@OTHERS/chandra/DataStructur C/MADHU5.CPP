#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct node
{
	int data;
	struct node *prev, *next;
}*start=NULL;
void create();
void display();
void count();
void search();
void addbeg();
void addafter();
void revdisplay();
void del();
void main()
{
	int ch=0;
	clrscr();
	while(1)
	{
		printf("\npress 1 for add\npress 2 for display\npress 3 for counting the no of nodes\npress 4 for searching a value in the linked list\nPress 5 for adding at the beginning\nPress 6 for inserting after a particular node\nPress 7 for displaying in reverse manner\nPress 8 for Delete");
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
			case 4:
						search();
						break;
			case 5:
						addbeg();
						break;
			case 6:
						addafter();
						break;
			case 7:
						revdisplay();
						break;
			case 8:
						del();
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
	p->prev=q;
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
void search()
{
	int k,f=0;
	struct node *q;
	printf("\nEnter a value to be searched in the linked list:");
	scanf("%d",&k);
	q=start;
	while(q!=NULL)
	{
		if(k==q->data)
		{
			f++;
		}
		q=q->next;
	}
	if(f!=0)
	{
		printf(" The value %d is found is the linked list.",k);
	}
	else
	{
		printf("\nThe value %d is not found.",k);
	}
}
void addbeg()
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value:");
	scanf("%d",&p->data);
	p->next=NULL;
	p->next=start;
	start->prev=p;
	start=p;
}
void addafter()
{
	int f=0,k=0;
 struct node * q,*r,*p;
  printf (" enter the the value after node to inserted ");
  scanf("%d",&k);
  q=start;
  while(q!=NULL)
  {
		if(q->data==k)
				 {
				  f=1;
				  break;
				  }
	 q=q->next;
	}
	if (f==0)
		{
			printf(" Invalid key");
		return;
		}
  r=q->next;
  p=(struct node*)malloc(sizeof(struct node));
  printf(" Enter the value to be inserted:");
  scanf("%d",&p->data);
	p->next=r;
	r->prev=p;
	q->next=p;
	p->prev=q;
	 return;
}
void revdisplay()
{
	struct node *q;
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->prev;
	}
}
void del()
{
 int f=0,k=0;
 struct node *q,*r,*p;
  printf (" Enter the the value to be deleted: ");
  scanf("%d",&k);
  q=start;
  while(q!=NULL)
  {
		if(q->data==k)
				 {
				  f=1;
				  break;
				  }
	 p=q;
	 q=q->next;
	}
	if (f==0)
		{
			printf(" Invalid key");
		return;
		}
  p->next=q->next;
  free(q);
 }