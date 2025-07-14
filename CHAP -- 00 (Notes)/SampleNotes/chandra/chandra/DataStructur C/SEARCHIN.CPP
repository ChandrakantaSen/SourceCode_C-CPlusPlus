#include<stdio.h>
#include<conio.h>
void main()
{  clrscr();
	int i=0,a[10],n=6,f=0,c=0;
	printf("no.s are\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			f=1;
			c=i+1;
			a[i]=0;
		}
	}
	if(f==1)
	{
		printf("true\n");
		printf("position of the no. is :%d\n",c);
	}
	else
	{
		printf("false\n");
		printf("element is not present");
	}
	printf("array after deletion is\n");
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);

	getch();
}

