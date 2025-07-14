#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*start=NULL;

void create();
void display();
void search();

int main()
{
 	int ch;
	 while(1)
	 {
	 	printf("choose... 1. create node \n 2.display \n 3. search \n 4. exit\n");
	 	switch(ch)
	 	{
	 		case 1:
	 			create();
	 			break;
 			case 2:
 				display();
 				break;
			case 3:
				search();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("invalid choice \n");
	 	}
	 } 	
	 return (0);
}
void create()
{

  struct node *p,*q;

  p=(struct node *)malloc(sizeof(struct node));
  printf("\n Enter the data : ");
  scanf("%d",&p->data);
  p->next=NULL;

  if(start==NULL)
  {
  start=p;
  return;
  }
    q=start;
    while(q->next!=NULL)
    					q=q->next;
          q->next=p;
}

void display()
{
struct node *q;
 printf("The Linked List : n");
 q=start;
 while(q!=NULL)
   {
   printf("%d--->",q->data);
   q=q->next;
   }
}

 void search()
 {
   int item=0,f=0;
 struct node *q;
  printf (" enter the data to searched");
  scanf("%d",&item);
  q=start;
  while(q!=NULL)
  {
      if(q->data==item)
              {
               f=1;
               break;
			   }
    		   q=q->next;
   }
   if (f==1)
       printf(" search successful \n");
       else
       printf(" searching not sucessful \n");
  }


