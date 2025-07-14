/*  A Program to implement Stack Concept in Polynomial  */

# include <stdio.h>
# include <conio.h>
# include <math.h>
# include <graphics.h>
# include <string.h>
# include <stdlib.h>

 typedef struct polynomial { int co;
			     int ex;
			     struct polynomial *next;
                           }node;

 int g_col=120,gp_col=150,gm_col=155;
 long int val;
 char eq[50]="f(x)=";

 main()
{
 node *number, *start; 
 int gd=DETECT,gm,value; char ch,v[10];
 initgraph(&gd,&gm,"");
 cleardevice(); setcolor(YELLOW); settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(40,50,"Stack Implementation : Polynomial");
 setcolor(LIGHTRED); line(20,95,615,95);
 number=(node*)malloc(1*sizeof(node)); start=number; do{ setcolor(LIGHTCYAN);
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3); outtextxy(64,120,"1.");
 outtextxy(59,159,"2."); outtextxy(59,200,"3."); setcolor(LIGHTMAGENTA);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4); outtextxy(85,113,"Build Equation");
 outtextxy(85,193,"Exit"); outtextxy(85,153,"Calculate The Value of x");
 setcolor(LIGHTGREEN); settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(290,230,"Your Choice : ?");
  gotoxy(65,17); fflush(stdin); ch=getch();
   switch(ch)
     { case '1' : heading(); polynomial(number); break;
       case '2' : heading(); setcolor(WHITE); settextstyle(SMALL_FONT,HORIZ_DIR,7);
		  outtextxy(80,150,eq); display(start,167); gotoxy(15,15);
		  printf("Enter Value of X : "); fflush(stdin); scanf("%d",&value);
		  calculate(start,value); setcolor(LIGHTGREEN); settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		  outtextxy(100,330,"The Value of x : "); itoa(val,v,10); setcolor(LIGHTCYAN);
		  outtextxy(366,331,v); setcolor(LIGHTMAGENTA); rectangle(85,320,570,375);
		  getch(); heading(); break;
       case '3' : cleardevice(); setcolor(LIGHTRED);
		  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		  outtextxy(60,140,"Polynomial Using * Linklist ? . . .");
		  outtextxy(150,280,"My Goodness ! . . ."); sleep(2);
		  closegraph(); normvideo(); clrscr(); exit(0);
       default  : setcolor(LIGHTRED); settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
		  outtextxy(60,340,"Too Careless . . .  Press any Key.");
		  getch(); heading();

     }
   }while(1);
}

 polynomial(node*create)
{
 char val[5],eval[5],p_val[7]="+"; int coef,expo;
 setcolor(WHITE); settextstyle(SMALL_FONT,HORIZ_DIR,7);
 outtextxy(60,140,"f(x)=");
 gotoxy(15,15); printf("Enter Value of Co-effcient : ");
 fflush(stdin); scanf("%d",&create->co);
  if(create->co==0) { create->next=NULL; heading(); return; }
 gotoxy(15,17); printf("Enter Value of Exponent    : ");
 fflush(stdin); scanf("%d",&create->ex);
 expo=create->ex; itoa(expo,eval,10);
 coef=create->co; if(coef<0) { itoa(coef,val,10); strcat(val,"x"); strcat(eq,val); }
	 else { itoa(coef,val,10); strcat(p_val,val); strcat(p_val,"x"); strcat(eq,p_val); }
 setcolor(WHITE); settextstyle(SMALL_FONT,HORIZ_DIR,7);
 if(coef<0) { outtextxy(g_col,140,val); }
   else { outtextxy(g_col,140,p_val); } g_col=g_col+39;
 if(coef<0)
   { outtextxy(gm_col,125,eval); gm_col=gm_col+39; gp_col=gp_col+39; }
      else { outtextxy(gp_col,125,eval); gp_col=gp_col+39; gm_col=gm_col+39; }
 gotoxy(44,15); printf("   "); gotoxy(44,17); printf("   ");
 create->next=(node*)malloc(1*sizeof(node));
 polynomial(create->next);
}

 display(node *show, int col)
{
 int power; char p[3];
 if((show->next==NULL)||(show->ex==1)||(show->ex==0)) return;
 power=show->ex; itoa(power,p,10); setcolor(WHITE);
 settextstyle(SMALL_FONT,HORIZ_DIR,5); outtextxy(col,140,p); col=col+35;
 display(show->next, col);
}

 calculate(node *cal, int value)
{
 if(cal->next==NULL) return;
 /*val=val+pow((cal->co*value),cal->ex);*/
 val=val+(cal->co*(pow(value,cal->ex)));
 calculate(cal->next, value);
}

 heading()
{
 cleardevice(); setcolor(YELLOW); settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(40,50,"Stack Implementation : Polynomial");
 setcolor(LIGHTRED); line(20,95,615,95);
}