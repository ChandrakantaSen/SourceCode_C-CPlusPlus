#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Sports
{
int No_of_Participants,Position[100],Points,i,j,Standard[100];
char Game[100],Participants[100][100];
public:
Sports()
{
strcpy(Game,NULL);
No_of_Participants=0;
}
void Get_Data()
{
cout<<"Enter the name of the game  : -"<<endl;
gets(Game);
cout<<"Enter the number of participants  : -"<<endl;
cin>>No_of_Participants;
for(int i=0;i<No_of_Participants;i++)
{
cout<<"Enter the name of the "<<(i+1)<<"th Participant : - "<<endl;
gets(Participants[i]);
cout<<"Enter the class of study of the "<<(i+1)<<"th Participant : - "<<endl;
cin>>Standard[i];
cout<<"Enter the position of the "<<(i+1)<<"th Participant : - "<<endl;
cin>>Position[i];
}
}
void Assign_Points()
{
for(int i=0;i<No_of_Participants;i++)
{
if(Position[i]==1)
{
Points=7;
}
else if(Position[i]==2)
{
Points=5;
}
else if(Position[i]==3)
{
Points=3;
}
}
if(No_of_Participants>7)
{
Points=Points*2;;
}
cout<<"The Points is : - "<<Points<<endl;
}
};
void main()
{
Sports ob;
ob.Get_Data();
ob.Assign_Points();
getch();
}