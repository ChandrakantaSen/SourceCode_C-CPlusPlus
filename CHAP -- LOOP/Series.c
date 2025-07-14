#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,s,p;
	float tot=0.0;
	printf("Enter the number: ");
	scanf("%d",&n);

	s=1;
	p=1;
	for(i=2;i<=n;i++)
	{
		s = s + i;

		p = p * i;
		//printf(" %d",p);

		tot = tot + (float)s/p;
	}
	printf("\nOutput is: %f",tot);
}