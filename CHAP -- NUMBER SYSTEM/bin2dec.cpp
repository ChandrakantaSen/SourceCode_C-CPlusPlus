#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
int n,s=0,m,d,c=0;
cout<<"Enter the number in binary and convert it into its binary form : - "<<endl;
cin>>n;
m=n;
while(m>0)
{
d=m%10;
if((d!=1)&&(d!=0))
{
cout<<"The number is not in binary form ..."<<endl;
getch();
exit(0);
}
m=m/10;
}
m=n;
while(m>0)
{
d=m%10;
s=s+d*pow(2,c);
c++;
m=m/10;
}
cout<<"The decimal form of "<<n<<" is : - "<<s<<endl;
getch();
}