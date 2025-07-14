/*C++ program to demonstrate example of Constructor Overloading.*/

#include <iostream.h>
 
//Class declaration.
class Demo
{
    //Private block to declare data member( X,Y ) of integer type.
    private:
        int X;
        int Y;
 
    //Public blocks of member function to access data members.
    public:
        //Declaration of default constructor to initialize data members.
            Demo (); 
 
        //Declaration of parameterized constructor to initialize data members.
            Demo (int a, int b); 
        //To display output onn screen.
        void    Display();
     
};//End of class
 
//Definition of parameterized constructor.
Demo:: Demo()
{
    X = 10;
    Y = 20;
}
 
//Definition of parameterized constructor.
Demo:: Demo(int a, int b)
{
    X = a;
    Y = b;
}
 
 
//Definition of Display() member function.
void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}
 
int main()
{
    Demo d1;
    cout << "Default Constructor: " << endl;
    cout << "Value after initialization : " ;
    d1.Display();   
 
    Demo d2(30,40) ; //Ctor automatically call when object is created.
    cout << "Parameterized Constructor: " << endl;
    cout << "Value after initialization : " ;
    d2.Display();   
 
    return 0;
}
