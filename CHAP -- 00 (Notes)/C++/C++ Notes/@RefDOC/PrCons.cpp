#include<iostream>
#include<conio.h>

using namespace std;
class PrCons
{
    public:
        int x,y,z;
        PrCons(int a, int b)
        {
            x = a;
            y = b;
        }
};

int main()
{
    PrCons obj(10,20);
    cout<<"\nValue of a: "<<obj.x;
    cout<<"\nValue of b: "<<obj.y;
    return 0;
}
