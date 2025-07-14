/*
    Even Fibonacci Series and find even valued sum
*/
#include<iostream>
using namespace std;

class prog2
{
    long long n,i;
    long long a = 1, b = 2, c, sum = 2;

    public:
        void input()
        {
            cout << "Enter range: ";
            cin >> n;
        }

        void chkFibogen()
        {
            input();
            cout << a << ", " << b;
            for(i=1;i<(n-1);i++)
            {
                c = (a + b);
                a = b;
                b = c;
                cout <<", " << c;

                if(c % 2 == 0)
                {
                    sum = sum + c;
                }
            }
            cout<<endl;
            cout<<"Even Valued Sum is: "<<sum;
            cout<<endl;
        }
};

int main()
{
    prog2 obj2;
    obj2.chkFibogen();
    return 0;
}
