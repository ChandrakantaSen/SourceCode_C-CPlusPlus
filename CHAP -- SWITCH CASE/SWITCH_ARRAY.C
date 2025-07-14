#include<stdio.h>
#include<conio.h>
#include<process.h>
#define ROW 3
#define COL 3

void main()
{
int Array[ROW][COL],i,j,s=0,col_sum[COL];
char ch;
clrscr();
printf("Put Values into Array Elements\n");
for (i=0;i<ROW;i++)
{
for (j=0;j<COL;j++)
{
printf("Enter Value at [%d][%d]:",i+1,j+1);
scanf("%d",&Array[i][j]);
}
}	/*input completed*/
for (i=0;i<COL;i++)
col_sum[i]=0;
clrscr();
do{
clrscr();
printf("\t\t\t MAIN MENU\n");
printf("\t\t1.....Display Array Only\n");
printf("\t\t2.....Rowwise sum\n");
printf("\t\t3.....Columnwise sum\n");
printf("\t\t4.....Exit");
printf("\t\t Choise Please[1-4]:");ch=getche();
switch(ch)
{
case '1':	/*display only matrix*/
printf("\n\n\t\t ARRAY DISPLAY \n\n\t\t\t");
for(i=0;i<ROW;i++)
{
for(j=0;j<COL;j++)
printf("%5d",Array[i][j]);
printf("\n\t\t\t");
}
break;

case '2':	/*Array with rowwise sum*/
printf("\n\n\t\t ARRAY WITH ROWWISE SUM\n\n\t\t\t");
for(i=0;i<ROW;i++)
{
for(j=0,s=0;j<COL;j++)
{
printf("%5d",Array[i][j]);
s+=Array[i][j];
}
printf("=%5d\n\t\t\t",s);
}
break;

case '3':
printf("\n\n\t\t ARRAY WITH ROWWISE AND COLOUMN WISE SUM\n\n\t\t\t");
for(i=0;i<ROW;i++)
{
for(j=0,s=0;j<COL;j++)
{
printf("%5d",Array[i][j]);
s+=Array[i][j];
col_sum[j]+=Array[i][j];
}
printf("=%5d\n\t\t\t",s);
}
printf("\n\t\t\t");
for(i=0;i<COL;i++)
printf("%5d",col_sum[i]);
break;

case '4':
 exit(0);
default:
printf("Invalid Input");
getch();
}
getch();
}while(1);
}