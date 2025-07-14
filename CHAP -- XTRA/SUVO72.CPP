//Suvo's Multimedia..................
#include<iostream.h>
#include<conio.h>
#include<process.h>
int n,s,d,m,i,s1,fact,j,count,c,v;
char a[100],l[100],e[100],f[100],p[100],b[50];
   class Add
      {
	 public:
	 Add(); /* DEFAULT CONSTRUCTOR */
	 void display();
	 void pal();
	 void show();
      };
      Add::Add()
	 {
	    cout<<"\nEnter any number to check wheather it is palindrome or not ? "<<endl;
	    cin>>n;
	    cout<<"\n";
	    cout<<"\n";
	    s=0;
	    m=n;
	 }
	 void Add::display()
	    {
	       cout<<"\nThe entered number is "<<n<<endl;
	       cout<<"\n";
	       cout<<"\n";
	    }
	    void Add::pal()
	       {
		  while(m>0)
		     {
			d=m%10;
			s=s*10+d;
			m=m/10;
		      }
	       }
	    void Add::show()
	       {
		  if(s==n)
		     {
			cout<<n<<" is a palindrome number"<<endl;
			cout<<"\n";
			cout<<"\n";
		     }
		     else
			{
			   cout<<n<<" is not a palindrome number"<<endl;
			   cout<<"\n";
			   cout<<"\n";
			}
	       }
	    class Add1
	       {
		  public:
		  Add1(); /* DEFAULT CONSTRUCTOR */
		  void display();
		  void arm();
		  void show();
	       };
	       Add1::Add1()
		  {
		     cout<<"Enter any number to check wheather it is amstrong or not ? "<<endl;
		     cin>>n;
		     cout<<"\n";
		     cout<<"\n";
		     s=0;
		     m=n;
		  }
	       void Add1::display()
		  {
		     cout<<"The entered number is "<<n<<endl;
		     cout<<"\n";
		     cout<<"\n";
		  }
	       void Add1::arm()
		  {
		     while(m>0)
			{
			   d=m%10;
			   s=s+(d*d*d);
			   m=m/10;
			}
		  }
	       void Add1::show()
		  {
		     if(s==n)
			{
			   cout<<n<<" is an amstrong number."<<endl;
			   cout<<"\n";
			   cout<<"\n";
			}
			else
			   {
			      cout<<n<<" is not an amstrong number."<<endl;
			      cout<<"\n";
			      cout<<"\n";
			   }
		  }
		  class add2
		     {
			public:
			add2(); /* DEFAULT CONSTRUCTOR */
			void display();
			void ami();
			void show();
		     };
		     add2::add2()
			{
			   cout<<"Enter two numbers to check wheather this numbers are Amicable to each other or not:- "<<endl;
			   cin>>n>>m;
			   cout<<"\n";
			   cout<<"\n";
			   s=0;
			   s1=0;
			}
		     void add2::display()
			{
			   cout<<"The entered numbers are "<<n<<" and "<<m<<endl;
			   cout<<"\n";
			   cout<<"\n";
			}
		     void add2::ami()
			{
			   for(i=1;i<n;i++)
			      {
				 if(n%i==0)
				    {
				       s=s+i;
				    }
			      }
			      for(i=1;i<m;i++)
				 {
				    if(m%i==0)
				       {
					  s1=s1+i;
				       }
				 }
			}
		     void add2::show()
			{
			   if((s1==n)&&(s==m))
			      {
				 cout<<n<<" and "<<m<<" are Amicable to each other "<<endl;
				 cout<<"\n";
				 cout<<"\n";
			      }
			      else
				 {
				    cout<<n<<" and "<<m<<" are not Amicable to each other "<<endl;
				    cout<<"\n";
				    cout<<"\n";
				 }
			}
			class add3
			   {
			      public:
			      add3(); /* DEFAULT CONSTRUCTOR */
			      void display();
			      void per();
			      void show();
			   };
			   add3::add3()
			      {
				 cout<<"\nEnter a number to check wheather to is Perfect or not:- "<<endl;
				 cin>>n;
				 cout<<"\n";
				 cout<<"\n";
				 s=0;
			      }
			   void add3::display()
			      {
				 cout<<"The entered number is :- "<<n<<endl;
				 cout<<"\n";
				 cout<<"\n";
			      }
			   void add3::per()
			      {
				 for(i=1;i<n;i++)
				    {
				       if(n%i==0)
					  {
					     s=s+i;
					  }
				    }
			      }
			   void add3::show()
			      {
				 if(s==n)
				    {
				       cout<<n<<" is a Perfect number."<<endl;
				       cout<<"\n";
				       cout<<"\n";
				    }
				    else
				       {
					  cout<<n<<" is not a Perfect number."<<endl;
					  cout<<"\n";
					  cout<<"\n";
				       }
			      }
			      class add4
				 {
				    public:
				    add4(); /* DEFAULT CONSTRUCTOR */
				    void display();
				    void kri();
				    void show();
				 };
				 add4::add4()
				    {
				       cout<<"\nEnter a number to check wheather it is Krishnamurty or not:- "<<endl;
				       cin>>n;
				       cout<<"\n";
				       cout<<"\n";
				       s=0;
				       m=n;
				    }
				 void add4::display()
				    {
				     cout<<"The entered number is :- "<<n<<endl;
				     cout<<"\n";
				     cout<<"\n";
				    }
				 void add4::kri()
				    {
				       do
					  {
					     d=m%10;
					     fact=1;
					     for(i=1;i<=d;i++)
						{
						   fact=fact*i;
						}
						s=s+fact;
						m=m/10;
					  }
					  while(m>0);
				    }
				 void add4::show()
				    {
				       if(s==n)
					  {
					     cout<<"The number is Krishnamurty"<<endl;
					     cout<<"\n";
					     cout<<"\n";
					  }
					  else
					     {
						cout<<"The number is not Krishnamurty"<<endl;
						cout<<"\n";
						cout<<"\n";
					     }
				    }
				    class add5
				       {
					  public:
					  add5(); /* DEFAULT CONSTRUCTOR */
					  void display();
					  void rev();
					  void show();
				       };
				       add5::add5()
					  {
					     cout<<"Enter the number to check its reverse number :- "<<endl;
					     cin>>n;
					     cout<<"\n";
					     cout<<"\n";
					     m=n;
					     d=s=0;
					  }
				       void add5::display()
					  {
					     cout<<"The entered number is :- "<<n<<endl;
					     cout<<"\n";
					     cout<<"\n";
					  }
				       void add5::rev()
					  {
					     while(m>0)
						{
						   d=m%10;
						   s=(s*10)+d;
						   m=m/10;
						}
					  }
				       void add5::show()
					  {
					     cout<<"The reverse number of "<<n<<" is = "<<s<<endl;
					     cout<<"\n";
					     cout<<"\n";
					  }
					  class add6
					     {
						public:
						add6(); /* DEFAULT CONSTRUCTOR */
						void display();
						void mag();
						void show();
					     };
					     add6::add6()
						{
						   cout<<"Enter the number to check wheather it is magic number or not :- "<<endl;
						   cin>>n;
						   cout<<"\n";
						   cout<<"\n";
						   i=n;
						   s=0;
						   j=0;
						}
					     void add6::display()
						{
						   cout<<"The entered number is :- "<<n<<endl;
						   cout<<"\n";
						   cout<<"\n";
						}
					     void add6::mag()
						{
						   while(n>0)
						      {
							 j=n%10;
							 s=s+j;
							 n/=10;
						      }
						}
					     void add6::show()
						{
						   if(s==10||s==1)
						      {
							 cout<<i<<" is a magic number"<<endl;
							 cout<<"\n";
							 cout<<"\n";
						      }
						      else
							 {
							    cout<<i<<" is not a magic number"<<endl;
							    cout<<"\n";
							    cout<<"\n";
							 }
						}
						class add7
						   {
						      public:
						      add7(); /* DEFAULT CONSTRUCTOR */
						      void display();
						      void pri();
						      void show();
						   };
						   add7::add7()
						      {
							 cout<<"Enter the number to check it is a prime number or not :- "<<endl;
							 cout<<"\n";
							 cout<<"\n";
							 cin>>n;
							 count=0;
						      }
						   void add7::display()
						      {
							 cout<<"The entered number is :- "<<n<<endl;
							 cout<<"\n";
							 cout<<"\n";
						      }
						   void add7::pri()
						      {
							 for(i=1;i<=n;i++)
							    {
							       if(n%i==0)
								  {
								     count++;
								  }
							    }
						      }
						   void add7::show()
						      {
							 if(count==2)
							    {
							       cout<<"number is a prime number"<<endl;
							       cout<<"\n";
							       cout<<"\n";
							    }
							    else
							       {
								  cout<<"number is not a prime number"<<endl;
								  cout<<"\n";
								  cout<<"\n";
							       }
	 class add12
	    {
	       public:
	       add12(); /* DEFAULT CONSTRUCTOR */
	       void display();
	       void length();
	       void show();
	    };
	    add12::add12()
	       {
		  count=0;
		  cout<<"\n Enter any string to find out its length : - "<<endl;
		  gets(a);
	       }
	    void add12::display()
	       {
		  cout<<"The entered string is :- "<<endl;
		  cout<<a;
	       }
	    void add12::length()
	       {
		  count=strlen(a);
	       }
	    void add12::show()
	       {
		  cout<<"\n Length of the string  is : - "<<count<<endl;
	       }
	       class add13
		  {
		     public:
		     add13(); /* DEFAULT CONSTRUCTOR */
		     void display();
		     void word();
		     void show();
		  };
		  add13::add13
		     {
			c=0;
			cout<<"Enter any text : - "<<endl;
			gets(a);
		     }
		  void add13::display()
		     {
			cout<<"The entered text is :- "<<endl;
			cout<<a;
		     }
		  void add13::word()
		     {
			for(i=0;i<strlen(a);i++)
			   {
			      if(a[i]==' ')
				 {
				    c++;
				 }
			   }
		     }
		  void add13::show()
		     {
			cout<<"The number of words are : - "<<(c+1)<<endl;
		     }
		  class add14
		  {
		     public:
		     add14(); /* DEFAULT CONSTRUCTOR */
		     void display();
		     void spaces();
		     void show();
		  };
		  add14::add14
		     {
			s=0;
			cout<<"Enter any text :-"<<endl;
			gets(l);
		     }
		  void add14::display()
		     {
			cout<<"The entered text is :- "<<endl;
			cout<<l;
		     }
		  void add14::spaces()
		     {
			for(i=0;i<strlen(l);i++)
			   {
			      if(d[i]==' ')
				 {
				    s++;
				 }
			   }
		     }
		  void add::show()
		     {
			cout<<"The number of spaces are:-"<<(s)<<endl;
		     }
		  class add15
		  {
		     public:
		     add15(); /* DEFAULT CONSTRUCTOR */
		     void display();
		     void vowel();
		     void show();
		  };
		  add15::add15
		     {
			v=0;
			cout<<"Enter the text :-"<<endl;
			gets(e);
		     }
		  void add15::display()
		     {
			cout<<"The entered text is :- "<<endl;
			cout<<e;
		     }
		  void add15::vowel()
		     {
			for(i=0;i<strlen(e);i++)
			   {
			      if((e[i]=='A')||(e[i]=='E')||(e[i]=='I')||(e[i]=='O')||(e[i]=='U')||(e[i]=='a')||(e[i]=='e')||(e[i]=='i')||(e[i]=='o')||(e[i]=='u'))
				 {
				    v++;
				 }
			   }
		     }
		  void add15::show()
		     {
			cout<<"The number voiwels are:-"<<(v)<<endl;
		     }
		  class add16
		     {
			public:
			add16(); /* DEFAULT CONSTRUCTOR */
			void display();
			void consonant();
			void show();
		     };
		     add16::add16
			{
			   c=0;
			   cout<<"Enter the text :-"<<endl;
			   gets(e);
			}
		     void add16::display()
			{
			   cout<<"The entered text is :- "<<endl;
			   cout<<e;
			}
		     void add16::consonant()
			{
			   for(i=0;i<strlen(e);i++)
			      {
				 if(((int)(e[i])>=65)&&((int)(e[i]<=90)))
				    {
				       if((e[i]!='A')&&(e[i]!='E')&&(e[i]!='I')&&(e[i]!='O')&&(e[i]!='U'))
					  {
					     c++;
					  }
				    }
				    else if(((int)(e[i])>=97)&&((int)(e[i]<=122)))
				       {
					  if((e[i]!='a')&&(e[i]!='e')&&(e[i]!='i')&&(e[i]!='o')&&(e[i]!='u'))
					     {
						c++;
					     }
				       }
			      }
			}
		     void add16::show()
			{
			   cout<<"The number of consonants are:-"<<c<<endl;
			}
		     class add17
		     {
			public:
			add17(); /* DEFAULT CONSTRUCTOR */
			void display();
			void pal;
			void show();
		     };
		     add17::add17
			{
			   cout<<"Enter any word  :-"<<endl;
			   gets(f);
			}
		     void add17::display()
			{
			   cout<<"The entered text is :- "<<endl;
			   cout<<f;
			}
		     void add17::pal()
			{
			   strcpy(p,(strrev(f)));
		      void add17::show()
			 {
			    if(strcmp(p,strrev(f))==0)
			       {
				  cout<<f<<" is a palimdrome text";
			       }
			       else
				  {
				     cout<<f<<" is not a palimdrome text";
				  }
			 }
		  class add18
		     {
			public:
			add18(); /* DEFAULT CONSTRUCTOR */
			void display();
			void toupper();
			//void show();
		     };
		     add18::add18
			{
			   cout<<"Enter any word  :-"<<endl;
			   gets(f);
			}
		     void add18::display()
			{
			   cout<<"The entered text is :- "<<endl;
			   cout<<f;
			}
		     void add18::toupper()
			{
			   for(i=0;i<strlen(f);i++)
			      {
				 c=(int)(f[i]);

				 if((c>=97)&&(c<=122))
				    {
				       c=c-32;
				       cout<<(char)(c);
				    }
				       else
					  {
					     cout<<(char)(c);
					  }
			      }
			}
		     class add19
		     {
			public:
			add19(); /* DEFAULT CONSTRUCTOR */
			void display();
			void tolower();
			//void show();
		     };
		     add19::add19
			{
			   cout<<"Enter any text:-"<<endl;
			   gets(f);
			}
		     void add19::display()
			{
			   cout<<"The entered text is :- "<<endl;
			   cout<<f;
			}
		     void add19::tolower()
			{
			   for(i=0;i<strlen(f);i++)
			      {
				 c=(int)(f[i]);
				 if((c>=65)&&(c<=90))
				    {
				       c=c+32;
				       cout<<(char)(c);
				    }
				    else
				       {
					  cout<<(char)(c);
				       }
			      }
			}
		     class add20
		     {
			public:
			add20(); /* DEFAULT CONSTRUCTOR */
			void display();
			void wextract();
			//void show();
		     };
		     add20::add20
			{
			   cout<<"Enter any text:-"<<endl;
			   gets(a);
			   j=0;
			}
		     void add19::display()
			{
			   cout<<"The entered text is :- "<<endl;
			   cout<<f;
			}
		     void add19::wextract()
			{
			   for(i=0;i<strlen(a);i++)
			      {
				 if(a[i]!=' ')
				    {
				       b[j]=a[i];
				       cout<<b[j];
				       j++;
				    }
				    else
				       {
					  cout<<endl;
					  strcpy(b,"");
					  j=0;
				       }
			      }
			}
void main()
{
int ch;
do
{
clrscr();
cout<<"About the program............... "<<endl;
cout<<"The program is a simple number cheaking calculator.............."<<endl;
cout<<"Try to read the program carefully specially each and every statememt"<<endl;
cout<<"when you are running."<<endl;
cout<<"\n";
cout<<"\n";
cout<<"***********************-------------------**********************"<<endl;
cout<<"\n";
cout<<"\n";
	 cout<<"Press [1] to check palindrom number"<<endl;
	 cout<<"Press [2] to check amstrong number"<<endl;
	 cout<<"Press [3] to check amicable number"<<endl;
	 cout<<"Press [4] to check perfect number"<<endl;
	 cout<<"Press [5] to check krishnamurty number"<<endl;
	 cout<<"Press [6] to check reverse number"<<endl;
	 cout<<"Press [7] to check magic number"<<endl;
	 cout<<"Press [8] to check prime number"<<endl;
	 cout<<"Press [9] to exit"<<endl;
	 cout<<"Enter your choice :- "<<endl;
	 cin>>ch;
   switch(ch)
      {
	 case 1:
	 Add ob;
	 ob.display();
	 ob.pal();
	 ob.show();
	 break;
	 case 2:
	 Add1 ob1;
	 ob1.display();
	 ob1.arm();
	 ob1.show();
	 break;
	 case 3:
	 add2 ob2;
	 ob2.display();
	 ob2.ami();
	 ob2.show();
	 break;
	 case 4:
	 add3 ob3;
	 ob3.display();
	 ob3.per();
	 ob3.show();
	 break;
	 case 5:
	 add4 ob4;
	 ob4.display();
	 ob4.kri();
	 ob4.show();
	 break;
	 case 6:
	 add5 ob5;
	 ob5.display();
	 ob5.rev();
	 ob5.show();
	 break;
	 case 7:
	 add6 ob6;
	 ob6.display();
	 ob6.mag();
	 ob6.show();
	 break;
	 case 8:
	 add7 ob7;
	 ob7.display();
	 ob7.pri();
	 ob7.show();
	 break;
	 case 9:
	 exit(0);
	 break;
	 default:
	 cout<<"You have entered a wrong choice !!"<<endl;
      }
      int ch1;
	    do
	       {
		  clrscr();
		  cout<<"__________________________________________________________________"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"**********************___________MENU__________*******************"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"____________________*****************************_________________"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"******************************************************************"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 1 FOR FIND OUT THE LENGTH OF THE STRING : -  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 2 FOR FIND OUT THE  NUMBER OF THE  WORD IN A STRING : -  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 3 FOR FIND OUT THE  NUMBER OF THE  SPACES IN A STRING : -  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 4 FOR FIND OUT THE  NUMBER OF THE  VOWELS IN A STRING : -  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 5 FOR FIND OUT THE  NUMBER OF THE  CONSONANT IN A STRING : -  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 6 FOR CHECKING PALINDROME WORD :-"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 7 FOR ENTER ANY LOWER LETTER AND CONVAT  IN A UPPER LETTER IN A STRING:-"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 8 FOR ENTER ANY UPPER LETTER AND CONVAT  IN A LOWER LETTER IN A STRING:-"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 9 FOR ENTER ANY TEXT AND SERCH THE PARTICULAR WORD IN A STRING:-"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 10 TO MAIN MENU .  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"PRESS 11 TO EXIT TO PROGRAM. .  "<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"__________________________________________________________________"<<endl;
		  cout<<"\n";
		  cout<<"\n";
		  cout<<"Enter your choice : - "<<endl;
		  cin>>ch1;
		  switch(ch1)
		     {
			case 1:
			length();
			break;
			case 2:
			word();
			break;
			case 3:
			spaces();
			break;
			case 4:
			vowel();
			break;
			case 5:
			consonant();
			break;
			case 6:
			spal();
			break;
			case 7:
			toupper();
			break;
			case 8:
			tolower();
			break;
			case 9:
			wextract();
			break;
			case 10:
			menu();
			case 11:
			exit(0);
			break;
			default:
			cout<<"Wrong Choice . "<<endl;
		     }
		     getch();
	       }
cout<<"\n";
cout<<"\n";
cout<<"The name of the programmer is Master Suvojyoti Ray"<<endl;
cout<<"\n";
cout<<"A very efficient programer in +2 level"<<endl;
cout<<"\n";
cout<<"Currently in standard +2 in Delhi Public School, Ruby Park Kolkata"<<endl;
cout<<"\n";
cout<<"Currently in the guidance of Master Nirmalya Bhattacharya(Engineering from C.I.E.M, B.Tech) Currently in LMEAT"<<endl;
cout<<"\n";
cout<<"Thankyou for using Suvo's multimedia................."<<endl;
cout<<"\n";
cout<<"------------------------*****************-----------------------"<<endl;
getch();
}
while(1);
}