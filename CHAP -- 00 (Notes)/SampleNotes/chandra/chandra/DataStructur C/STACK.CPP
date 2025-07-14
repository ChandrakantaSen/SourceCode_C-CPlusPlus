 #include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #define Max_size 5
 int stck[Max_size];
 int top=-1;
 void push(int);
 void pop();
 void display();
 void main()
 {
 clrscr();
int  item=0;
 printf("Enter the value");
	    scanf("%d",&item);
	    push(item);
 printf("Enter the value");
	    scanf("%d",&item);
	    push(item);

	    display();
	    pop();
	    display();

  getch();
  } void push(int t)
      {
    top=top+1;
    stck[top]=t;
    }
    void pop()
    {
    int d=0;
    d=stck[top];
    top=top-1;
    }
    void display()
    {
    int i=0;
    printf(" Elements in stack are \n");
    for(i=0;i<=top;i++)
    {
    printf("\n %d",stck[i]);
   }
   }
