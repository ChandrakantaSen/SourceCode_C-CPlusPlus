/* implement all basic operations into the array*/
#include<stdio.h>
#include<conio.h>
void insert();
void traverse();
int a[10], i=-1;

void main()
{
    int n;
    do
    {
        printf("\n\n************YOUR CHOISE ARE************\n");
        printf("1. Insert\n");
        printf("2. Travers\n");
        printf("3. Exit\n");

        printf("Now enter your choice: \t");
        scanf("%d",&n);

        switch(n)
        {
            case 1:     insert();           break;
            case 2:     traverse();         break;
            case 3:     exit(0);            break;
            default:    printf("YOUR CHOICE IS INVALID");
        }
    }while(n!=3);

    getch();
}

void insert()
{
    if(i<=8)
    {
        printf("\n\nEnter the no. to the array\n");
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

void traverse()
{
    int j;
    for(j=0;j<=i;j++)
    {
        printf("%d\t",a[j]);
    }
}
