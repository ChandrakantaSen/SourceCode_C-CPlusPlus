#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int a = 1, b = 3;

   // a right now is 00000001
   // Left shifting it by 3 will make it 00001000, ie, 8
   a = a << 3;
   cout << a << endl;

   // Right shifting a by 2 will make it 00000010, ie, 2
   a = a >> 2;
   cout << a << endl;
   return 0;
}
