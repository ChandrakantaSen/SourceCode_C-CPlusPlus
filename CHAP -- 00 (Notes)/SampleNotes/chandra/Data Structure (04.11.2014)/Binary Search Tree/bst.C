#include<stdio.h>
#include<conio.h>
struct tree
{
struct tree *left;
int info;
struct tree *right;
};
struct tree *root;
void insert(int element);
void display(struct tree *root,int choice);
void main()
{
int i,x,a;
char ch;
clrscr();
root=NULL;
do
{
printf("Enter your choice\n1.Insert an element\n2.Display\n");
scanf("%d",&x);
if(x==1)
{
printf("Enter the element\n");
scanf("%d",&i);
insert(i);
}
else if(x==2)
{
clrscr();
printf("1.Infix notation\n2.Prefix notation\n4.Postfix notation\n");
scanf("%d",&a);
display(root,a);
}
printf("\nDo you want to continue> y/n\n");
scanf(" %c",&ch);
clrscr();
}
while(ch=='y');
getch();
}
void insert(int element)
{
struct tree *newptr,*ptr,*parent;
newptr=(struct tree *)malloc(sizeof(struct tree));
newptr->info=element;
newptr->left=newptr->right=NULL;
if(root==NULL)
{
root=newptr;
}
else
{
parent=NULL;
ptr=root;
while(ptr!=NULL)
{
parent=ptr;
if(element<ptr->info)
{
ptr=ptr->left;
}
else
{
ptr=ptr->right;
}
}
if(element<parent->info)
{
parent->left=newptr;
}
else
{
parent->right=newptr;
}
}
}
void display(struct tree *root,int choice)
{
if(choice==1)
{
if(root!=NULL)
{
display(root->left,choice);
printf("%d\t",root->info);
display(root->right,choice);
}
}
else if(choice==2)
{
if(root!=NULL)
{
printf("%d\t",root->info);
display(root->left,choice);
display(root->right,choice);
}
}
else if(choice==3)
{
if(root!=NULL)
{
display(root->left,choice);
display(root->right,choice);
printf("%d\t",root->info);
}
}
}