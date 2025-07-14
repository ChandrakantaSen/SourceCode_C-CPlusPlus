#include<iostream.h>
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
		
        Demo(int X, int Y=20)
        {
                this->X = X;
                this->Y = Y;
        }
         
        void putValues()
        {
                cout << endl << "Value of X : " << X;
                cout << endl << "Value of Y : " << Y << endl;
        }
};
 
void main()
{
    Demo d1= Demo(10);
     
    cout << endl <<"D1 Value Are : ";
    d1.putValues();								//output is: 10, 20
     
    Demo d2= Demo(30,40);						//output is: 30, 40
     
    cout << endl <<"D2 Value Are : ";
    d2.putValues();
     
    return 0;
}
