/*******************************************/
/*		Double Ended Queue using array     */
/*******************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int q[MAX],front=0,rear=0;

void add_rear();
void add_front();
void delete_rear();
void delete_front();
void display();
void exit_q();

void main()
{
	int ch;
	clrscr();

	printf("\n DQueue Menu");
	printf("\n--------------");
	printf("\n 1. Add to Rear");
	printf("\n 2. Add to Front");
	printf("\n 3. Delete to Rear");
	printf("\n 4. Delete to Front");
	printf("\n 5. Display");
	printf("\n 6. Exit");
	printf("\n--------------");

	do
	{
		printf("\n Enter your choice:-");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : add_rear();		break;
			case 2 : add_front();       break;
			case 3 : delete_rear();  	break;
			case 4 : delete_front(); 	break;
			case 5 : display();			break;
			case 6 : exit_q();			break;
			default: printf("\n Wrong Choice\n");
		}
	}while(ch!=6);
}

void add_rear()
{
  int no;

  printf("\n Enter value to insert : ");
  scanf("%d",&no);

  if(rear==MAX)
  {
	printf("\n Queue is Overflow");
	return;
  }
  else
  {
	rear++;
	q[rear]=no;
	if(rear==0)
		rear=1;
	if(front==0)
		front=1;
  }
}
void add_front()
{
  int no;

  printf("\n Enter value to insert:-");
  scanf("%d",&no);

  if(front<=1)
  {
	printf("\n Cannot add value at front end");
	return;
  }
  else
  {
	front--;
	q[front]=no;
  }
}

void delete_front()
{
	int no;

	if(front==0)
	{
		printf("\n Queue is Underflow\n");
		return;
	}
	else
	{
		no=q[front];
		printf("\n Deleted element is %d\n",no);

		if(front==rear)
		{
			front=0;
			rear=0;
		}
		else
		{
			front++;
		}
	}
}

void delete_rear()
{
	int no;

	if(rear==0)
	{
		printf("\n Cannot delete value at rear end\n");
		return;
	}
	else
	{
		no=q[rear];
		if(front==rear)
		{
			front=0;
			rear=0;
		}
		else
		{
			rear--;
			printf("\n Deleted element is %d\n",no);
		}
	}
}

void display()
{
	int i;
	if(front==0)
	{
		printf("\n Queue is Underflow\n");
		return;
	}
	else
	{
		printf("\n Output");

		for(i=front;i<=rear;i++)
		{
			printf("\n %d",q[i]);
		}
	}
}

void exit_q()
{
	printf("\n\n\n****Program Execution Ends****");
    exit(0);
}