#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class string
{
public:
char str2[100],str1[100];
inline void input()
{
cout<<"Enter the string : - "<<endl;
cin>>str1;
}
void display()
{
cout<<"The entered string is  "<<str1<<endl;
}
void copy()
{
strcpy(str2,str1);
cout<<"The copied string is : - "<<str2<<endl;
}
void reverse()
{
cout<<"The reverse of the upper string is : - "<<strrev(str1)<<endl;
}
};
void main()
{
string ob;
ob.input();
ob.display();
ob.copy();
ob.reverse();
getch();
}