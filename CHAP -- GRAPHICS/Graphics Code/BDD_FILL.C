#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void fill_left();
void fill_right();

void main()
{
	int x,y;
	int gd=DETECT,gm;
	initgraph (&gd,&gm,"C:\\Tc\\BGI");
	line(50,50,200,50);
	line(200,50,200,300);
	line(200,300,50,300);
	line(50,300,50,50);
	x=100;
	y=100;
	fill_left(x-1,y);
	fill_right(x,y);
	getch();
	closegraph();
}
void fill_left(int x,int y)
{
	if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=CYAN))
	{
		putpixel(x,y,CYAN);
		fill_left(--x,y);
		x++;
		fill_left(x,y-1);
		fill_left(x,y+1);
	}

	delay(1);
}

void fill_right(int x,int y)
{
	if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=MAGENTA))
	{
		putpixel(x,y,MAGENTA);
		fill_right(++x,y);
		x--;
		fill_right(x,y-1);
		fill_right(x,y+1);
	}
	//delay(1);
}