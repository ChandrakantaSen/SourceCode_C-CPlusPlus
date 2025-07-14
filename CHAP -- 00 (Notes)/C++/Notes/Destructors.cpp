#include <iostream.h>
#include<conio.h>
 
class Demo
{
		int X,Y;
    public:
        Demo()
        {
                X = 0;
                Y = 0;
        }
        
        ~Demo()
        {
			cout << endl << "Destructor Called" << endl;
        }
         
        void getValues()
        {
                cout << endl <<"Enter Value of X : "; 
				cin >> X;
                cout << "Enter Value of Y : "; 
				cin >> Y;
        }
		
        void putValues()
        {
                cout << endl << "Value of X : " << X;
                cout << endl << "Value of Y : " << Y << endl;
        }
};
 
void main()
{
    Demo d1; 
    d1.getValues();
     
    cout << endl <<"D1 Value Are : ";
    d1.putValues();
     
    Demo d2;
    d2.getValues();
	
    cout << endl <<"D2 Value Are : ";
    d2.putValues();
}
