#include<stdio.h>
#include<conio.h>
void insert();
void del();
void traverse();
void merged();
int a[10], i=-1;
void main()
{
int n;
do
{
printf("************YOUR CHOISE ARE************\n");
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Traverse\n");
printf("4. Merged\n");
printf("5. Exit\n");
printf("Now enter your choice: \n");
scanf("%d",&n);
switch(n)
{
case 1:
    insert();
    break;
case 2:
    del();
    break;
case 3:
    traverse();
    break;
case 4:
    merged();
    break;
case 5:
    break;
    default:
printf("YOUR CHOICE IS INVALID");
}
}
