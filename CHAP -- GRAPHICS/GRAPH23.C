#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

main()
{
   int gd = DETECT, gm, area, temp1, temp2, left = 25, top = 75;
   void *p;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

 //  setcolor(YELLOW);
 // circle(50,100,25);
  setfillstyle(SOLID_FILL,1);
  floodfill(50,100,1);
	/* 1 FOR BLUE */

   getch();
   closegraph();
   return 0;
}
