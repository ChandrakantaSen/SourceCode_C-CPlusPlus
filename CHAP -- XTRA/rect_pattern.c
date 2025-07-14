/*Q. Write a C program to print the following number pattern rectangle as:

1 2 3 4 5 4 5
2 3 4 5 3 4 5
3 4 5 2 3 4 5
4 5 1 2 3 4 5
*/
Ans.

/*c program for number pattern rectangle design*/
#include<stdio.h>
int main()
{

 int n=4,num=5,p=4,r,c,z;
 for(r=1; r<=n; r++,p--)
 {
   for(c=r; c<=num; c++)
      printf(" %d",c);
   for(c=1,z=p; c<=r+1; c++,z++)
     printf(" %d",z);
   printf("\n");
 }
 getch();
 return 0;
}