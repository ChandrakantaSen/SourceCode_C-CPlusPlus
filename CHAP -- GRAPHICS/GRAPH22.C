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
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(50,100,GREEN);


   getch();
   closegraph();
   return 0;
}
