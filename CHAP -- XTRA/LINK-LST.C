/***********************************************************************/
/*    Program to demo the  operation of singular  LINK-LIST            */
/***********************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NULL 0
typedef struct record
{
char name[20];
int roll;
struct record *next;
}rec;
int flag=0;
main()
{
rec *new,*app,*append(rec *pt),*ins(rec *pt),*del(rec *pt);
char nm[20],choice;
int rl;
void list(rec *pt,int);
new = (rec *)malloc(sizeof(rec));
app=new;
do
 {
   choice=menu();
   switch(choice)
   {
   case '1':
      app=append(app);       /* Append records  */
      break;
   case '2':
      heading();             /* Heading         */
      list(new,1);           /* List records    */
      getch();
      break;
   case '3':
       new=ins(new);         /* Insert records   */
	break;
   case '4':
      new=del(new);          /* Delete records   */
      break;
   case '5':
      exit(0);
   default :
      printf(" Your choice is invalid - Try again " ); getch();
   }
  }while(1);
}

/*************************** end of main() **********************/

/************************* append() *****************************/
 rec* append(rec *record)
 {
 printf("\nName please [ X to exit ] : ");
    fflush(stdin); gets(record->name);
 if(strcmpi(record->name,"x")==0)
   {  record->next=NULL; return(record);   }
  else
   {
    printf("\nRoll no. :  "); fflush(stdin); scanf("%d",&record->roll);
    record->next = (rec *)malloc(sizeof(rec));
    append(record->next);
   }
  }

/************************* list() ******************************/
void list(rec *rd,int i)
 {
  if(rd->next==NULL)
  return;
   printf("%3d   %-20s  %5d\n",i++,strupr(rd->name),rd->roll);
   list(rd->next,i);
 }

/********************* ins() ************************************/
rec* ins(rec *record)
 {
 char word[20];
 rec *find(rec *,char *),*new1,*local;
 printf(" \nType NAME, before the new record to be inserted : ");
 fflush(stdin); gets(word);
 local=find(record,word);
 if(local==NULL)
  { printf("Record not found "); getch(); return(record); }
    new1=(rec *)malloc(sizeof(rec));
   printf("Enter students name to be inserted .. ");
     fflush(stdin);gets(new1->name);
   printf("\nEnter roll no....   ");
    fflush(stdin); scanf("%d",&new1->roll);
     if(flag==0)
    {
    new1->next=local->next;
    local->next=new1;
    return(record);
     }
    else
    {
     new1->next=record;
     record=new1;
     return(record);
   }
}
/************************ del() *******************************/
 rec* del(rec *record)
{
   rec *find(rec *, char *), *local,*temp;
   char word[20];
    printf("\n Enter students name to be deleted...   ");
    fflush(stdin); gets(word);
    local=find(record,word);
    if(local==NULL)
    { printf("Record not found "); getch(); return(record); }
      if(flag==0)
       {
	 temp=local->next;
	local->next=local->next->next;
	free(temp); return(record);
       }
      else
       {
      temp=record;
      record=local->next;
      free(temp); return(record);
       }
 }
/*********************** find() ******************************/
 rec *find(rec *rd,char *nm)
 {
   flag=0;
   if(strcmpi(rd->name,nm)==0)
    {
    flag=1;
    return(rd);
    }  /* flag=1 , found first record */
   if(strcmpi(rd->next->name,nm)==0)
     return(rd);
   else
    {
     if(rd->next->next == NULL)
      return(NULL);
     else
      find(rd->next,nm);
    }
  }
/***************************** menu() ******************************/
   menu()
   {
   char choice;
   clrscr();
   printf("\n\n                                 Main Menu\n");
   printf("                                 =========");
   printf("\n\n\n                            1  -  APPEND Records\n"
	  "                            2  -  LIST   Records\n"
	  "                            3  -  INSERT Records\n"
	  "                            4  -  DELETE Records\n"
	  "                            5  -  EXIT .\n\n");
    printf(" Your choice please......");
    fflush(stdin); choice=getche();
    return(choice);
    }

/************************* heading() *****************************/
  heading()
   { clrscr(); printf("\n  SL..NAME....................ROLL\n\n");  }
