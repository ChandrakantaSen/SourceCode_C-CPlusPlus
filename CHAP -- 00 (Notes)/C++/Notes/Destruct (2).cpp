#include<iostream>
#include<conio.h>

using namespace std;

class Destruct
{
   public:
        Destruct()
        {
            cout<<"Constructor Invoked"<<endl;
        }
        ~Destruct()
        {
            cout<<"Destructor Invoked"<<endl;
        }
};

int main()
{
   Destruct e1;

   return 0;
}
