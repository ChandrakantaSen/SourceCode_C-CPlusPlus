#include<iostream>
#include<cmath>
using namespace std;
int c;
void TowerofHanoi(int n,int x,int y,int z)
{
	static int no=n;
	if(n>0)
	{
    TowerofHanoi(n-1,x,z,y);
   cout<<"Move disc from "<<x<<" to "<<y<<"  disc no= "<<(n)<<endl;
    c++;
    TowerofHanoi(n-1,z,y,x);
   // no--;
	}
}

int main()
{
	cout<<"Enter n:";
	int n;
	cin>>n;
	double s=clock();
	TowerofHanoi(n,1,2,3);
	cout<<(clock()-s);
	cout<<"Moves:"<<c;
	cin.ignore();
	cin.get();
	return 0;
}
