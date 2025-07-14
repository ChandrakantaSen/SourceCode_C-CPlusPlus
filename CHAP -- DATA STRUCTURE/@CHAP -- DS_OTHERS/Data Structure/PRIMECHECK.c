#include<stdio.h>
#include<conio.h>
void prime_check();

void prime_check()
{
    int x,i,flag=1;
    printf("\n enter the value of x:");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n The number %d is a prime number",x);
    }
    else
    {
        printf("\n The number %d is not a prime number",x);
    }
}
void main()
{
    prime_check();
}
