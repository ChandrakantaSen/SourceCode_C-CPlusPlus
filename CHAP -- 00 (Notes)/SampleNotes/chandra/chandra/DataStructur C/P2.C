#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
int data;
struct node *next;
}*start=NULL;
void create()
{
char ch;
do
{
struct node *new_node,*current;
new_node=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the data");
scanf("%d",&new_node->data);
new_node->next=NULL;
if(start==NULL)
{
start=new_node;
current=new_node;
}
else
{
current->                                                                                                                                                                              next=new_node;
current=new_node;
}
printf("\nDo you want to create another?");
ch=getche();
}while(ch!='n');
}
void search()
{
int search ,c=0,f=0;
struct node *new_node;
printf("\nEnter the value you want to search:-");
scanf("%d",&search);
new_node=start;
while(new_node!= NULL)
{
c++;
if(new_node->data==search)
{
printf("\nThe value has been found in the %dth node in the linked list",c);
f=1;
break;
}
else
{
new_node=new_node->next;
}
}
if(f==1)
{
printf("\nSuccesfully found");

}
else
{
printf("\nWrong input");
}
}
void main()
{
create();
search();
getch();
}


