//Program by :-   Sudipta saha
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
//-------------------------------------------------
struct node
{
int data;
struct node *next,*prev;
}*start=NULL;
//------------------------------------------------------------

void create()
{

  struct node *new_node,*current;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("nEnter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
	 new_node->prev=NULL;
	 start=new_node;
  //current=new_node;

  return;
  }
 /**else
  current->next=new_node;
  current=new_node;

	 */
	 current=start;
	 while(current->next!=NULL)
			 current =current->next;
			 current->next=new_node;
			 new_node->prev=current;

}
//------------------------------------------------------------------

void display()
{
 struct node *new_node;
 printf("The Linked List : n");
 new_node=start;
 while(new_node!=NULL)
	{
	printf("%d--->",new_node->data);
	new_node=new_node->next;
	}
  printf("NULL");
}
//----------------------------------------------------

void count ()
{
int c=0;
struct node *current;
current =start;
while(current!=NULL)
{
		current=current->next;
		  c=c+1;
		  }
		  printf(" no of list = %d", c);
 }

 void search()
 {
	int item=0,f=0;
 struct node * current;
  printf (" enter the data to searched");
  scanf("%d",&item);
  current=start;
  while(current!=NULL)
  {
		if(current->data==item)
				  f=1;
	 current=current->next;
	}
	if (f==1)
		 printf(" search sucessfull");
		 else
		 printf(" searching not sucessfull");
  }



	void addafter()
 {
	int item=0,f=0;
 struct node * current,*r,*p;
  printf (" enter the the value after node to inserted ");
  scanf("%d",&item);
  current=start;
  while(current!=NULL)
  {
		if(current->data==item)
				 {
				  f=1;
				  break;
				  }
	 current=current->next;
	}
	if (f==0)
		{
			printf(" Invalid key");
		return;
		}
	 p=(struct node*)malloc(sizeof(struct node));
  printf(" Enter the value to be inserter");
  scanf("%d",&p->data);
	r=current->next;
	p->next=r;
	current ->next=p;
	p->prev=current;
	 return;
  }
void addbeg()
{
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
printf("Enter the value to be inserted ");
scanf("%d",&p->data);
p->next=NULL;
p->prev=NULL;
p->next=start;
start=p;
p=NULL;
}
 void rev()
 {
 struct node *p;
 p=start;
 while(p->next!=NULL)
 p=p->next;
 while(p!=NULL)
 {
 printf("\n %d",p->data);
 p=p->prev;
 }
 }



void main()
{
clrscr();
int ch;
while(1)
{
printf("\n 1 crearte node \n 2 disply    3  count \n 4 searrch \n 5 addafetr \n  6 addbeggining \n 7 reverse \n 8 exit");
scanf("%d",&ch);
switch(ch)
{

case 1:
create();
break;
case 2 :
display();
 break ;

 case 3:
		  count();
			  break;

 case 4:
			  search();
				break;
  case 5:
				addafter();
				break;

	case 6:
			  addbeg();
				 break;
 case 7 :
	rev();
	 break;
	 case 8:
		exit(0);
		break;
	default:
	printf("Wrong choice");

}


}
}