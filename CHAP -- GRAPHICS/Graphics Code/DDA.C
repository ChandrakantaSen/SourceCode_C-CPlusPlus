#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd=DETECT,gm;
	int x,y,x1,y1,x2,y2;
	int dx,dy,step,x_incr,y_incr,k;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	printf("\nEnter the first co-ordinate:");
	scanf("%d %d",&x1,&y1);
	printf("\nEnter the second co-ordinate:");
	scanf("%d %d",&x2,&y2);

	dx=x2-x1;
	dy=y2-y1;
	if(dx>dy)
	{
		step=dx;
	}
	else
	{
		step=dy;
	}
	x_incr=(int)dx/step;
	y_incr=(int)dy/step;
	x=x1;
	y=y1;
	putpixel(x,y,6);
	for(k=1;k<=step;k++)
	{
		x=x+x_incr;
		y=y+y_incr;
		putpixel(x,y,6);
	}
	getch();
}







