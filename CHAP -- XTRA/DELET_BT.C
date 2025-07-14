/****************** Deletion of Binary Tree */
/****************** DELET_BT.C **************/
# include<stdio.h>
typedef struct NODE
{
  int Info;
  struct NODE *Left_Child;
  struct NODE *Right_Child;
}rec;

int depth;
void Output (rec *, int );
rec *Delet_Node (rec *, int );
rec *Create_Tree (int , rec *);
rec *DELE(rec *, rec *);

/************ Output function ***************/

void Output(rec *T, int Level)
{
	int i;
	if (T)
	{
		Output(T->Right_Child, Level+1);
		printf("\n");
		for (i = 0; i < Level; i++)
			printf("  ");
		printf("%c", T->Info);
		Output(T->Left_Child, Level+1);
	}
}

/* Delete a node in the binary tree */

rec * DELE(rec *Node1, rec *Node)
{
	rec *DNode;
	if (Node1->Right_Child != NULL)
		Node1->Right_Child = DELE(Node1->Right_Child, Node);
	else
	{
		DNode = Node1;
		Node->Info = Node1->Info;
		Node1 = Node1->Left_Child;
		free(DNode);
	}
	return (Node1);
}

/********** Deletion in binary tree **************/

rec * Delet_Node (rec *Node, int Info)
{
	rec *Temp;

	if (Node == NULL)
	{
	  printf("\n Information does not exist in the above tree");
	  return (Node);
	}
	else
	{
	  if (Info < Node->Info )
	    Node->Left_Child = Delet_Node (Node->Left_Child, Info);
	  else if (Info > Node->Info )
	    Node->Left_Child = Delet_Node (Node->Right_Child, Info);
	  else
	  {
	    Temp = Node;
	    if (Temp->Right_Child == NULL)
	     {
		Node = Temp->Left_Child; free(Temp);
	     }
	     else if (Temp->Left_Child == NULL)
	     {
		Node = Temp->Right_Child; free(Temp);
	     }
	     else
		Temp->Left_Child = DELE(Temp->Left_Child, Temp);
	  }
	}
   return(Node);
}
/************ Create binary tree ***************/
rec *  Create_Tree (int Info, rec *Node)
{
	if (Node == NULL)
	{
		Node = (rec *) malloc(sizeof(rec));
		Node->Info = Info;
		Node->Left_Child = NULL;
		Node->Right_Child = NULL;
		return (Node);
	}

				
	if (Info < Node->Info)          /* Test for the left child */
	   Node->Left_Child = Create_Tree (Info, Node->Left_Child);
	else if (Info >= Node->Info)   /* Test for the right child */
	   Node->Right_Child = Create_Tree (Info, Node->Right_Child);
	return(Node);
}
/***************** Function main ****************************/
void main()
{
	int Number = 0, Info, depth;
	char choice;
	rec *T = NULL;
	printf("\n Input choice 'b' to break:"); choice = getchar();
	while(choice != 'b')
	{
		fflush(stdin);
		printf("\n Input information of the node: ");
		scanf("%c", &Info);
		T = Create_Tree(Info, T);
		Number++;
		fflush(stdin);
		printf("\n Input choice 'b' to break:");
		choice = getchar();
	}
	fflush(stdin);
	printf("\n Number of elements in the list is %d", Number);
	printf("\n Tree is \n");
	Output(T, 1);

	printf("\n Input the information to which want remove from the above tree: ");
	scanf("%c", &Info);

	T = Delet_Node(T, Info);
	printf("\n Tree after deletion of a node: ");
	Output(T, 1);
}
/************************************/