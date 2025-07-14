#include<iostream.h>
#include<conio.h>

class stud 
{
    public:
    char name[30],clas[10];
    int rol,age;
    float per;
	
	void enter() 
	{
		cout<<"\n Enter Student Name, Age, Roll number";
		cin>>name>>age>>rol;
		cout<<"\n Enter Student Class and percentage in previous class"; 
		cin>>clas>>per; 
	}
	
	void display() 
	{
		cout<<"\n Age\tName\tR.No.\tClass\t%ge";
		cout<<"\n"<<age<<"\t"<<name<<"\t"<<rol<<"\t"<<clas<<"\t"<<per<<"%"; 
	}
}

void main()
{
    class stud s;
    s.enter();
    s.display();
    cin.get();	//use this to wait for a keypress 
}
	
	
	
	