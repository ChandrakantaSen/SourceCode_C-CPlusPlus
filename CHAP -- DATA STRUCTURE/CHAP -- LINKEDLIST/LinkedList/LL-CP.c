#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node list;

void CreatePrint()
{
	int n,i,c=0;
	list *head,*newNode,*temp;

	printf("\nEnter the number of nodes: ");
	scanf("%d",&n);

	head = (list *)malloc(sizeof(list));

	if(head == NULL)
	{
		printf("\nUnable to allocate memory");
		exit(0);
	}
	else
	{
		printf("\nEnter data item: ");
		scanf("%d",&head->data);

		head->next = NULL;

		temp = head;
		while(temp != NULL)
		{
			printf("Data = %d\n", temp->data);
			temp = temp->next;
		}
	}
}

void main()
{
	CreatePrint();
}
