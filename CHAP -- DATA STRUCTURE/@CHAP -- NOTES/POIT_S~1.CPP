#include <stdio.h>
struct name{
   int a;
   int  b;
};
int main(){
    struct name *ptr,p;
    ptr=&p;            /* Referencing pointer to memory address of p */
    printf("Enter integer: ");
    scanf("%d",&(*ptr).a);
    printf("Enter number: ");
    scanf("%d",&(*ptr).b);
    printf("Displaying: ");
    printf("%d%d",(*ptr).a,(*ptr).b);
    return 0;
}