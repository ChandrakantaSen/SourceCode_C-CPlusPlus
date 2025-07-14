//Suvo's Multimedia
#include<iostream.h>
#include<conio.h>
#include<process.h>
enum conics
  {
     circle,parabola,ellipse,hyperbola,quit
  };
void main()
  {
     clrscr();
     int code;
     cout<<"Enter name of the conic or quit :- "<<endl;
     cin>>code;
     switch(code)
     {
	case 0:
	   cout<<"Equation of a circle is x*x + y*y = a*a"<<endl;
	break;
	case parabola:
	   cout<<"Equation of a parabola is y*y=4*a*x"<<endl;
	break;
	case ellipse:
	   cout<<"Equation of an ellips is x*x/(a*a)+y*y/(b*b)=1"<<endl;
	break;
	case hyperbola:
	   cout<<"Equation of a hyperbola is x*x/(a*a)-y*y/(b*b)=1"<<endl;
	break;
	case quit:
	   cout<<"Bye"<<endl;
	break;
	default:
	   cout<<"Wrong code entered"<<endl;
	      exit(0);
     }
     getch();
}