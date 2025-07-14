/************** Createation of Binary Tree ************************/
/************************ BINARY_T.C ***********************/
# include<stdio.h>
typedef struct node
{
	int Info;
	struct node *Left;
	struct node *Right;
}rec;
/************************** Function main ******************/
void main()
{
	rec *Binary_Tree(char *, int, int), *T = NULL;
	void Output(rec *, int );
	char List[100],Info,choice;
	int Number = 0;
	do{
	    printf("\n Input information of the node: ");
	    scanf("%c", &Info);
	    List[Number++] = Info;
	    printf("\n Input choice 'b' to break:");
	    fflush(stdin);  choice = getchar();
	}while(choice != 'b');
	Number --;
	T = Binary_Tree(List, 0, Number);
	Output(T,1);
	getch();
}
/**********************************************************/
rec* Binary_Tree (char *List, int Lower, int Upper)
{
	rec *Node;
	int Mid = (Lower + Upper)/2;
	Node = (rec *) malloc(sizeof(rec));
	Node->Info = List [Mid];
	if ( Lower>= Upper)
	{
		Node->Left = NULL;
		Node->Right = NULL;
		return (Node);
	}

	if (Lower <= Mid - 1)
		Node->Left = Binary_Tree (List, Lower, Mid - 1);
	else
		Node->Left = NULL;
	if (Mid + 1 <= Upper)
		Node->Right = Binary_Tree (List, Mid + 1, Upper);
	else
		Node->Right = NULL;
	return(Node);
}
/********************** Output function *************************/
void Output(rec *T, int Level)
{
	int i;
	if (T!=NULL)
	{
		Output(T->Right, Level+1);
		printf("\n");
		for (i = 0; i < Level; i++)
			printf("   ");
		printf("%c", T->Info);
		Output(T->Left, Level+1);
	}
}
/***********************************************************/