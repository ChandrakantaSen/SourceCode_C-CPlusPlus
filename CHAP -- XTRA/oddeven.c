

  /*   A Program to sort Odd & Even numbers using Stack Conception   */


# include <stdio.h>

 typedef struct stack { int num;
			struct stack *next;
		      }node;

 int i,down=8,odd_down=8,even_down=8;

 main()
{
 node *number, *start, *push();  char ch;
 clrscr(); stack_box(); odd_box(); even_box();
 gotoxy(10,3); printf("Push Random Numbers in Stack and display Odd & Even Numbers");
 gotoxy(7,4); printf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(12,24); printf("Stack Container");
 gotoxy(36,24); printf("Even Box");
 gotoxy(58,24); printf("Odd Box");
 number=(node*)malloc(1*sizeof(node)); start=number; number->num=-1;
 do{ gotoxy(8,7); printf("1. Push into Stack.");
     gotoxy(8,8); printf("2. Display Odd & Even Numbers.");
     gotoxy(8,9); printf("3. Exit.");
     gotoxy(30,11); printf("Your Choice Please : ");
     gotoxy(51,11); fflush(stdin); ch=getche();
     switch(ch) {
		  case '1' : sp(); number=push(number); break;
		  case '2' : oddeven(start); number=(node*)malloc(1*sizeof(node));
			     start=number; number->num=-1; i=0; down=8;
			     odd_down=8; even_down=8; break;
		  case '3' : clrscr(); gotoxy(20,12);
			     printf("Have A Funny Day With Link List .....");
			     sleep(2); clrscr(); exit();
		  default  : gotoxy(30,11); printf("Too Careless ..... Press any Key."); getch();
			     gotoxy(30,11); printf("                                   ");
		}
   }while(1);
}

 node *push(node *create)
{
 gotoxy(12,12); printf("                   ");
 if(i==7) { gotoxy(30,11); printf("                                   ");
	    gotoxy(13,12); printf("Stack is Full");
	    create->next=NULL; return(create);
	  }
 gotoxy(30,11); printf("Enter any Number [ 0 to Exit ] : "); fflush(stdin);
 gotoxy(63,11); scanf("%d",&create->num); gotoxy(63,11); printf("   ");
 if(create->num==0) { gotoxy(30,11); printf("                                  ");
		      create->next=NULL; return(create); }
  else { i++; push_list(create,down); down--;
	 create->next=(node*)malloc(1*sizeof(node)); push(create->next); }
}

 push_list(node *show, int d)
{
 int i,n,row=13;  n=show->num;
  for(i=0;i<d;i++,row++)
  { gotoxy(18,row); printf("%d",n); delay(2000);
    gotoxy(18,row); printf("   ");
  }
 gotoxy(18,row); printf("%d",n);
}

 oddeven(node *number_1)
{
 node *odd, *even, *oddnumber(), *evennumber();  int n,r;
 gotoxy(51,11); printf("  ");
 if((number_1->num==-1)||(number_1->next==NULL))
    { gotoxy(12,12); printf("Stack is Empty"); gotoxy(18,14); printf("   ");
      gotoxy(18,15); printf("   "); gotoxy(18,16); printf("   ");
      gotoxy(18,17); printf("   "); gotoxy(18,18); printf("   ");
      gotoxy(18,19); printf("   "); gotoxy(18,20); printf("   ");
      gotoxy(18,21); printf("   "); return;

    }
  odd=number_1; even=number_1;
   if(number_1->next==NULL) return;
    n=number_1->num; r=n%2;
     if(r==0) { odd=oddnumber(odd); oddeven(number_1->next); }
	else  { even=evennumber(even); oddeven(number_1->next); }
}

 node *oddnumber(node *odd_number)
{
 node *new; int odd;
  new=(node*)malloc(1*sizeof(node));
    new->num=odd_number->num; odd=new->num;
      odd_display(odd,odd_down); odd_down--;
  new->next=(node*)malloc(1*sizeof(node));
  new->next->next=NULL;
  return(new->next);
}

 node *evennumber(node *even_number)
{
 node *new_1; int even;
  new_1=(node*)malloc(1*sizeof(node));
    new_1->num=even_number->num; even=new_1->num;
      even_display(even,even_down); even_down--;
  new_1->next=(node*)malloc(1*sizeof(node));
  new_1->next->next=NULL;
  return(new_1->next);
}

 odd_display(int show_odd, int d)
{
 int i,n,row=13;
  for(i=0;i<d;i++,row++)
  { gotoxy(39,row); printf("%d",show_odd); delay(2000);
    gotoxy(39,row); printf("   ");
  }
 gotoxy(39,row); printf("%d",show_odd);
}

 even_display(int show_even, int d)
{
 int i,n,row=13;
  for(i=0;i<d;i++,row++)
  { gotoxy(60,row); printf("%d",show_even); delay(2000);
    gotoxy(60,row); printf("   ");
  }
 gotoxy(60,row); printf("%d",show_even);
}

 stack_box()
{
 gotoxy(15,14); printf("¿      Ú");
 gotoxy(15,15); printf("³      ³");
 gotoxy(15,16); printf("³      ³");
 gotoxy(15,17); printf("³      ³");
 gotoxy(15,18); printf("³      ³");
 gotoxy(15,19); printf("³      ³");
 gotoxy(15,20); printf("³      ³");
 gotoxy(15,21); printf("³      ³");
 gotoxy(15,22); printf("ÀÄÄÄÄÄÄÙ");
}

 odd_box()
{
 gotoxy(36,14); printf("¿      Ú");
 gotoxy(36,15); printf("³      ³");
 gotoxy(36,16); printf("³      ³");
 gotoxy(36,17); printf("³      ³");
 gotoxy(36,18); printf("³      ³");
 gotoxy(36,19); printf("³      ³");
 gotoxy(36,20); printf("³      ³");
 gotoxy(36,21); printf("³      ³");
 gotoxy(36,22); printf("ÀÄÄÄÄÄÄÙ");
}

 even_box()
{
 gotoxy(57,14); printf("¿      Ú");
 gotoxy(57,15); printf("³      ³");
 gotoxy(57,16); printf("³      ³");
 gotoxy(57,17); printf("³      ³");
 gotoxy(57,18); printf("³      ³");
 gotoxy(57,19); printf("³      ³");
 gotoxy(57,20); printf("³      ³");
 gotoxy(57,21); printf("³      ³");
 gotoxy(57,22); printf("ÀÄÄÄÄÄÄÙ");
}

 sp()
{
 gotoxy(39,14); printf("   "); gotoxy(39,15); printf("   ");
 gotoxy(39,16); printf("   "); gotoxy(39,17); printf("   ");
 gotoxy(39,18); printf("   "); gotoxy(39,19); printf("   ");
 gotoxy(39,20); printf("   "); gotoxy(39,21); printf("   ");
 gotoxy(60,14); printf("   "); gotoxy(60,15); printf("   ");
 gotoxy(60,16); printf("   "); gotoxy(60,17); printf("   ");
 gotoxy(60,18); printf("   "); gotoxy(60,19); printf("   ");
 gotoxy(60,20); printf("   "); gotoxy(60,21); printf("   ");
}




