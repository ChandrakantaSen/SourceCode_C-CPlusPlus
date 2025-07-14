/* C program: Program to find the factorial sum of serie 1! + 2! +3! +4!......depending on a limit of user's choice */
#include<stdio.h>
void main()
{
    int n,i,j, fact =1, sum =0;
   printf("Enter the limit of the factorial series");
   scanf("%d", &n);
   for(i=1;i<=n;i++)
      {
           for(j=1;j<=i;j++)
                {
                          fact = fact * j;
                 }
        sum = sum + fact;
        fact = 1;             // since new value of fact is not 1 thus reinitialize it back to 1
     }
   printf("The sum of the factorial series of % d terms is: %d",n,sum);
  getch();
} 