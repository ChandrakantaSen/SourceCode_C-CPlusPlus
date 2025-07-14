#include<stdio.h>
#include<conio.h>

int add(int p,int q);

int main(){

    int fno,lno;
    int sum=0;
    printf("\nEnter the first no.:\t");
    scanf("%d",&fno);
    printf("\nEnter the last no.:\t");
    scanf("%d",&lno);

    sum=add(fno,lno);
    printf("\nRequired Sum:\t%d",sum);

    return 0;
}

int add(int x,int y){

    static add;

    add=(x+y);

    return add;
}
