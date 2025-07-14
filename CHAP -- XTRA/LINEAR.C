# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
 typedef struct student { char name[50];
			  char add[50];
			  int roll;
			  char course[20];
			  struct student *next;
			} node;
 main()
{
 int r,i,row=4,sl=1,roll;  char ch;
 node *start, *p, *ap, *append(); clrscr();
  start=(node*)malloc(1*sizeof(node));  ap=start;
   do{ clrscr(); printf("\n\n\n\t\t\t\tLinear Linked List ");
		 printf("\n\t\t\t 컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴�");
		 printf("\n\n\t\t1. Append\n\t\t2. List\n\t\t3. Modify");
		 printf("\n\t\t4. Insert ( After )\n\t\t5. Insert ( Before )");
		 printf("\n\t\t6. Delete\n\t\t7. Exit\n\n\n\n\tEnter Your Choice : ");
	   fflush(stdin); ch=getche();
       switch(ch)
		 { case '1' : ap=append(ap); break;
		   case '2' : clrscr(); gotoxy(2,2); printf("Sl.");
					gotoxy(6,2); printf("Name");
					gotoxy(27,2); printf("Address");
					gotoxy(55,2); printf("Roll");
					gotoxy(65,2); printf("Course");
			      for(i=1;i<80;i++) { gotoxy(i,3); printf("%c",205); }
			      list(start,row,sl);
			      gotoxy(10,22); printf("Press any key to exit List .....");
			      getch(); break;
		   case '3' : clrscr(); modify(start);
			      gotoxy(10,22); printf("Press any key to exit Modification .....");
			      getch(); break;
		   case '4' : clrscr(); insert_a(start);
			      gotoxy(10,22); printf("Press any key to exit Insertion .....");
			      getch(); break;
		   case '5' : clrscr(); gotoxy(20,5); printf("Enter roll for Insertion : ");
			       fflush(stdin); scanf("%d",&roll);
				 if(start->roll==roll)
				{ p=start;
				  start=(node*)malloc(1*sizeof(node));
                                  gotoxy(10,8); printf("Name    : ");
				  gotoxy(10,9); printf("Roll    : ");
				  gotoxy(10,10); printf("Address : ");
				  gotoxy(10,11); printf("Course  : ");
				  gotoxy(20,8); fflush(stdin); gets(start->name);
				  gotoxy(20,9); fflush(stdin); scanf("%d",&start->roll);
				  gotoxy(20,10); fflush(stdin); gets(start->add);
				  gotoxy(20,11); fflush(stdin); gets(start->course);
				  start->next=p; break;
				}
			      insert_b(start,roll);
			      gotoxy(10,22); printf("Press any key to exit Insertion .....");
			      getch(); break;
		   case '6' : clrscr(); gotoxy(20,5); printf("Enter roll for Deletion : ");
			       fflush(stdin); scanf("%d",&roll);
				if(start->roll==roll)
				 { start=start->next; gotoxy(10,22);
				   printf("Press any key exit Deletion .....");
				   getch(); break;
				 }
			       delete(start,roll);
			       gotoxy(10,22); printf("Press any key exit Deletion .....");
			       getch(); break;
		   case '7' : clrscr(); gotoxy(25,12); printf("Thank You for Your Co-opration.");
			      sleep(2); clrscr(); exit(0);
		   default  : gotoxy(10,22); printf("Invalid Input .....  Check Again.\a");
			      getch(); break;
		 }
     }while(1);
}

 node *append(node *create)
{
 clrscr(); printf("\n\n\n\t\tEnter Student Name ( X to Exit ) : ");
	   fflush(stdin); gets(create->name);
	     if(strcmpi(create->name,"X")==0)
	       { create->next=NULL; return(create); }
	   printf("\n\t\tEnter Student Address : ");
	   fflush(stdin); gets(create->add);
	   printf("\n\t\tEnter Student Roll    : ");
	   fflush(stdin); scanf("%d",&create->roll);
	   printf("\n\t\tEnter Student Course  : ");
	   fflush(stdin); gets(create->course);
	      create->next=(node*)malloc(1*sizeof(node));
    append(create->next);
}

 list(node *show, int r, int sl)
{
 if(show->next!=NULL)
 {
  gotoxy(2,r); printf("%d.",sl);
  gotoxy(6,r); printf("%s",show->name);
  gotoxy(27,r); printf("%s",show->add);
  gotoxy(55,r); printf("%d",show->roll);
  gotoxy(65,r); printf("%s",show->course); r++; sl++;
  list(show->next,r,sl);
 } return;
}

 modify(node *change)
{
 int roll;  node *rec, *find();
 gotoxy(20,5); printf("Enter Roll for Modification : ");
 fflush(stdin); scanf("%d",&roll);
   rec=find(change,roll);
    if(rec==NULL) { gotoxy(10,12); printf("Record Doesn't Exsist\a"); return; }
       gotoxy(10,8); printf("Name    : ");
       gotoxy(10,9); printf("Roll    : ");
       gotoxy(10,10); printf("Address : ");
       gotoxy(10,11); printf("Course  : ");
       gotoxy(20,8); printf("%s",rec->name);
       gotoxy(20,9); printf("%d",rec->roll);
       gotoxy(20,10); printf("%s",rec->add);
       gotoxy(20,11); printf("%s",rec->course);
       gotoxy(40,15); printf("Press any key to remove the record."); getch();
       gotoxy(20,8); printf("                                     ");
       gotoxy(20,9); printf("                                     ");
       gotoxy(20,10); printf("                                     ");
       gotoxy(20,11); printf("                                     ");
       gotoxy(40,15); printf("                                     ");
       gotoxy(20,8); fflush(stdin); gets(rec->name);
       gotoxy(20,9); fflush(stdin); scanf("%d",&rec->roll);
       gotoxy(20,10); fflush(stdin); gets(rec->add);
       gotoxy(20,11); fflush(stdin); gets(rec->course);
}

 insert_a(node *add_a)
{
 int roll;  node *rec, *new, *find();
  gotoxy(20,5); printf("Enter roll for Insertion : ");
  fflush(stdin); scanf("%d",&roll);
    rec=find(add_a,roll);
     if(rec==NULL) { gotoxy(10,12); printf("Record Dosen't Exsist."); return; }
  new=(node*)malloc(1*sizeof(node));
    gotoxy(10,8); printf("Name    : ");
    gotoxy(10,9); printf("Roll    : ");
    gotoxy(10,10); printf("Address : ");
    gotoxy(10,11); printf("Course  : ");
    gotoxy(20,8); fflush(stdin); gets(new->name);
    gotoxy(20,9); fflush(stdin); scanf("%d",&new->roll);
    gotoxy(20,10); fflush(stdin); gets(new->add);
    gotoxy(20,11); fflush(stdin); gets(new->course);
      new->next=rec->next;  rec->next=new;
 return;
}

 insert_b(node *add_b, int r)
{
 node *rec, *new, *anotherfind();
   rec=anotherfind(add_b,r);
     if(rec==NULL) { gotoxy(10,12); printf("Record Dosen't Exsist."); return; }
  new=(node*)malloc(1*sizeof(node));
    gotoxy(10,8); printf("Name    : ");
    gotoxy(10,9); printf("Roll    : ");
    gotoxy(10,10); printf("Address : ");
    gotoxy(10,11); printf("Course  : ");
    gotoxy(20,8); fflush(stdin); gets(new->name);
    gotoxy(20,9); fflush(stdin); scanf("%d",&new->roll);
    gotoxy(20,10); fflush(stdin); gets(new->add);
    gotoxy(20,11); fflush(stdin); gets(new->course);
      new->next=rec->next;  rec->next=new;
 return;
}

 delete(node *remove, int r)
{
 node *del, *rec, *find(), *anotherfind();
  rec=find(remove,r);
   if(rec==NULL) { gotoxy(10,12); printf("Record Dosen't Exsist."); return; }
     del=anotherfind(remove,r);  del->next=rec->next;
 return;
}
 node *find(node *found, int r)
{
  if(found->roll==r)  return(found);
    if(found->next==NULL)  return(NULL);
      find(found->next,r);
}

 node *anotherfind(node *anotherfound, int r)
{
 node *prec;
  if(anotherfound->roll==r)  return(prec);
  if(anotherfound->next==NULL)  return(NULL);
   prec=anotherfound;
     anotherfind(anotherfound->next,r);
}
































