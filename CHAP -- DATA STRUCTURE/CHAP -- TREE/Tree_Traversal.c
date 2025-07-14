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
void pd(struct tree *root,int value,int option);
void main()
{
int i,x,a,data;
char ch;
struct tree *s;
clrscr();
root=NULL;
do
{
printf("Enter your choice\n1.Insert an element\n2.Display\n");
printf("3.Find predecessor and successor in Inorder traversal\n");
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
printf("1.Inorder notation\n2.Preorder notation\n4.Postorder notation\n");
scanf("%d",&a);
display(root,a);
}
else if(x==3)
{
clrscr();
printf("Enter the element\n");
scanf("%d",&data);
printf("1.Inorder notation\n2.Preorder notation\n3.Postorder notation\n");
scanf("%d",&a);
pd(root,data,a);
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
void pd(struct tree *root,int data,int option)
{
int array[20];
int i=0,k=0,a=0;
if(option==1)
{
if(root!=NULL)
{
pd(root->left,data,option);
array[i]=root->info;
i++;
pd(root->right,data,option);
}
}
else if(option==2)
{
if(root!=NULL)
{
array[i]=root->info;
i++;
pd(root->left,data,option);
pd(root->right,data,option);
}
}
else if(option==3)
{
if(root!=NULL)
{
pd(root->left,data,option);
pd(root->right,data,option);
array[i]=root->info;
i++;
}
}

for(i=0;i<19;i++)
{
if(array[i]==data)
{
k=i;
}
else
i++;
}
if(k==0)
{
printf("No Predecessor :-(\n");
}
else
printf("Predecessor = %d",array[k-1]);
printf("Successor = %d",array[k+1]);
}

