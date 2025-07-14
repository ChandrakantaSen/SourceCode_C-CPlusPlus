/*Here a sample program to illustrate how to use BARS which are used for visual statistics */
#include<graphics.h>
main() {
  int gd=DETECT,gm,maxx,maxy,x,y,button;
  initgraph(&gd,&gm,"");
  line(80,150,200,150);
  line(80,150,80,50);
  settextstyle(1,HORIZ_DIR,1);
  outtextxy(100,153,"<-X axis");
  settextstyle(1,VERT_DIR,1);
  outtextxy(60,50,"<-Y axis");
  bar(100,100,120,150);
  bar(130,120,150,150);
  getch();
  closegraph();
}