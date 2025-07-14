/********** ADDING TWO NUMBERS OF ANY SIZE ***************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
      char *num1,*num2,*result,ch;
      int i,n,m,c,k,temp1,temp2,temp3,t=1,flag,p,q,b;
      while(t==1){
		clrscr();
		printf("\n\n * ADDITION \n");
		printf("---------------------");
		i=0; p=-2; flag=0;
		printf("\n\nEnter first number : ");
		num1=(char*)malloc(sizeof(char));
		do{
		  ch=getche();
		  *(num1+i++)=ch;
		  if(ch==46||flag==1)
		    { flag=1;  ++p; }
		  num1=realloc(num1,sizeof(char)*(i+1));
		 }while(ch!=13);
		*(num1+i)='\0';
		n=i-1;
		printf("\n\nEnter second number : ");
		 q=-2;i=0; flag=0;
		num2=(char*)malloc(sizeof(char));
		do{
		  ch=getche();
		  *(num2+i++)=ch;
		  if(ch==46||flag==1)
		    { flag=1;  ++q; }
	       num2=realloc(num2,sizeof(char)*(i+1));
	       }while(ch!=13);
	       *(num2+i)='\0';
	       m=i-1;
	       k=(m>=n)?m:n;
	       result=(char*)malloc(sizeof(char)*k+1);
	       c=0; b=0; i=0;
	       if(p!=0||q!=0)
		  b=(p>=q)?p:q;
	       while(k>=0)
	       {
		while(b>0)
		{
		 flag=2;
		 if(p>q)
		 {
		  temp1=*(num1+n-1)-48;
		  p--; n--;  temp2=0;
		 }
		 else if(q>p)
		 {
		  temp2=*(num2+m-1)-48;
		  q--;   m--;  temp1=0;
		 }
		 else
		 {
		  temp1=*(num1+n-1)-48;
		  temp2=*(num2+m-1)-48;
		  n--;   m--;
		 }
		 b--;
		 temp3=temp1+temp2+c;
		 c=temp3/10;
		 *(result+i++)=temp3%10+48;
		 }/* end of b while */
		 if(flag==2)
		 {
		  if(p!=-2)  n--;
		  if(q!=-2)  m--;
		  *(result+i++)=46;
		  flag=0;
		 }
		 if(n>0)
		 {  temp1=*(num1+n-1)-48;  n--;	 }
		 else
		 temp1=0;

		 if(m>0)
		  { temp2=*(num2+m-1)-48;  m--; }
		 else
		  temp2=0;
		 temp3=temp1+temp2+c;
		 c=temp3/10;
		 *(result+i++)=temp3%10+48;
		 k--;
		 }/* end of k while */
		 if(c==0)
		 *(result+i)='\0';
		 else
		 {
		 *(result+++i)=c+48;
		 *(result+i)='\0';
		 }
		 printf("\n------------------------\n\n");
		 printf("THE RESULT IS = %s",strrev(result));
		 free(num1); free(num2); free(result);
		 printf("\n\n** PRESS 1 TO CONTINUE OR ANY OTHER KEY TO EXIT : ");
		 scanf("%d",&t);
		 } /* end of t while */
		 } /*end of main() */