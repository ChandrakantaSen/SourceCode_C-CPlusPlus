#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm;
	int x,y,radius,p;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	printf("\nEnter the radius:");
	scanf("%d",&radius);
	x=0;
	radius=y;
	p=3-(2*radius);
	while(y>x)
	{
		if(p<0)
		{
			p=p+(4*x)+6;
		}
		else
		{
			p=p+(4*(x-y))+10;
			y--;
		}
		x++;
	}
	circle(x,y,6);
	getch();
}