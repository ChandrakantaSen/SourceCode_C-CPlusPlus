#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[10],p[10];
	printf("\n\nType first String:\t");
	gets(s);
	printf("\n\nType second String:\t");
	gets(p);
	strcat(s,p);
	printf("\n\nConcated String is:\t");
	puts(s);
	return 0;
}
