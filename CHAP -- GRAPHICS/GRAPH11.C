#include<graphics.h>
#include<conio.h>
 
main()
{
   int gd = DETECT, gm;
 
   initgraph(&gd, &gm, "C:\\TC\\BGI");
 
   fillellipse(100, 100, 50, 25);
 
   getch();
   closegraph();
   return 0;
}
