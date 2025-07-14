/* PASCAL TRIANGLE USING TWO DIMENSIONAL ARRAY */
#include<stdio.h>
#include<conio.h>

int main()
{
	int p[10][10],row;
	int i,j,k;

	printf("\n\nEnter no of rows:\t");
	scanf("%d",&row);
	printf("\n\n****PASCAL TRIANGLE****\n\n");
	p[1][1]=1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",p[i][j]);
			printf("\n\n");
			for(k=2;k<=i;k++)
			{
				p[i+1][k]=p[i][k-1]+p[i][k];
				p[i+1][1]=1;
				p[i+1][i+1]=1;
			}
		}
	}
	return 0;
}
