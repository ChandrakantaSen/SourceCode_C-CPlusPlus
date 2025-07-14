#include<stdio.h>
#include<conio.h>

int main()
{
	char a[20];
	int i, count=0;
	printf("\n\nenter a line:\t");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' '||a[i]=='.')
		{
			count++;
		}
		printf("\n\nno. of words:\t%d & words is:\t%c",++count,a[i]);
	}
	return 0;
}
