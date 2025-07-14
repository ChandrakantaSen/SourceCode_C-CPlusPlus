#include<iostream.h>
#include<conio.h>

int isPrime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int isFibo(int p)
{
    int a=0,b=1,c,i;
    if(isPrime(a)==0)
    {
        return 0;
    }
    if(isPrime(b)==0)
    {
        return 0;
    }
    for(i=3;i<=p;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(isPrime(c)==0)
        {
            return 0;
        }
    }
}

void input()
{
    int n,i,q;
    cout<<"Enter the range: ";
    cin>>n;
    int arr[n];
    cout<<"\n"<<"Enter array elements: "<<"\n";
    for(i=0;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<=n;i++)
    {
        q=arr[i];
        if(isFibo(q)==0)
        {
                cout<<"\t"<<q;
        }
    }
}
void main()
{
    clrscr();
    input();
    getch();
}
