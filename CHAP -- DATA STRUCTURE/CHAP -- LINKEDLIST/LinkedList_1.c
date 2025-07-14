#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <string.h>


struct employee
{
	char name [21];
	long phone;
	char address[41];
};

struct node
{
	struct employee emp;
	struct node* Pnext;
	struct node* Pprev;
};

int count=0;
struct node* Phead;
struct node* Ptail;

int add (struct employee data);
struct node*searchbyname (char name[]);


int main()
{
	struct employee emp;
	struct node*ppt;
	int x,i;
	char ch;


	////MENU////
	clrscr();
	
	printf("press[a] to->Add node");
	
	
	printf("press[s] to->Search node");


	

	///////processing///////
	do
	{
		printf("\n");
		ch=getch();
		switch (ch)
		{

			case 'a':
			printf("\n Employee name: ");
			scanf("%s",emp.name);
			printf("phone: ");
			scanf("%ld",&emp.phone);
			printf("address: ");
			scanf("%s",&emp.address);

			x=add(emp);
			if(x==1)
			{
				printf("Your node has been added");
				count++;
			}
			else
			{
				printf("Addition can't be done");
			}
			break;


			case 's':
			printf("\n\nType the employee's name: ");
			scanf("%s",emp.name);
			ppt=searchbyname(emp.name);

			if(ppt==NULL)
			{
				printf("the name is not found");
			}
			else
			{

				printf("employee phone is:%ld\n",ppt->emp.phone);
				printf("employe address is:%s",ppt->emp.address);
				break;
			}

		}
	}while(ch!=27);


return 0;
}







/////creation of node//////
struct node* create (struct employee emp)
{
	struct node* ptr;
	ptr=(struct node*) malloc (sizeof(struct node));

	if(ptr)
	{
		ptr->emp=emp;
		ptr->Pprev=NULL;
		ptr->Pnext=NULL;
	}
	return ptr;
}

/////addition of node///////
int add (struct employee emp)
{
	int x=0;
	struct node*ptr;
	ptr=create (emp);
	if (ptr)
	{
		if(Phead==NULL)
		{
			Phead=Ptail=ptr;
		}
		else
		{
					Ptail->Pnext=ptr;
					ptr->Pprev=Ptail;
					Ptail=ptr;

		}
		x=1;
	}
return x;

}

///////bin_search function//////////
struct node*searchbyname (char name[])
{
	struct node*ptr;
	struct node*Pmid;
	int i;
	int mid;
	int low;
	int high;

	ptr=NULL;



	low=0;
	high=count-1;

	while((low<=high))
	{

		mid=(low+high)/2;
		Pmid=Phead;


		for(i=0;i<mid;i++)
		{
			Pmid=Pmid->Pnext;
		}

		
		if(strcmp(Pmid->emp.name,name)==0)
		{
			ptr=Pmid;
			break;
		}
		else
		{
			if(strcmp(Pmid->emp.name,name)>0)
			{
				high=mid-1;

			}
			else
			{
				   if(strcmp(Pmid->emp.name,name)<0)
				   {
					low=mid+1;
				   }
			}
		}




	}

return ptr;
}







