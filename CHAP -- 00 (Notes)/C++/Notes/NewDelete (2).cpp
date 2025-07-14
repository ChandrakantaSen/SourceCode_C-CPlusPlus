#include<iostream>
using namespace std;
class sample
{
public:
sample()
{
cout<<"Hi ";
}
~sample()
{
cout<<"Bye ";
}
};
int main()
{
sample *obj = new sample();
delete(obj);
return 0;
}
