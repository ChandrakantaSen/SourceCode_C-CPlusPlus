#include<iostream.h>
#include<conio.h>
#include<fstream.h>
class emp
{
public:
char name[20];
int sal;
};
void main()
{
clrscr();
emp e;
cout<<"\nEnter name";
cin>>e.name;
cout<<"\nEnter salary:";
ofstream fp;
fp.open("file.txt",ios::binary);
fp.write((unsigned char*)&e,(e));
fp.close();
getch();
}