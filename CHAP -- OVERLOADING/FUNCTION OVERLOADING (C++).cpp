 // C++ function overloading program example

#include <iostream>

// class declaration part

class many_names

{

int length;

int width;

public:

// constructors with different number and type of parameter list - overloaded functions

many_names(void);

many_names(int len);

many_names(int len, int wid);

// methods with different number and type of parameter list - overloaded functions

void display(void);

void display(int one);

void display(int one, int two);

void display(double number);

};

 

// implementation part

// void

many_names::many_names(void)

{

length = 8;

width = 8;

}

// single parameter signature

many_names::many_names(int len)

{

length = len;

width = 8;

}

// two parameter signature

many_names::many_names(int len, int wid)

{

length = len;

width = wid;

}

// void for display signature

void many_names::display(void)

{

cout<<"From void display() function, Area = "<<length * width<<endl;

}

// 1 parameter signature

void many_names::display(int one)

{

cout<<"From int display() function, Area = "<<one * width<<endl;

}

// 2 parameters signature

void many_names::display(int one, int two)

{

cout<<"From two int display() function, Area = "<<one * two<<endl;

}

// 1 parameter signature

void many_names::display(double number)

{

cout<<"From float display() function, Area = "<<number * width<<endl;

}

 

// main program

int main(void)

{

many_names small, medium(10), large(12,15);

int gross = 144;

double pi = 3.1415, payroll = 12.50;

 

cout<<"Guess, which function that has been invoked???"<<endl;

cout<<"------------------------------------------"<<endl;

cout<<"small.display(void)"<<endl;

small.display();

 

cout<<endl<<"small.display(100)"<<endl;

small.display(100);

 

cout<<endl<<"small.display(gross,100)"<<endl;

small.display(gross,100);

 

cout<<endl<<"small.display(payroll)"<<endl;

small.display(payroll);

 

cout<<endl<<"medium.display(void)"<<endl;

medium.display();

 

cout<<endl<<"large.display(pi)"<<endl;

large.display(pi);

 

return 0;

}

 