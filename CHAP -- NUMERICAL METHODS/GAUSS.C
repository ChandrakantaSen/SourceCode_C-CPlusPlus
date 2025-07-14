#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i,j,k,n;
	float x[10],a[10][10],c[10];
	clrscr();
	printf("\nEnter the value of n:\t");
	scanf("%d",&n);
	printf("\nEnter the R.H.S constants:\t");
	for(i=0;i<n;i++)
	{
		scanf("%f",&c[i]);
	}
	printf("\nEnter the elements:\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(k=0;k<=(n-1);k++)
	{
		for(i=(k+1);i<(n);i++)
		{
			for(j=(k+1);j<=(n);j++)
			{
				a[i][j]=a[i][j]-((a[i][k]/a[k][k])*a[k][j]);
			}
			c[i]=c[i]-((a[i][k]/a[k][k])*c[k]);
		}
	}
	x[n-1]=c[n-1]/a[n-1][n-1];
	printf("\nThe required solution is:\n\n");
	printf("x[%d]=%f",n-1,x[n-1]);
	for(k=0;k<(n-1);k++)
	{
		i=(n-k-2);
		for(j=(i+1);j<(n);j++)
		{
			c[i]=c[i]-a[i][j]-x[j];

		x[i]=c[i]/a[i][i];
		}
		printf("\nx[%d]=%f\n\n",i,x[i]);
	}
	getch();
}