#include<stdio.h>
#include<conio.h>

void main()
{
	int dm,n,nod,styr,p=0;
   printf("enter the digit\n");
   scanf("%d",&n);
   styr=n%10000;
   nod=n/10000;

   if(styr%4==0&&styr%100!=0||styr%400==0)
   p=1;

   if(nod>(365+p))
   {
   while(1)
   {
   if(nod<=365)
   break;
   if(styr%4==0&&styr%100!=0||styr%400==0)
   nod=nod-366;
   else
   nod=nod-365;
   styr++;
   }
   }

   if(nod<=31)
   dm=1;
   else if(nod>31&&nod<=(59+p))
   dm=2;
   else if(nod>(59+p)&&nod<=(90+p))
   dm=3;
   else if(nod>(90+p)+p&&nod<=(120+p))
   dm=4;
   else if(nod>(120+p)&&nod<=(151+p))
   dm=5;
   else if(nod>(151+p)&&nod<=(181+p))
   dm=6;
   else if(nod>(181+p)&&nod<=(212+p))
   dm=7;
   else if(nod>(212+p)&&nod<=(243+p))
   dm=8;
   else if(nod>(243+p)&&nod<=(273+p))
   dm=9;
   else if(nod>(273+p)&&nod<=(304+p))
   dm=10;
   else if(nod>(304+p)&&nod<=(334+p))
   dm=11;
   else if(nod>(334+p)&&nod<=(365+p))
   dm=12;
   switch(dm)
   {
	   case 1:
	   printf("\n%d january %d",nod,styr);
	   break;
	   case 2:
	   printf("\n%d february %d",nod-31,styr);
	   break;
	   case 3:
	   printf("\n%d march  %d",nod-59-p,styr);
	   break;
	   case 4:
	   printf("\n%d april %d",nod-90-p,styr);
	   break;
	   case 5:
	   printf("\n%d may %d",nod-120-p,styr);
	   break;
	   case 6:
	   printf("\n%d june %d",nod-151-p,styr);
	   break;
	   case 7:
	   printf("\n%d july %d",nod-181-p,styr);
	   break;
	   case 8:
	   printf("\n%d august %d",nod-212-p,styr);
	   break;
	   case 9:
	   printf("\n%d september %d",nod-243-p,styr);
	   break;
	   case 10:
	   printf("\n%d october %d",nod-273-p,styr);
	   break;
 	   case 11:
	   printf("\n%d november %d",nod-304-p,styr);
	   break;
	   case 12:
	   printf("\n%d december %d",nod-334-p,styr);
	   break;
	   default:
	   break;
	}


getch();
}
