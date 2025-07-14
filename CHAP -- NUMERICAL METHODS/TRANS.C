 #include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int x0,y0,x1,y1,x2,y2;
void draw();
void tri();
void main()
	{
	int gd=DETECT,gm;
	int c;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\nEnter the first point of the triangle:\t");
	scanf("%d%d",&x0,&y0);
	printf("\nEnter the second point of the triangle:\t");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter the third point of the triangle:\t");
	scanf("%d%d",&x2,&y2);
	cleardevice();
	draw();
	getch();
	tri();
	getch();
	}
void draw()
	{
	line(x0,y0,x1,y1);
	line(x1,y1,x2,y2);
	line(x2,y2,x0,y0);
	}
void tri()
	{
	int x,y,a1,a2,a3,b1,b2,b3;
	printf("\nEnter the translation co-ordinate:\t");
	scanf("%d%d",&x,&y);
	cleardevice();
	a1=x0+x;
	b1=y0+y;
	a2=x1+x;
	b2=y1+y;
	a3=x2+x;
	b3=y2+y;
	line(a1,b1,a2,b2);
	line(a2,b2,a3,b3);
	line(a3,b3,a1,b1);
	}