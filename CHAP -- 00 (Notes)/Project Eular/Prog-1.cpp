/*
    Multiples of 3 & 5
*/
#include<iostream>
using namespace std;

class prog1
{
    int n,i;
    float sum =0.00;

    public:
    void input()
    {
        cout<<"Enter the range: ";
        cin>>n;
    }

    void chkMultiple()
    {
        input();
        for(i=1;i<n;i++)
        {
            if(i%3==0 || i%5==0)
            {
                cout << " " << i;
                sum += i;
            }
        }
        cout<<endl;
        cout<<endl<<"Sum is: "<<sum;
        cout<<endl;
    }
};


int main()
{
    prog1 obj1;
    obj1.chkMultiple();
    return 0;
}
