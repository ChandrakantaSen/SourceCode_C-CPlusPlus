/* implement all basic operations into the array*/
#include<stdio.h>
#include<conio.h>
void insert();
void del();
void traverse();
int a[10], i=-1;

void main()
{
    int n;
    do
    {
        printf("\n\n************YOUR CHOISE ARE************\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Travers\n");
        printf("4. Exit\n");

        printf("Now enter your choice: \n");
        scanf("%d",&n);

        switch(n)
        {
            case 1:     insert();           break;
            case 2:     del();              break;
            case 3:     traverse();         break;
            case 4:     exit(0);            break;
            default:    printf("YOUR CHOICE IS INVALID");
        }
    }while(n!=4);

    getch();
}

void insert()
{
    if(i<=8)
    {
        printf("Enter the no.\n");
        while(i<=8)
        {
            i++;
            scanf("%d",&a[i]);
        }
    }
    else
    {
        printf("The array is full");
    }
}
void del()
{
    int item,j,flag=0,pos;
    printf("Enter the no. to delete:");
    scanf("%d",&item);

    for(j=0; j<=i;j++)
    {
        if(a[i]=item)
        {
            flag=1;
            pos=j;
        }
    }

    if(flag)
    {
        for(j=pos; j<=i; j++)
        {
            a[j]=a[j+1];
        }
        i--;
    }
    else
    {
        printf("The no. is not in list,Sorry\n");
    }
}
void traverse()
{
    int j;
    for(j=0;j<=i;j++)
    {
        printf("%d\t",a[j]);
    }
}
