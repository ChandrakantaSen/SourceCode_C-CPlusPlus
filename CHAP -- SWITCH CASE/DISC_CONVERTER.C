#include<stdio.h>
#include<conio.h>
void main()
{
int choise;
float km,q;
do
{
clrscr();
printf("\n:  DISTANCE CONVERTER  :\n");
printf("\n press [1] for km to meter");
printf("\n press [2] for km to feet");
printf("\n press [3] for km to inches");
printf("\n press [4] for km to yard");
printf("\n press [5] for km to mile");
printf("\n press [6] for km to mili meter");
printf("\n press [7] for help!!!");
printf("\n press [8] to exit is programe:");
scanf("%d",&choise);
if (choise==8)
break;
if(choise<1||choise>8)
{
printf("\n invalid input");
getch();
continue;
}
if (choise==7)
{
printf("\n PLEASE READ CAREFULLY THIS IS AN ORDINARY DISTANCE MEASURING CALCULATOR");
printf("\n PLEASE DO NOT TYPE ANY CHRACTER OR ALPHABATE SYSTEM DOES NOT RECOGNISEIT");
printf("\n THIS CALCULATOR IS BASED ON BASIC CALCULATION FORMULA OF GENERAL MATHS");
printf("\n YOU HAVE TO CHOOSE OPTION FROM 1 TO 8 ONLY TO TERMINATE PROGRAM PRESS 8");
printf("\n THANK YOU FOR USING DISTANCE CALCULATOR COPYRIGHT @ DEV KUMAR'S MULTIMEDIA");
getch();
continue;
}
{
printf("\n Enter the distance in kilo meter:");
scanf("%f",&km);
}
switch(choise)
{
case 1:
printf("\t in meter");
q=km*1000;
break;
case 2:
q=km*3280.80;
printf("\t in feet");
break;
case 3:
q=km*39370;
printf("\t in inches");
break;
case 4:
q=km*1093.60;
printf("\t in yard");
break;
case 5:
q=km*0.6214;
printf("\t in mile");
break;
case 6:
q=km*1000000;
printf("\t in mile meter");
break;
default:
printf("\n invalid input");
getch();
}
printf("\n result is =%.2f",q);
getch();
}
while(1);
}