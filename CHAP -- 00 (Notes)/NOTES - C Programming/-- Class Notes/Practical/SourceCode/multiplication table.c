#include<stdio.h>
#include<conio.h>

int multiplication_table(int p);

int main(){

    int limit,result,i,table;
    printf("\nEnter the limit:\t");
    scanf("%d",&limit);

    result= multiplication_table(limit);
    for(i=0;i<=10;i++){
        printf("\nRequired Result:\t%d",result);
    }
    return 0;
}

int multiplication_table(int limit){

    int i,table;
    int no;

    for(i=0; i<=10; i++){

        table=no*i;
    }
    return table;
}
