/******************************************************************/
/*        Program to creat a file and list the records            */
/*							                                      */
/******************************************************************/
#include<stdio.h>
#include<string.h>
FILE *p;
main()
{
char name[20],choice;
int marks,i;
do{
clrscr();
printf("\t\t\tMain Menu\n");
printf("\t\t1..Append Records\n"
       "\t\t2..List Records"
       "\n\t\t3..Exit"
       "\n\t\tChoice Please....");
choice=getch();
if(choice<'1' || choice> '3')
{ printf("Invalid Choice "); getch(); continue; }
switch(choice)
{
case '1':        /* for record entry */
p=fopen("data.dat","a");
do{
 printf("\nName [ x to exit ] :  "); fflush(stdin); gets(name);
 if(strcmpi(name,"x")==0) break;
 printf("Marks              :  "); scanf("%d",&marks);
 fprintf(p,"%20s%10d",name,marks);
}while(1);
 fclose(p);
 break;
case '2':        /* for record listing */
 heading();
 p=fopen("data.dat","r");
 i=1;
 while(!feof(p))
  { fscanf(p,"%s %d",name,&marks);
    printf("\n%5d    %-20s %10d",i++,name,marks);
    if(i%21==0){printf("\n");  system("pause");heading(); }
 }
 getch();
 fclose(p);
 break;
case '3':
 exit();
 }
}while(1);
}
heading()
{
clrscr();
printf("   Sl....Name........................Marks\n");
}
