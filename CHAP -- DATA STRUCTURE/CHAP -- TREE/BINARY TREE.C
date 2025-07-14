#include<stdio.h>
#include<conio.h>
struct tree
{
struct tree *left;
int info;
struct tree *right;
};
struct tree *root;
struct tree  *insert(int element,struct tree *root);
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
root=insert(i,root);
}
else if(x==2)
{
clrscr();
printf("1.Infix notation\n2.Prefix notation\n3.Postfix notation\n");
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
struct tree *insert(int element,struct tree *root)
{
int l=0,r=0;
struct tree *newptr,*parent,*temp;
newptr=(struct tree *)malloc(sizeof(struct tree));
newptr->info=element;
newptr->left=newptr->right=NULL;

if(root==NULL)
{
root=newptr;

}
else
{
temp=root;
parent = root;
while(temp!=NULL)
{
if(temp->left==NULL)
{
temp->left=newptr;
temp=newptr;
break;
}
else if(temp->right==NULL)
{
temp->right=newptr;
temp=newptr;
break;
}
else
{
if(l==0 && r==0)
{
 temp=parent->left;
 l=1;
 }
 else
 {
 temp=parent->right;
 parent=parent->left;
 l=0;
 }
}
}
}

return root;
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