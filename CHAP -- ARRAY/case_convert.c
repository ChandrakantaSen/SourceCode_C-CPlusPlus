/* Program to convert into lower case */
#include<stdio.h>
#include<conio.h>

char upper_to_lower(char ch);
int main()
{
	char uch,lch;
	printf("\n\nEnter an upper case:\t");
	scanf("%c",&uch);

	lch=upper_to_lower(uch);

	printf("\n\nupper case:\t%c\n\n",uch);
	printf("\n\nlower case:\t%c\n\n",lch);
	return 0;
}

char upper_to_lower(char ch)
{
	if(ch>=65 && ch<=91)
	{
		ch = ch+32;
	}
	return ch;
}
