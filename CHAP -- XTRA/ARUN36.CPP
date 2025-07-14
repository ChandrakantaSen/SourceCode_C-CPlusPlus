	   //  lllustration of sigle inheritance.//
#include<iostream.h>
#include<conio.h>
class basecl
      {
  private:
     float x;
public:
float y;
void enter();
float result();
void display();
};
class dercl:public basecl   //single inheritance whith
			     //public visibility mode//
{
private:
float z;
public:
   void prod(void);
   void show(void);
};
void basecl::enter()
{
 cout<<"enter the number x";
cin>>x;
cout<<"\n enter the number";
cin>>y;
}
float basecl::result()
{
return x;
}
void basecl::display()
{
cout<<"the first no.entered is="<<x<<endl;
}
void dercl::prod()
{
enter();
z=y*result();
}
void dercl::show()
{
display();
cout<<"the second no.entered is="<<y<<endl;
cout<<"the product of the two is="<<z<<endl;
}
int main()
{
clrscr();
dercl obtain;  //declaring an instance obtain of the class dercl//
obtain.prod();
obtain.show();
getch();
return 0;
}
