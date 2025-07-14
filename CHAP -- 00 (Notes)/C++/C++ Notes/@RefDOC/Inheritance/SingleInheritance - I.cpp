/* C++ Single Level Inheritance Example: Inheriting Fields
Single inheritance is defined as the inheritance 
in which a derived class is inherited from the only one base class.
*/

#include <iostream.h>  
 
 class Account {  
   public:  
   float salary = 6000.00;   
 };  
class Programmer: public Account 
{  
   public:  
   float bonus = 5000;    
};       

int main() 
{  
   Programmer p1;  
   cout<<"Salary: "<<p1.salary<<endl;    
   cout<<"Bonus: "<<p1.bonus<<endl;    
   return 0;  
}  
