
  /*   A Program to Display Double-Ended Queue Conception in Data Structure   */

#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
void queue_box();
 typedef struct queue { int num;
			struct queue *next;
			struct queue *before;
		      }node;

 int flag=1,i,down=8,row=13;    /*,check;*/
 node *number, *reverse;
 main()
{
 node *push(), *pop(); char ch;  clrscr(); //queue_box();
 gotoxy(9,4); printf("Data Structure Using Double Ended Queue [ D-Queue ] Conception.");
 gotoxy(6,5); printf("ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ");
 gotoxy(54,23); printf("Queue Container");
 number=(node*)malloc(1*sizeof(node)); reverse=number; reverse->num=-1;
 number->next=NULL; number->before=NULL;
 do{
     gotoxy(8,9); printf("1. Push and Display into Queue.");
     gotoxy(8,10); printf("2. Reverse Display from Queue.");
     gotoxy(8,11); printf("3. Exit.");
     gotoxy(15,15); printf("Your Choice Please : ");
     gotoxy(36,15); fflush(stdin); ch=getche();
     switch(ch) {
		  case '1' : number=push(number); break;
		  case '2' : sp(); reverse_list(reverse); break;
		  case '3' : clrscr(); exit(0);
		  default  : gotoxy(10,20); printf("Too Careless ..... Press any Key."); getch();
			     gotoxy(10,20); printf("                                   ");
			     gotoxy(36,15); printf("  ");
		}
   }while(1);
}

 node *push(node *create)
{
 gotoxy(55,9); printf("                   ");  /*if(i==0) start=create;*/
 if(i==5) { gotoxy(8,15); printf("                                  ");
	    gotoxy(56,9); printf("Queue is Full");
	    create->next=NULL; if(flag==1) reverse=create->before; flag=2;
	    create=(node*)malloc(1*sizeof(node)); create->before=NULL;
	    create->next=NULL; return(create);
	  }
 gotoxy(8,15); printf("Enter any Number [ 0 to Exit ] : "); fflush(stdin);
 gotoxy(41,15); scanf("%d",&create->num); gotoxy(41,15); printf("  ");
 if(create->num==0) { gotoxy(8,15); printf("                                  ");
		      create->next=NULL; reverse=create->before; return(create);
		    }
  else { i++; push_list(create,down); down--;
	 create->next=(node*)malloc(1*sizeof(node));
	 create->next->before=create; push(create->next); }
}

 push_list(node *show, int d)
{
 int i,n,row=9;  n=show->num;
  for(i=0;i<d;i++,row++)
  { gotoxy(61,row); printf("%d\b",n); delay(2000);
    gotoxy(61,row); printf("   ");
  }
 gotoxy(61,row); printf("%d",n);
}

 reverse_list(node *end)
{
 if(end->num==-1) { gotoxy(56,9); printf("Queue is Empty");
		    gotoxy(36,15); printf("   "); getch();
		    gotoxy(56,9); printf("                "); return;
		  }
 if(end->before==NULL)
   { gotoxy(61,row); printf("%d",end->num);
     gotoxy(36,15); printf(" \b");
     gotoxy(56,9); printf("Press any Key ....."); getch();
     gotoxy(56,9); printf("                   "); gotoxy(36,15);
     sp(); return;
   }
 gotoxy(61,row); printf("%d",end->num); row++; delay(5000);
 reverse_list(end->before);
}

 sp()
{
 gotoxy(61,10); printf("   ");
 gotoxy(61,11); printf("   ");
 gotoxy(61,12); printf("   ");
 gotoxy(61,13); printf("   ");
 gotoxy(61,14); printf("   ");
 gotoxy(61,15); printf("   ");
 gotoxy(61,16); printf("   ");
 gotoxy(61,17); printf("   ");
 gotoxy(61,18); printf("   ");
}

/* queue_box()
{
 gotoxy(58,12); printf("¿      Ú");
 gotoxy(58,13); printf("³      ³");
 gotoxy(58,14); printf("³      ³");
 gotoxy(58,15); printf("³      ³");
 gotoxy(58,16); printf("³      ³");
 gotoxy(58,17); printf("³      ³");
 gotoxy(58,18); printf("Ù      À");
}*/






/* node *pop(node *end)
{
 int n,a;
 if((end->num==-1)||(end->next==NULL))
   { gotoxy(36,15); printf("   "); gotoxy(55,9);
     printf("Queue is Empty"); return(end); }
 gotoxy(55,9); printf("               "); gotoxy(36,15); printf("  ");
 n=end->num; end=end->next;
    for(a=17;a<22;a++) { gotoxy(61,a); printf("%d",n); delay(2000);
			 gotoxy(61,a); printf("  "); }
     down++; i--; print_space(); queue_list(end,17); return(end);
}

 queue_list(node *show, int row)
{
 if(show->next==NULL) return;
   gotoxy(61,row); printf("%d",show->num); row--;
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
}*/








