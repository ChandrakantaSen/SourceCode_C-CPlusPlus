#include<stdio.h>
#include<conio.h>
void fact_number();
void fact_number()
{
    int i,x,f;
    printf("\n enter the value of x:");
    scanf("%d",&x);
    f=1;

    for(i=1;i<=5;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}
void main()
{
    fact_number();
    getch();
}
