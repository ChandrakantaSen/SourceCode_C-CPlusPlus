#include<iostream.h>
#include<conio.h>
 class basecl
{
protected:
 int count;
void begin()
{
count=0;
}
 void enter (int n)
{
count=n;
}
void fact(void);
};
class dercl: protected basecl
{
public:
dercl():basecl()
{
};
void chcount(int n)
{
enter(n);
fact();
}
};
void basecl::fact(void)
{
int i;
long double factorial=1.0;
for(i=1;i<=count;i++)
factorial=factorial*i;
cout<<"the factorial of "<<count<<"is"<<factorial;
}
int main()
{
int number;
clrscr();
dercl result;             //declaring instance result//
cout<<"enter a positive integer"<<"whose factorial is required"<<endl;
cin>>number;
result.chcount(number);
getch();
return 0;
}
