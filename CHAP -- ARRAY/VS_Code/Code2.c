/*
    WAP to input and traverse the array
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[5];
    int i;

    printf("Enter the array elelments: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\narray elelments\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}