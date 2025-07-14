#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int x1,y1,x2,y2,x3,y3;
void draw(int x1,int y1, int x2,int y2,int x3,int y3);
void tri(int x1,int y1, int x2,int y2,int x3,int y3);
void scale(int x1,int y1, int x2,int y2,int x3,int y3);
void roat(int x1,int y1, int x2,int y2,int x3,int y3);
void main()
{
	int x1,y1,x2,y2,X3,Y3;
	int gd=DETECT,gm;
	int c;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	printf("\n enter the first point of the triangle:");
	scanf("%d%d",&x1,&y1);
	printf("\n enter the seceond point of the triangle:");
	scanf("%d%d",&x2,&y2);
	printf("\n enter the third point of the triangle:");
	scanf("%d%d",&x3,&y3);
	cleardevice();
	draw(x1,y1,x2,y2,x3,y3);
	printf("\nPress 1 to Translation, 2 to scaling, 3 to rotation, and 4 to exit.");
	while(1)
	{

		printf("\nEnter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: tri(x1,y1,x2,y2,x3,y3);break;
			case 2: scale(x1,y1,x2,y2,x3,y3);break;
			case 3: roat(x1,y1,x2,y2,x3,y3); break;
			case 4: exit(0);
			default: printf("Invalid Choice.");
		}
	}
// draw(x1,y1,x2,y2,x3,y3);
}
void draw(int x1,int y1, int x2,int y2,int x3,int y3)
{
	cleardevice();
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
void tri(int x1,int y1, int x2,int y2,int x3,int y3)
{
	int x,y,a1,a2,a3,b1,b2,b3;
	printf("\n enter the translation co-ordinate: ");
	scanf("%d%d",&x,&y);

	a1=x1+x;
	b1=y1+y;
	a2=x2+x;
	b2=y2+y;
	a3=x3+x;
	b3=y3+y;

	draw(a1,b1,a2,b2,a3,b3);
}
void scale(int x1,int y1, int x2,int y2,int x3,int y3)
{
	int x,y,a1,a2,a3,b1,b2,b3,mx,my;
	printf("\n enter the scaling co-ordinate: ");
	scanf("%d%d",&x,&y);
	mx=(x1+x2+x3)/3;
	my=(y1+y2+y3)/3;
//  cleardevice();
	a1=mx+(x1-mx)*x;
	b1=my+(y1-my)*y;
	a2=mx+(x2-mx)*x;
	b2=my+(y2-my)*y;
	a3=mx+(x3-mx)*x;
	b3=my+(y3-my)*y;
	draw(a1,b1,a2,b2,a3,b3);
}
void roat(int x1,int y1, int x2,int y2,int x3,int y3)
{
	int x,y,a1,a2,a3,b1,b2,b3,p=x2,q=y2;
	float ang;
	printf("\n enter the angle rotation : ");
	scanf("%f",&ang);
	ang=(ang*3.14)/180;

a1=x1;                                                              

b1=y1;
	a2=p+(x2-p)*cos(ang)-(y2-q)*sin(ang);
	b2=q+(x2-p)*sin(ang)-(y2-q)*cos(ang);
	a3=p+(x3-p)*cos(ang)-(y3-q)*sin(ang);
	b3=q+(x3-p)*sin(ang)-(y3-q)*cos(ang);
	draw(a1,b1,a2,b2,a3,b3);
}