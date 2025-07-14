#include<stdio.h>
typedef struct node
{
int num;
struct node *next;
}rec;
rec record,*new=&record;
/* new=(rec *)malloc(sizeof(rec));*/

main()
{
char ch;
int n;
new->next='\0';
do{
   clrscr();
   printf("\n\n\t\t              Main Menu \n\n\n\n\n");
   printf(" \t\t1.........Add Numbers\n");
   printf(" \t\t2.........List Numbers in Sorted order\n");
   printf(" \t\t3.........Exit\n\n");
   printf(" \t\tChoise Please.....[1,2,3]...:[ ]\b\b");
   fflush(stdin); ch=getchar();
 switch(ch)
 {
 case '1':
    printf("Enter number"); scanf("%d",&n);
    push(new,n);
    break;
 case '2':
    list(new);
    getch();
    break;
 case '3':
     exit();
 default :
     printf("Invalid Choice"); getch();
 }
}while(1);
}
/************** End of main() ********************/

push(rec *p,int n)
{
 rec *temp;
   if(p->next=='\0')
    {
      p->num=n;
      p->next=(rec *)malloc(sizeof(rec));
      p->next->next='\0';  return;
    }
   else if(p->num >=n && p==new)
    {
      temp=p;
      new=(rec *)malloc(sizeof(rec));
      new->num=n;  new->next=temp; return;
    }
  else if(p->num < n && p->next->next == '\0')
    {
      p->next->num=n;
      p->next->next=(rec *)malloc(sizeof(rec));
      p->next->next->next='\0'; return;
    }
   else if(p->num < n && p->next->next !='\0')
     push(p->next,n);
   else
    {
     temp=p->next;
     p->next=(rec *)malloc(sizeof(rec));
     p->next->num=p->num;p->num=n; p->next->next=temp; return;
    }

}
list(rec *p)
{
if(p->next=='\0')
 return;
printf("%5d",p->num);
 list(p->next);
}