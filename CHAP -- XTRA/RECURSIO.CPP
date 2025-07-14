#include<iostream.h>
#include<conio.h>
class fact
{
public:
long factorial(long a)
{
 if(a>1)
 {
 return(a*factorial(a-1));
    }
 else
 {
 return(1);
 }
 }
};
 void main()
 {
 fact f;
 long l;
 clrscr();
 cout<<"Type a number:";
 cin>>l;
 cout<<"!"<<l<<"="<<f.factorial(l);
 getch();
 }



