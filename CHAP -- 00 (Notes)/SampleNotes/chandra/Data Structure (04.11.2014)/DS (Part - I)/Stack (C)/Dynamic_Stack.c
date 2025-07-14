	/* Create dynamic stack*/
	
	#include<stdio.h>
    #include<conio.h>
    #include<stdlib.h>

    struct stack
    {
    int info;
    struct stack *link;
    };
    struct stack *start=NULL;

    void main()
    {
    int ch;
    clrscr();
    while(ch!=6)
    {
    clrscr();
    printf("1 for Push\n");
    printf("2 for Pop\n");
    printf("3 for Peep\n");
    printf("4 for Change\n");
    printf("5 for Display\n");
    printf("6 for exit\n");
    printf("Enter ur choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: push();
        break;
    case 2: pop();
        break;
    case 3: peep();
        break;
    case 4: change();
        break;
    case 5: display();
        break;
    case 6: break;
    }
    }
    }

    push()
    {
     struct stack *new,*temp;
     int i=0;
     for(temp=start;temp!=NULL;temp=temp->link)
     {
     i++;
     }
     if(i==5)
     {
     printf("Stack Overflow");
     getch();
     }
     else
     {
     new=(struct stack *)malloc(sizeof(struct stack));
     printf("Enter value for stack: ");
     scanf("%d",&new->info);
     new->link=start;
     start=new;
     }
     }

    pop()
    {
    struct stack *temp,*temp2;
    int i=0;
        for(temp=start;temp!=NULL;temp=temp->link)
         {
         i++;
         }
        if(i==0)
        {
        printf("Underflow");
        getch();
        }
        else
        {
        temp2=start->link;
        start=temp2;
        printf("\n***The value has been poped***\n");
        }
    }

    display()
    {
    struct stack *temp;
    printf("\n****Stack Values****\n");
    for(temp=start;temp!=NULL;temp=temp->link)
       {
       printf("%d\n",temp->info);
       }
    getch();
    }

    peep()
    {
    struct stack *temp;
    int pos,i=0,j=0;
    printf("Please enter the position number: ");
    scanf("%d",&pos);
    for(temp=start;temp!=NULL;temp=temp->link)
     {
     i++;
     }
    if(pos>i)
       {
       printf("\nOver Limit\n");
       getch();
       }
     else
       {
       temp=start;
       for(j=0;j<pos-1;j++)
           {
          temp=temp->link;
           }
        printf("\nThe value of position %d is :%d",pos,temp->info);
        getch();
       }
    }

    change()
    {
    struct stack *temp,*new;
    int pos,i=0,j=0;
    printf("Please enter the position number: ");
    scanf("%d",&pos);
    for(temp=start;temp!=NULL;temp=temp->link)
     {
     i++;
     }
    if(pos>i)
       {
       printf("\nOver Limit\n");
       getch();
       }
     else
       {
       new=(struct stack *)malloc(sizeof(struct stack));
       printf("Enter value for stack: ");
       scanf("%d",&new->info);
       temp=start;
       for(j=0;j<pos-1;j++)
           {
          temp=temp->link;
           }
        temp->info=new->info;
       }
    }