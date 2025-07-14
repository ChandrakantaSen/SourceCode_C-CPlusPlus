   #include<stdio.h>
   #include<conio.h>
   #include<stdlib.h>
   struct tree
   {
    int info;
    struct tree *left;
    struct tree *right;
   };
   struct tree *root;
   void insert(int element);
   void display(struct tree *root,int choice);
   void main()
   {
   int i,x,a,y;
   char ch;
   root=NULL;
   do
   {
   printf("\nEnter ur choice 1)Insert\n\n2>Display");
   scanf("%d",&x);
   if(x==1)
   {
    printf("\nEnter the elements");
    scanf("%d",&i);
    insert(i);
   }
   else if(x==2)
   {
    printf("1.Infix2.prefix3.postfix");
    scanf("%d",&a);
    display(root,a);
   }
  printf("\nDo you want to continue y\n");
  scanf("%d",&ch);
  }
    while(ch==y);
    getch();
}
void insert(int element)
{
 struct tree *newptr,*ptr,*parent;
 newptr=(struct tree*)malloc(sizeof(struct tree));
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
     printf("%d",root->info);
     display(root->right,choice);
   }
 }
 if(choice==2)
 {
  if(root!=NULL)
   {
    printf("%d",root->info);
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
     printf("%d",root->info);
    }
  }
 }                  
