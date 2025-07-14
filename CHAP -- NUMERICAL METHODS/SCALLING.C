#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int x0,x1,x2,y0,y1,y2,mx,my;
void scale();
void draw();

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	printf("\nenter the co-ordinate:");
	scanf("%d\t%d",&x0,&y0);
	printf("\nenter the co-ordinate:");
	scanf("%d\t%d",&x1,&y1);
	printf("\nenter the co-ordinate:");
	scanf("%d\t%d",&x2,&y2);
	draw();
	getch();
	scale();
	getch();
}

void draw()
{
	line(x0,y0,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x0,y0);
}

void scale()
{
	int x,y;
	int a0,a1,a2,b0,b1,b2;
	printf("\nenter the scalling co-ordinate:");
	scanf("%d\t%d",&x,&y);
	mx=(int)(x1+x2+x0)/3;
	my=(int)(y1+y2+y0)/3;

	a0=mx+(x0-mx)*x;
	b0=my+(y0-my)*y;
	a1=mx+(x1-mx)*x;
	b1=my+(y1-my)*y;
	a2=mx+(x2-mx)*x;
	b2=my+(y2-my)*y;

	line(a0,b0,a1,b1);
	line(a1,b1,a2,b2);
	line(a2,b2,a0,b0);
}