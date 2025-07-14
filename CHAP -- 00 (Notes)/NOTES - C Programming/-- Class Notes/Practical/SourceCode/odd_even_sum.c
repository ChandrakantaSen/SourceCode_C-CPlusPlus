/* To find the sum of even & odd nos. between 1 & 50 */
#include<stdio.h>

int main()
{
	static int evensum, oddsum;
	int i;
	for(i=1;i<=10;i+=2)
	{
		oddsum+=i;
		//evensum+=i+=1;
	}
	printf("\n1+3+...+9:\t%d",oddsum);
	//printf("\n2+4+...+50:\t%d",evensum);
	return 0;
}
