#include<graphics.h>
#include<conio.h>
#include<stdio.h>

struct arccoords
{

   int x, y;                /*   center point of arc    */
   int xstart, ystart;      /*   start position         */
   int xend, yend;          /*   end position           */
};

main()
{
   int gd = DETECT, gm;
   struct arccoords a;
   char arr[100];

   initgraph(&gd, &gm,"C:\\TC\\BGI");

   arc(250,200,0,90,100);
   getarccoords(&a);

   sprintf(arr,"(%d, %d)",a.xstart,a.ystart);
   outtextxy(360,195,arr);

   sprintf(arr,"(%d, %d)",a.xend,a.yend);
   outtextxy(245,85,arr);

   getch();
   closegraph();
   return 0;
}
