/**************************************/
/*    Simple Queue using array	      */
/**************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5

int arr[ MAX];
int rear = - 1;
int front = - 1;

void insert();
void del();
void display();

void main()
{
	int choice;
	
	printf("\n *** Menu Operations *** \n" );
	printf("1.Insert elements\n" );
	printf("2.Delete elements\n" );
	printf("3.Display all elements\n" );
	printf("4.Quit \n" );
	
	while(1)
	{
		printf("\nEnter your choice : " );
		scanf("%d" ,&choice);
		
		switch (choice)
		{
			case 1:
			insert();  break;
			case 2:
			del();  break;
			case 3:
			display();  break;
			case 4:
			exit(0);
			default:
			printf("Wrong choice \n" );
		} /*End of switch*/
	} /*End of while*/
} /*End of main()*/

void insert()
{
	int add_item;
	
	if (rear == MAX - 1)
	printf(" . . . . . . . . . . . . .Queue Overflow \n" );
	else
	{
		if(front == - 1)
		{
			/*If queue is initially empty */
			front = 0;
			printf(" . . . . . . . . . . . . .Queue is empty \n" );
		}
		printf("\n Insert the element in queue : " );
		scanf("%d" , &add_item);
		
		rear = rear + 1;
		arr[rear] = add_item;
	}
} /*End of insert()*/

void del()
{
	if (front == - 1 || front > rear)
	{
		printf(" . . . . . . . . . . . . .Queue Underflow \n" );
	}
	else
	{
		printf("\n Element deleted from queue is : %d\n",arr[front]);
		front = front + 1;
	}
} /*End of del() */

void display()
{
	int i;
	
	if (front == - 1)
	printf(" . . . . . . . . . . . . Queue is empty \n" );
	else
	{
		printf("\n Queue is :\n");
		
		for (i = front; i <= rear; i++)
		printf(" %d ",arr[i]);
		
		printf("\n");
	}
} /*End of display() */