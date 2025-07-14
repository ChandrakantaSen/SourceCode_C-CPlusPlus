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
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\nDQueue Menu");
		printf("\n------------");
		printf("\n1.AddRear");
		printf("\n2.AddFront");
		printf("\n3.DeleteRear");
		printf("\n4.DeleteFront");
		printf("\n5.Display");
		printf("\n6.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			{
				add_rear();
				printf("\nQueue after insert at rear:");
				display();
				break;
			}
			case 2:
			{
				add_front();
				printf("\nQueue after insert at front:");
				display();
				break;
			}
			case 3:
			{
				delete_rear();
				printf("\nQueue after delete at rear:");
				display();
				break;
			}
			case 4:
			{
				delete_front();
				printf("\nQueue after delete at front:");
				display();
				break;
			}
			case 5:
			{
				display();
				break;
			}
			case 6:
			{
				exit(0);
				break;
			}
			default:
			{
				printf("\nWrong Choice.\n");
			}
		}
	}
		while(ch!=6);
}
void add_rear()
{
	int no;
	printf("\nEnter a value to insert:");
	scanf("%d",&no);
	if(rear==MAX)
	{
		printf("\nQueue is overflowed.");
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
	printf("\nEnter value to insert:");
	scanf("%d",&no);
	if(front<=1)
	{
		printf("\nCannot add value at front end.");
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
		printf("\nQueue is underflowed.");
		return;
	}
	else
	{
		no=q[front];
		printf("\nDeleted element is %d\n",no);
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
		printf("\nCannot delete value at rear end.");
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
			printf("\nDeletd element is %d\n",no);
		}
	}
}
void display()
{
	int i;
	if(front==0)
	{
		printf("\nQueue is underflowed\n");
		return;
	}
	else
	{
		printf("\nOutput");
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",q[i]);
		}
	}
}