/*
    Largest Prime Factor
*/
#include<iostream>
using namespace std;

class prog3
{
    long long n,i,j,c,r,h;
public:
    void input(){
        cout << "Enter number: ";
        cin >> n;
    }

    long long chkPrime(long long p){
        c = 0;
       for(j=1;j<=p;j++){
        if(p % j == 0){
            c++;
        }
       }

       if(c != 2){
        return -1;
       }
       else{
        return p;
       }
    }

    void genFactors(){
        input();

        for(i=1;i<=n;i++){
            if(n % i == 0){
                r = chkPrime(i);
                if(r != -1){
                    h = r;
                }
            }
        }
        cout << endl;
        cout << endl << "Largest Prime Factor is: "<<h;
    }
};

int main()
{
    prog3 obj3;
    obj3.genFactors();
    return 0;
}
