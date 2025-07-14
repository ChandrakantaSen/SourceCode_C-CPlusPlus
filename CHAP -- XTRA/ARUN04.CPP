#include<iostream.h>
#include<conio.h>
struct result
{
char name[30];
char index[10];
float pcent;
};
void announce(result);  //passing structure asargument of a function//
  main()
{
result publish;         //Declaring structure variable//
cout<<"Enter the name of the candidate"<<endl;
cin>>publish.name;
cout<<"Enter the index number"<<endl;
cin>>publish.index;
cout<<"Enter the percent marks awarded"<<endl;
cin>>publish.pcent;
announce(publish);
getch();
return 0;
}
void announce(result); //passing structure as argument of a function
{
cout<<"Name"<<result.name<<endl;
cout<<"Index"<<result.index<<endl;
cout<<"Marks in percentage="<<result.pcent<<endl;
}
