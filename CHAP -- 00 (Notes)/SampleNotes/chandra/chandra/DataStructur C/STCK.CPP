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
 int ch=0,item=0;
 while(1)
 {
 printf("1 for push \n 2. for pop \n 3. display \n Enter Your choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1 :
      if(top==(Max_size-1))
      {
	 printf("\n over flow ");
       }
	 else
	 {
	    printf("Enter the value");
	    scanf("%d",&item);
	    push(item);
	 }

	 break;

  case 2:
	  if(top==-1)
	  {
	    printf(" underflow ");
	  }
	   else
	 {
	    pop();
	  }
	  break;
   case 3:
	  display();
	  break;
   case 4:
	   exit(0);
	       default:
    printf("wrong choice ");
    }

    }

    }
    void push(int t)
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
