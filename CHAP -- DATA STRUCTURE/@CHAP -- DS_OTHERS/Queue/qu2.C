#include<stdio.h>
#include<conio.h>
struct node
{
int info;
struct node *link;
};
struct node *start,*rear,*newptr;
struct node *create_new_node(int i);
void enqueue(struct node *n);
int dequeue();
void display(struct node *x);
int count(struct node *c);
void main()
{
int info,a,c,x;
struct node *np;
char ch;
start=NULL;
rear=NULL;
clrscr();
do
{
printf("ENTER YOUR CHOICE:\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to print data at front\nEnter 4 to print data at end\nEnter 5 to display the queue\nEnter 6 to print number of elements\n");
scanf("%d",&a);
if(a==1)
{
printf("Enter the element\n");
scanf("%d",&info);
np=create_new_node(info);
enqueue(np);
}
else if(a==2)
{
x=dequeue();
printf("\nDequeue operation successfull,Element deleted is %d\n",x);
}
else if(a==3)
{
printf("Element at front is %d\n",start->info);
}
else if(a==4)
{
printf("Elemet at rear is %d\n",rear->info);
}
else if(a==5)
{
if(start==NULL)
{
printf("Queue is empty\n");
}
else
display(start);
}
else if(a==6)
{
c=count(start);
printf("The number of nodes are %d\n",c);
}
printf("\nDo you want to proceed? y/n\n");
scanf(" %c",&ch);
clrscr();
}
while(ch=='y');
getch();
}
/*CREATION OF NEW NODE*/
struct node *create_new_node(int i)
{
newptr=(struct node *)malloc(sizeof(struct node));
newptr->info=i;
newptr->link=NULL;
return newptr;
}
/*INSERTION AT END*/
void enqueue(struct node *n)
{
struct node *temp;
if(start==NULL)
{
start=n;
rear=n;
n->link=NULL;
}
else
{
rear->link=n;
rear=n;
n->link=NULL;
}
}
/*DELETE*/
int dequeue()
{
int x;
struct node *temp;
temp=start;
x=(temp->info);
start=start->link;
free(temp);
return x;
}
/*DISPLAY*/
void display(struct node *x)
{
printf("\nCurrent queue is:\t");
do
{
printf("%d\t",x->info);
x=x->link;
}
while(x!=NULL);
printf("\n");
}
/*COUNT THE NO. OF NODES*/
int count(struct node *c)
{
int co=0;
do
{
co++;
c=c->link;
}
while(c!=NULL);
return co;
}
























