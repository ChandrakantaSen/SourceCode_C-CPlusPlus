/*****************************************************************/
/*  Program to display the sparse array                          */
/*****************************************************************/

#include<stdio.h>
#include<conio.h>
main()
{
int x=10,y=11,c,cc,r,i=0,xl[50],yl[50];
char ch,con,con1='y';
clrscr();
for(r=1;r<12;r++)
   { gotoxy(9,r);
    printf("%c",179);
   }
  gotoxy(9,12);
  printf("%c",192);
for(c=10;c<80;c++)
   { gotoxy(c,12);
    printf("%c",196);
   }
for(r=14;r<=24;r++)
  {
for(c=10;c<=79;c++)
   { gotoxy(c,r);
     printf("0");
   }
  }
 gotoxy(9,7);
 printf("%c",180);
 gotoxy(8,7);
 printf("%d",5);
 gotoxy(9,2);
 printf("%c",180);
 gotoxy(7,2);
 printf("%d",10);
for(c=19;c<=80;c+=10)
  { gotoxy(c,12);
   printf("%c",194);
   gotoxy(c,13);
   printf("%d",c-9);
  }
gotoxy(9,12);printf("%c",197);
gotoxy(6,12);printf("%c%c%c",196,196,196);
gotoxy(9,13);printf("%c",179);
gotoxy(6,13);printf("0,0");
gotoxy(25,25);printf("Press 'Esc' to exit...");
do
{
gotoxy(x,y);printf("%c\b",219);
ch=getch();
gotoxy(x,y);
printf(" ");
do
{
  switch(ch)
   {
     case 72:y--;
	     if(y<1)
	      y=11;
	      break;
     case 75:x--;
	     if(x<10)
	      x=79;
	      break;
     case 77:x++;
	     if(x>79)
	     x=10;
	     break;
     case 80:y++;
	     if(y>11)
	     y=1;
	     break;
     }
 gotoxy(x,y);printf("%c\b",219);
 ch=getch();
 gotoxy(x,y);printf(" ");
 }
 while(ch !=13);
 gotoxy(x,y+13);
 printf("1");
 xl[i]=x-9;
 yl[i]=12-y;
 i++;
 cc=i;
 con=getch();
 }
 while(con !=27);
 clrscr();
 printf("\n\n\t\tDo you want to see the list[Y/N]:");
   scanf("%s",&con1);
   if(con1=='Y' || con1=='y')
      {
	printf("\tCOL\t\tROW\tVALUE\n");
	for(i=0;i<cc;i++)
	   printf("\t%d\t\t%d\t%d\n",xl[i],yl[i],1);
      }

 getch();
 clrscr();
 }

