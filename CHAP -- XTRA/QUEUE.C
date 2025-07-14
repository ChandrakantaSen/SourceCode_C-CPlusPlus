
  /*   A Program to Display Queue Conception in Data Structure   */

# include <stdio.h>

 typedef struct stack { int num;
			struct stack *next;
		      }node;

 int i,down=8,check;
 node *number, *start;

 main()
{
 node *push(), *pop(); char ch;  clrscr(); queue_box();
 gotoxy(21,4); printf("Data Structure Using Queue Conception");
 gotoxy(16,5); printf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(54,23); printf("Queue Container");
 number=(node*)malloc(1*sizeof(node)); start=number; start->num=-1;
 do{ gotoxy(8,9); printf("1. Push into Queue.");
     gotoxy(8,10); printf("2. Pop from Queue.");
     gotoxy(8,11); printf("3. Exit.");
     gotoxy(15,15); printf("Your Choice Please : ");
     gotoxy(36,15); fflush(stdin); ch=getche();
     switch(ch) {
		  case '1' : check=1; number=push(number); break;
		  case '2' : start=pop(start); break;
		  case '3' : clrscr(); exit();
		  default  : gotoxy(10,20); printf("Too Careless ..... Press any Key."); getch();
			     gotoxy(10,20); printf("                                   ");
			     gotoxy(36,15); printf("  ");
		}
   }while(1);
}   /*   end of main()   */

 node *push(node *create)
{
 gotoxy(55,9); printf("                   ");  if(i==0) start=create;
 if(i==5) { gotoxy(8,15); printf("                                  ");
	    gotoxy(56,9); printf("Queue is Full");
	    create->next=NULL; create=(node*)malloc(1*sizeof(node));
	    return(create); }
 gotoxy(8,15); printf("Enter any Number [ 0 to Exit ] : "); fflush(stdin);
 gotoxy(41,15); scanf("%d",&create->num); gotoxy(41,15); printf("  ");
 if(create->num==0) { gotoxy(8,15); printf("                                  ");
		      create->next=NULL; return(create); }
  else { i++; push_list(create,down); down--;
	 create->next=(node*)malloc(sizeof(node)); push(create->next); }
}

 push_list(node *show, int d)
{
 int i,n,row=9;  n=show->num;
  for(i=0;i<d;i++,row++)
  { gotoxy(61,row); printf("%d\b",n); delay(1000);
    gotoxy(61,row); printf("   ");
  }
 gotoxy(61,row); printf("%d\b",n);
}

 node *pop(node *end)
{
 int n,a;
 if((end->num==-1)||(end->next==NULL))
   { gotoxy(36,15); printf("   "); gotoxy(55,9);
     printf("Queue is Empty"); return(end); }
 gotoxy(55,9); printf("               "); gotoxy(36,15); printf("  ");
 n=end->num; end=end->next;
    for(a=17;a<22;a++) { gotoxy(61,a); printf("%d\b",n); delay(1000);
			 gotoxy(61,a); printf("  "); }
     down++; i--; print_space(); queue_list(end,17);
     /*  if(check==1) search_last(end); check=2; */ return(end);
}

 queue_list(node *show, int row)
{
 if(show->next==NULL) return;
   gotoxy(61,row); printf("%d\b",show->num); row--;
 queue_list(show->next,row);
}

 search_last(node *last)
{
 node *new;
  if(last->next==NULL) { new=(node*)malloc(1*sizeof(node));
			 new->next=NULL; last=new;
			 number=last; return;
		       }
  search_last(last->next);
}

 print_space()
{
 gotoxy(61,17); printf("   "); gotoxy(61,16); printf("   ");
 gotoxy(61,15); printf("   "); gotoxy(61,14); printf("   ");
 gotoxy(61,13); printf("   ");
}

 queue_box()
{
 gotoxy(58,12); printf("¿      Ú");
 gotoxy(58,13); printf("³      ³");
 gotoxy(58,14); printf("³      ³");
 gotoxy(58,15); printf("³      ³");
 gotoxy(58,16); printf("³      ³");
 gotoxy(58,17); printf("³      ³");
 gotoxy(58,18); printf("Ù      À");
}






