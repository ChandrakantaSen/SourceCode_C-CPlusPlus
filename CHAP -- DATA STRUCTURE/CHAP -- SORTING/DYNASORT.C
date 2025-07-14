
# include <stdio.h>

 typedef struct d_sort { int num;
			 struct d_sort *next;
		       }node;
  int a,c=1;

 main()
{
 node *start; clrscr(); gotoxy(5,5); printf("Dynamic Sort");
  start=(node*)malloc(1*sizeof(node));
   stack_entry(start);
  gotoxy(40,12); printf("END"); getch();
}

 stack_entry(node *number)
{
 node *first, *second;
 first=number;
 if(c==2)
  { first=second; }
 gotoxy(10,10); printf("Enter Number : "); fflush(stdin);
 scanf("%d",&number->num); a++;
  if(a==5) { number->next=NULL; list(first,0,a,20); return; }
   number->next=NULL;
  stack_sort(first); list(first,0,a,20); second=first;
   number->next=(node*)malloc(1*sizeof(node)); c=2;
    stack_entry(number->next);
}

 stack_sort(node *number_1)
{
 int swap;
  if(number_1->next==NULL) return;
  if(number_1->num<number_1->next->num)
  {
   swap=number_1->num;
   number_1->num=number_1->next->num;
   number_1->next->num=swap;
  }
 stack_sort(number_1->next);
}

 list(node *show, int ck, int t, int row)
{
 /*gotoxy(1,1); printf("%d",ck);*/
  while(ck<t)
  {
   gotoxy(50,row);
   printf("%d",show->num);
   row--; ck++;
   list(show->next,ck,t,row);
  }
 return;
}