#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int dx,dy,x,y,p,x1,y1,x2,y2,k;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");

	printf("\n\n\tEnter the co-ordinates of first point : ");
	scanf("%d %d",&x1,&y1);
	printf("\n\n\tEnter the co-ordinates of second point : ");
	scanf("%d %d",&x2,&y2);

	dx = (x2 - x1);
	dy = (y2 - y1);
	p = ((2*dy)-dx);
	x = x1;
	y = y1;
	putpixel(x,y,RED);

	for(k=1;k<=dx;k++)
	{
		if(p < 0)
		{      if(x<x2) x=x+1;
		       else	x=x-1;
			p = p + 2 * (dy);
		}
		else
		{       if(y<y2) y=y+1;
			else y=y-1;
			if(x<x2) x=x+1;
			else x=x-1;
			p = p + 2 * (dy - dx);
		}
		putpixel(x,y,RED);
	}
	getch();
}

