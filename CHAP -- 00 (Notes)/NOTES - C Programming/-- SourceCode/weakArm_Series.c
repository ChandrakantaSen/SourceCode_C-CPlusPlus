#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int n,i,temp,c,d,sum = 0;
	printf("Enter the number: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		temp = i;
		c = 0;
		while(temp != 0)
		{
			temp = temp/10;
			c++;
		}

		temp = i;
		while(temp != 0)
		{
			d = temp % 10;
			sum = sum + (int)pow(d,c);
			temp = temp / 10;
			c--;
		}

		if(sum == i)
		{
			printf("%d ",sum);
		}
		sum = 0;
	}
}