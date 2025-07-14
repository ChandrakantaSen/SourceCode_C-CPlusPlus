/* C program to create an identity matrix of n x n order */
#include<stdio.h>
#include<conio.h>
void main()
{
	  int ar1[10][10],n,i,j,k=1;

	  printf("Enter value of n to create an identity matrix of order n ");
	  scanf("%d",&n);

	  printf(" Identity matrix is - \n");
	  for(i=0;i<n;i++)
	  {
			  for(j=0;j<n;j++)
			  {
					  if(i==j)
					  {
								 ar1[i][j]=k++;
								 printf("%d ",ar1[i][j]);
					  }
					  else
					  {
							ar1[i][j]=0;
							printf("%d ",ar1[i][j]);
					  }
			  }
			  printf("\n");
	  }
     getch();
}