#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class book
{
public:
float booknumber,price,nocopies;
int bookname,author,publisher;
void input()
{
cout<<"\n\t enter the name of the book :-"<<endl;
cin>>bookname;
cout<<"\n\t enter the book number :-"<<endl;
cin>>booknumber;
cout<<"\n\t enter the name of the author :-"<<endl;
cin>>author;
cout<<"\n\t enter the name of the publisher :-"<<endl;
cin>>publisher;
cout<<"\n\t enter the no of copies taken"<<endl;
cin>>nocopies;
cout<<"\n\t enter the price of the book"<<endl;
cin>>price;
}
void display()
{
cout<<"\n\t the name of the book is :-"<<bookname<<endl;
cout<<"\n\t the book number :-"<<booknumber<<endl;
cout<<"\n\t the name of the author is :-"<<author<<endl;
cout<<"\n\t the name of the publisher is:-"<<endl;
cout<<"\n\t the number of copies taken are"<<publisher<<endl;
cout<<"\n\t the price of the book is :- "<<price<<endl;
}
};
void main()
{ book ob;
ob.bookname;
getch();
}


