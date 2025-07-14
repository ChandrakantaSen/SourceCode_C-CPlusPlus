#include<stdio.h>

int main()
{
	int code;
	char symbol;

	printf("\n\nInput an ASCII code(0 to 127):\t");
	scanf("%d",&code);

	symbol = code;
	printf("\n\nSymbol corresponding of %d is:\t %c\n",code,symbol);
	return 0;
}
