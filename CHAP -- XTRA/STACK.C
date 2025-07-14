
  /*   A Program to Display Stack Conception in Data Structure   */


# include <stdio.h>

 typedef struct stack { int num;
			struct stack *next;
		      }node;

 int i,down=8,up;
 node *number, *start;

 main()
{
 node *push(), *pop(); char ch; int b;  clrscr(); stack_box();
 gotoxy(21,4); printf("Data Structure Using Stack Conception");
 gotoxy(16,5); printf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(55,22); printf("Stack Container");
 number=(node*)malloc(1*sizeof(node)); start=number;
 do{ gotoxy(8,9); printf("1. Push into Stack.");
     gotoxy(8,10); printf("2. Pop from Stack.");
     gotoxy(8,11); printf("3. Exit.");
     gotoxy(15,15); printf("Your Choice Please : ");
     gotoxy(36,15); fflush(stdin); ch=getche();
     switch(ch) {
		  case '1' : number=push(number); break;
		  case '2' : b=up; number=pop(start,b); b++; up=b; break;
		  case '3' : clrscr(); exit();
		  default  : gotoxy(10,20); printf("Too Careless ..... Press any Key."); getch();
			     gotoxy(10,20); printf("                                   ");
			     gotoxy(36,15); printf("  ");
		}
   }while(1);
}

 node *push(node *create)
{
 gotoxy(55,11); printf("                   ");
 if(i==5) { gotoxy(8,15); printf("                                  ");
	    gotoxy(55,11); printf("Stack is Full");
	    create->next=NULL; create=(node*)malloc(1*sizeof(node));
	    return(create); }
 gotoxy(8,15); printf("Enter any Number [ 0 to Exit ] : "); fflush(stdin);
 gotoxy(41,15); scanf("%d",&create->num); gotoxy(41,15); printf("  ");
 if(create->num==0) { gotoxy(8,15); printf("                                  ");
		      create->next=NULL; return(create); }
  else { i++; push_list(create,down); down--;
	 create->next=(node*)malloc(1*sizeof(node)); push(create->next); }
}

 push_list(node *show, int d)
{
 int i,n,row=11;  n=show->num;
  for(i=0;i<d;i++,row++)
  { gotoxy(61,row); printf("%d",n); delay(2000);
    gotoxy(61,row); printf("   ");
  }
 gotoxy(61,row); printf("%d",n); up=row;
}

 node *pop(node *end, int b)
{
 int n,a;
 gotoxy(55,11); printf("               "); gotoxy(36,15); printf("  ");
 if(end->next==NULL) { gotoxy(55,11); printf("Stack is Empty");
		       start=number; return; }
 if(end->next->next==NULL)
   { end->next=NULL; n=end->num;
       for(a=11;b>a;b--) { gotoxy(61,b); printf("%d",n); delay(2000);
			   gotoxy(61,b); printf("  "); }
     down++; i--; return(end);
   }

 pop(end->next,b);
}

 stack_box()
{
 gotoxy(58,14); printf("¿      Ú");
 gotoxy(58,15); printf("³      ³");
 gotoxy(58,16); printf("³      ³");
 gotoxy(58,17); printf("³      ³");
 gotoxy(58,18); printf("³      ³");
 gotoxy(58,19); printf("³      ³");
 gotoxy(58,20); printf("ÀÄÄÄÄÄÄÙ");
}






