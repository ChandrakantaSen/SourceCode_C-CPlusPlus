#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void fill_right(int x,int y)
{
if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=RED))
	{
		putpixel(x,y,RED);
		fill_right(++x,y);
		x=x-1;
		fill_right(x,y-1);
		fill_right(x,y+1);
	}
	delay(1);
}

void fill_left(int x,int y)
{
if((getpixel(x,y)!=WHITE)&&(getpixel(x,y)!=RED))
	{
		putpixel(x,y,RED);
		fill_left(--x,y);
		x=x+1;
		fill_left(x,y-1);
		fill_left(x,y+1);
	}
	//delay(1);
}

void main()
{
	int x,y,n,i;
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	line(50,50,200,50);
	line(200,50,200,300);
	line(200,300,50,300);
	line(50,300,50,50);

	x=100;y=100;
	fill_right(x,y);
	fill_left(x-1,y);
	getch();

}