/* Creation of TREE */
/* tree.c */
# include<stdio.h>
typedef struct node
{
 int info;
 struct node *left;
 struct node *right;
}rec;
void main()
{
 int info ;
 char choice='a';
 rec *create_tree(int,rec *),*T=NULL;
 void output(rec *,int);
 clrscr();
 do{
   printf("\n Input information of the node: "); scanf("%d", &info);
   T = create_tree(info,T);
   printf("\n Tree is ");
   output(T, 1);
   printf("\n Input choice 'b' to break:");
   fflush(stdin); choice = getchar();
 }while(choice !='b');
}
/* Function to create a tree */
rec * create_tree (int info, rec *node)
{
    if(node == NULL)
     {
       node = (rec *)malloc(sizeof(rec));
       node->info = info; node->left = NULL; node->right = NULL;
       return(node);
     }
   if(node->info>=info)
     node->left=create_tree(info,node->left);
   else
     node->right=create_tree(info,node->right);
return(node);
}
/************ Output function *************/
void  output(rec *t, int level)
{
	int i;
	if (t!=NULL)
	{ output(t->right,level+1);
	  printf("\n ");
	  for(i=0;i<level;i++)
	    printf("   ");
	  printf("%d", t->info);
	  printf("\n");
	  output(t->left, level+1);
	}
}
/************************************************/
