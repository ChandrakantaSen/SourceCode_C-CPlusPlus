  /*Inline Function*/
#include<iostream.h>
#include<conio.h>
class myclass
{
public:
void show();
};
inline void myclass::show()
{
cout<<"hello";
}
void main()
{
clrscr();
myclass m;
m.show();
getch();
}