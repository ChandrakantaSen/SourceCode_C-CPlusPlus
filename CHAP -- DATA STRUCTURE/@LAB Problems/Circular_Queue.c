/************************************************/
/*			   Circular Queue using Array		*/
/************************************************/
#include<stdio.h>
#include<conio.h>
#define max 5

int front,rear,q[max];

void insert();
void del();
void display();

void main()
{
	int c;
	front = -1;
	rear = -1;

	//clrscr();

	printf("\n****Menu Operations****\n");
	printf(" 1: Insertion\n 2: Deletion\n 3: Display\n 4: Exit\n");
	do
	{
		printf("\n\nenter choice: ");
		scanf("%d",&c);

		switch(c)
		{
			case 1:
					insert();break;
			case 2:
					del();break;
			case 3:
					display();break;
			case 4:
					printf("\n\n\t\t*****Program Ends*****");break;
			default:
					printf("\n\nWrong Choice");break;
		}
	}while(c!=4);

	getch();
}

void insert()
{
	int x;
	if((front==0&&rear==max-1)||(front==rear+1))
	{
		printf("\n\nQueue is overflow\n");
		return;
	}
	if(front==-1)
	{
		front=rear=0;
	}
	else
	{
		if(rear==max-1)
		{
		   rear=0;
		}
		else
		{
		   rear++;
		}
	}

	printf("\nenter the no: ");
	scanf("%d",&x);

	q[rear]=x;
	printf("%d successfully inserted...",x);
}
void del()
{
	int y;
	if(front==-1)
	{
		printf("\n\nQueue is underflow\n");
		return;
	}
	y=q[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		if(front==max-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
	printf("\n %d successfully deleted\n",y);
}

void display()
{
	int i,j;
	if((front == -1) && (rear == -1))
	{
		printf("\n\nQueue is empty\n");
		return;
	}
	printf("\n\n\t------: Elements are :------\n\n");

	for(i=front;i!=rear;i=(i+1)%max)
	{
		printf("\t%d",q[i]);
	}
	printf("\t%d",q[rear]);
}