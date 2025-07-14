#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void draw_circle(int,int,int);
void symmetry(int,int,int,int);

void main()
{
	int x,y,r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	printf("Enter the center co-ordiantes (X,Y):\n");
	scanf("%d %d",&x,&y);
	printf("Enter the radius of the circle (R):");
	scanf("%d",&r);
	draw_circle(x,y,r);
	getch();
	closegraph();
}

void draw_circle(int x,int y,int rad)
{
	int x1 = 0;
	int y1 = rad;
	int p = 1-rad;
	symmetry(x1,y1,x,y);
	for(x1=0; y1>x1; x1++)
	{
		if(p<0)	p=p+(2*x1)+3;
		else
		{
			p=p+(2*(x1-y1))+5;
			y1--;
		}
		symmetry(x1,y1,x,y);
	}
}

void symmetry(int x1,int y1,int x,int y)
{
	putpixel(x+x1,y-y1,EGA_RED);//For pixel (x,y)
	putpixel(x+y1,y-x1,EGA_RED);//For pixel (y,x)
	putpixel(x+y1,y+x1,EGA_RED);//For pixel (y,-x)
	putpixel(x+x1,y+y1,EGA_RED);//For pixel (x,-y)
	putpixel(x-x1,y+y1,EGA_RED);//For pixel (-x,-y)
	putpixel(x-y1,y+x1,EGA_RED);//For pixel (-y,-x)
	putpixel(x-y1,y-x1,EGA_RED);//For pixel (-y,x)
	putpixel(x-x1,y-y1,EGA_RED);//For pixel (-x,y)
}