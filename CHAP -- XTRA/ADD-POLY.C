#include<stdio.h>
#include<conio.h>
typedef struct polynomial
{
 int coffi;
 int power;
 struct polynomial *next;
}rec;
/***********************************************************/
void main()
{
rec *poly_1,*poly_2,*poly_3,*add_poly(rec *,rec *);
void build_poly(rec *),show_poly(rec *);

poly_1=(rec *)malloc(sizeof(rec));  /* Head node creations */
poly_2=(rec *)malloc(sizeof(rec));

printf("Enter Values for First Polynomial \n\n");
build_poly(poly_1);      	     /* build the polynomial 1 */

printf("Enter Values for Second Polynomial \n\n");
build_poly(poly_2);              /* build the polynomial 2 */

poly_3=add_poly(poly_1,poly_2);  /* Add two polynomials    */


show_poly(poly_3);               /* Show the polynomials   */
}
/**************** end of main() ****************************/
void build_poly(rec *p)
{   char ch;
 do{
   printf("\nEnter Cofficient : "); scanf("%d",&p->coffi);
   printf("Enter Exponent   : "); scanf("%d",&p->power);
   printf("Continue [y/n]   : "); ch=toupper(getche());
   if(ch=='N')
   { p->next=NULL; break; }
   p->next=(rec *)malloc(sizeof(rec));
   p=p->next;
 }while(1);
}
/***********************************************************/
void show_poly(rec *p)
{
 do{
     if(p->coffi<0)
      printf("-%d X ^ %d",p->coffi,p->power);
     else
      printf("+%d X ^ %d",p->coffi,p->power);
    if(p->next==NULL) break;
    p=p->next;
  }while(1);
getch();
}
/***********************************************************/
rec *add_poly(rec *p,rec *q)
{
 rec *head,*result=(rec *)malloc(sizeof(rec));
     result->next=NULL;  head=result;
  do{
  if(p->power==q->power)
   {
     result->coffi=p->coffi+q->coffi;
     result->power=p->power;
     p=p->next; q=q->next;
   }
  else if(p->power>q->power)
   {
     result->coffi=p->coffi;
     result->power=p->power;
     p=p->next;
   }
  else
   {
     result->coffi=q->coffi;
     result->power=q->power;
     q=q->next;
   }

 if(p==NULL || q==NULL) break;

  result->next=(rec *)malloc(sizeof(rec));
  result=result->next; result->next=NULL;

}while(1);

if(p==NULL && q!=NULL)
{
    do{
	 result->coffi=q->coffi;
	 result->power=q->power;

	 if(q->next==NULL) break;

	 result->next=(rec *)malloc(sizeof(rec));
	 result->next->next=NULL;
	 result=result->next; q=q->next;
      }while(1);
}

if(q==NULL && p!=NULL)
{
    do{
	 result->coffi=p->coffi;
	 result->power=p->power;

	 if(p->next==NULL) break;

	 result->next=(rec *)malloc(sizeof(rec));
	 result->next->next=NULL; p=p->next;
     }while(1);
}
return(head);
}
/***********************************************************/
