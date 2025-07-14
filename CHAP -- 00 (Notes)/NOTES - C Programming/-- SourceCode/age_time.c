#include<stdio.h>

int main()
{
	float years,secs;

	printf("\n\nInput your age (in years):\t");
	scanf("%f",&years);

	secs = years*365*24*60*60;
	printf("\n\nYour have lived for %f seconds\n\n",secs);
	return 0;
}
