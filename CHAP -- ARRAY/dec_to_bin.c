/* TO CONVERT A +VE DECIMAL INTEGER TO BINARY */
#include<stdio.h>

int main()
{
	int dec,i=0,j;
	int bin[10];
	printf("\n\nEnetr a +ve integer:\t");
	scanf("%d",&dec);
	while(dec>0)
	{
		bin[i++]=dec%2;
		dec=dec/2;
	}
	i--;
	printf("\n\nCorresponding binary number:\t");
	for(j=i;j>=0;j--)
	{
		printf("%d",bin[j]);
	}
	return 0;
}
