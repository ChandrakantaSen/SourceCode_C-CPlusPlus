//Suvo's Multimedia**********************************************************
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
struct complex
   {
      int real,imaginary;
   };
      complex no1,no2;
void main()
   {
      clrscr();
      void sum(complex no1,complex no2);
      void diff(complex no1,complex no2);
      void mult(complex no1,complex no2);
      void div(complex no1,complex no2);
      cout<<"Enter Real part of the first no :-"<<endl;
      cin>>no1.real;
      cout<<"Enter Imaginary part of the first no :-"<<endl;
      cin>>no1.imaginary;
      cout<<"Enter Real part of the second no :-"<<endl;
      cin>>no2.real;
      cout<<"Enter Imaginary part of the second no :-"<<endl;
      cin>>no2.imaginary;
      sum(no1,no2);
      diff(no1,no2);
      mult(no1,no2);
      div(no1,no2);
      getch();
   }
   void sum(complex no1,complex no2)
   {
      complex add;
      add.real=no1.real+no2.real;
      add.imaginary=no1.imaginary+no2.imaginary;
      cout<<"Sum of two complex number :-"<<add.real<<"+i"<<add.imaginary<<endl;
   }
   void diff(complex no1,complex no2)
   {
      complex sub;
      sub.real=no1.real+no2.real;
      sub.imaginary=no1.imaginary+no2.imaginary;
      cout<<"Difference of two complex number :-"<<sub.real<<"+i"<<sub.imaginary<<endl;
   }
   void mult(complex no1,complex no2)
   {
      complex prod;
      prod.real=no1.real+no2.real;
      prod.imaginary=no1.imaginary+no2.imaginary;
      cout<<"Product of two complex number :-"<<prod.real<<"+i"<<prod.imaginary<<endl;
   }
   void div(complex no1,complex no2)
   {
      complex division;
      division.real=no1.real+no2.real;
      division.imaginary=no1.imaginary+no2.imaginary;
      cout<<"Division of two complex number :-"<<division.real<<"+i"<<division.imaginary<<endl;
   }
