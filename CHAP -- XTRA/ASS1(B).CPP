#include<stdio.h>
#include<conio.h>
//#include<string.h>
#include<stdlib.h>
void main()
{
struct marks
{
 char name[7];
 int roll;
 int mark[3];
 }st[50];
int i,j,n,sum;
clrscr();
printf("\nEnter the number of student = ");
scanf("%d",&n);
printf("\nEnter the names,roll nos and marks of the %d students:",n);
for(i=0;i<n;i++)
{
 printf("\n\nInformation of student %d",(i+1));
 printf("\nNAME : ");
 fflush(stdin);
 gets(st[i].name);
 printf("\nROLL NO : ");
 fflush(stdin);
 scanf("%d",&st[i].roll);
 for(j=0;j<3;j++)
 {
  printf("\nMARK%d : ",(j+1));
  fflush(stdin);
  scanf("%d",&st[i].mark[j]);
 }
}
 printf("\n\n\nResult of %d student ",n);
 printf("\n\n\tNAME\tTOTAL NO");
for(i=0;i<n;i++)
{
 sum=0;
 for(j=0;j<3;j++)
 sum=sum+st[i].mark[j];
 //printf("\n\n\nResult of student %d",(i+1));
 //printf("\n\nNAME\tTOTAL NO");
 printf("\n\n\t%s",st[i].name);
 printf("\t%d",sum);
}
getch();
}

