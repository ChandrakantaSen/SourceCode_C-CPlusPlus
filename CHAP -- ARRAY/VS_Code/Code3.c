/*
    WAP to find the sum of an array
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5], i, sum = 0;
    printf("Enter the array elelments: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }
    
    printf("\nSum of array elements: %d",sum);
    return 0;
}