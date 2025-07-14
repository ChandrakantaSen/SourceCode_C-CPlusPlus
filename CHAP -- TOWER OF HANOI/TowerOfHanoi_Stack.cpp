#include<iostream>
//#include"ADT_stack.h"
using namespace std;
int c=0;

class arrayStack
{
	public:
		arrayStack(int n)
		{
			sk_top=-1;
			element=new int[n];
		}
		~arrayStack(){}
		void push(int ele);
		void pop();
		int top(){return element[sk_top];}
		void display();
 private:
		int *element;
		int sk_top;
};

arrayStack *tower[4];
		void arrayStack::push(int ele)
		{
			element[++sk_top]=ele;
		}
		void arrayStack::pop()
		{
			--sk_top;
		}
		void arrayStack::display()
		{
			if(sk_top==-1) cout<<"Empty";
			else{
			for(int i=0;i<=sk_top;i++) cout<<element[i]<<" ";}
			cout<<endl;
		}
		
		
		
void TowerofHanoi(int n,int x,int y,int z)
{
	if(n>0)
	{
    TowerofHanoi(n-1,x,z,y);
   // cout<<"Move disc from "<<x<<" to "<<y<<endl;
    int top_ele;
	top_ele=tower[x]->top();
	tower[x]->pop();
	tower[y]->push(top_ele);
	cout<<"("<<c+1<<")\n";
	cout<<"Stack 1 : ";	tower[1]->display();
	cout<<"Stack 2 : ";	tower[2]->display();
	cout<<"Stack 3 : ";	tower[3]->display();
	cout<<endl;
    c++;
    TowerofHanoi(n-1,z,y,x);
	}
}

int main()
{
	cout<<"Enter n:";
	int n;
	cin>>n;

	for(int m=0;m<4;m++)
	tower[m]=new arrayStack(n);
	for(int i=n;i>0;i--) tower[1]->push(i);
/*	cout<<"Initial:\n\n";
	cout<<"Stack 1 : ";
		tower[1].display();
		cout<<"Stack 2 : ";tower[2].display();
	cout<<"Stack 3 : ";	tower[3].display();  cout<<endl;*/
	cout<<"Then:\n\n";

	TowerofHanoi(n,1,2,3);
	cout<<"Moves:"<<c;
	cin.ignore();
	cin.get();
	return 0;
}
