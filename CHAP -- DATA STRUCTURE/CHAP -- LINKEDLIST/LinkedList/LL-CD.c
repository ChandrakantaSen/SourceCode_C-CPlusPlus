#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node list;
list *start = NULL;

void create()
{
	char ch;
	do
	{
	  list *new_node,*current;
	  new_node=(list *)malloc(sizeof(list));

	  printf("\nEnter the data : ");
	  scanf("%d",&new_node->data);
	  new_node->next=NULL;

	  if(start==NULL)
	  {
		  start=new_node;
		  current=new_node;
	  }
	  else
	  {
		current->next=new_node;
		current=new_node;
	  }

	  printf("\nDo you want to create another(y/n): ");
	  ch=getche();
	}while(ch!='n');
}
//------------------------------------------------------------------

void display()
{
	list *new_node;
	printf("\n\nThe Linked List : \n");
	new_node=start;

	while(new_node!=NULL)
	{
		printf("%d--->",new_node->data);
		new_node=new_node->next;
	}
	printf("NULL");
}
//------------------------------------------------------------------

void main()
{
	create();
	display();
}
