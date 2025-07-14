/*******************************************/
/*PROGRAM TO TRAVERSE LINEAR LINKED LIST   */
/*******************************************/

#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
#include<ctype.h>

struct linear_list
{
	int info;
	struct linear_list *next;
}*start,*newnode,*ptr;

void main()
{
	int item;
int i;
	char ch;
	clrscr();
	newnode=(struct linear_list*)malloc(sizeof(struct linear_list));
	start=newnode;
	do
	{
		printf("\nEnter data: ");
		scanf("%d",&item);
		newnode->info=item;
		printf("\nDo you want to create another node:(y/n)");
		fflush(stdin);
		scanf("%c",&ch);
		if(tolower(ch)=='y')
		{
newnode->next=(struct linear_list*)malloc(sizeof(struct linear_list));
			newnode=newnode->next;
		}
		else
		{
			newnode->next=NULL;
		}
	}while(tolower(ch)!='n');
	printf(“\n Linked List is:\n”);
	ptr=start;
	i=1;
	while(ptr!=NULL)
	{
		printf("\nNode %d : %d",i,ptr->info);
		ptr=ptr->next;
		i++;
	}
	getch();
}
