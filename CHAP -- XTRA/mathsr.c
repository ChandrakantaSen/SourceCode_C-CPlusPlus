#include<math.h>
/* assignment no 22,23,24,25,26 */
void main()
{
 float i,j,s,x;
 int n,fact(int),p;
 char ch;
 do{
 s=0;
 clrscr();
 printf("\t\t\t** Sum of Serise **\n\n");
 printf("\t\t1 <== S=1+X+X^3+X^5+..........\n");
 printf("\t\t2 <== S=1+(1+2)+(1+2+3)+......\n");
 printf("\t\t3 <== S=1+2/2!+3/3!+4/4!+.....\n");
 printf("\t\t4 <== 1+X+X^2/2!+X^3/3!+......\n");
 printf("\t\t5 <== Sin(X)=X-X^3/3!+X^5/5!..\n");
 printf("\t\t6 <== Exit\n\n");
 printf("\t\tChoice Please ....[1-6] "); ch=getche();
 printf("\n\t\t====================================\n");
 if (ch=='6') exit();
 printf("\tEnter the nth Term :  "); scanf("%d",&n);
 switch(ch)
 {
 case '1':
    printf("\tEnter the Value of X : "); scanf("%f",&x);
    s=1.0;
    for(i=1;i<=n;i+=2)
    {
    s=s+x+pow(x,i);
    }
    printf("\n\tThe sum of the Serise [ %c ] = %f",ch,s);
    getch();
    break;
 case '2':
    s=0;
    for(i=1;i<=n;i++)
     for(j=1;j<=i;j++)
       s+=j;
    printf("\n\tThe sum of the Serise [ %c ] = %.0f",ch,s);
    getch();
    break;
 case '3':
    s=0.0;
    n=fact(n);
    for(i=1;i<=n;i++)
     s+=i/fact(i);
    printf("\n\tThe sum of the Serise [ %c ] = %f",ch,s);
    getch();
    break;
 case '4':
    s=1.0;
    printf("\tEnter the Value of X : "); scanf("%f",&x);
    for(i=1;i<=n;i++)
     s=s+x+x/fact(i);
    printf("\n\tThe sum of the Serise [ %c ] = %f",ch,s);
    getch();
    break;
 case '5':
    s=0.0;
    printf("\tEnter the Value of X : "); scanf("%f",&x);
    for(i=1,p=1;i<=n;i+=2,p++)
    {
    if(p%2==0)
     s+=pow(x,i)/fact(i);
    else
     s-=pow(x,i)/fact(i);
    }
    printf("\n\tThe sum of the Serise [ %c ] = %f",ch,s);
    getch();
    break;
 }
 }while(1);
 }
/***********************/
 int fact(int n)
 {
  if(n==0) return 1;
  return(n*fact(n-1));
 }
