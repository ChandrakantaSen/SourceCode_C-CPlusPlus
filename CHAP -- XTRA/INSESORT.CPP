#include<iostream.h>
#include<conio.h>
class Inser
{
	public:
	void sort()
	{
	int A[50];
	int k,count,temp,i,n;
	  cout<<"Enter the size of the array: ";
	 cin>>n;
	  cout<<"Enter the elements: "<<endl;
	 for(k=0;k<n;k++)
	 {
	   cout<<"Give value of the element: ";
	   cin>>A[k];
	 }
	 cout<<"SORTING BEING DONE....."<<endl;
	 for(k=1;k<n;k++)
	 {
	 temp=A[k];
	 count=k-1;
	 while((temp<A[count]) &&(count>=0))
	 {
	   A[count+1]=A[count];
	  count=count-1;
	 }
	 A[count+1]=temp;
	 for(i=0;i<n;i++)
	 cout<<A[i]<<" ";
	 cout<<endl;
	 }
	 cout<<"\n The list after insertion sort: "<<endl;
	 for(k=0;k<n;k++)
	 {
	 cout<<A[k]<<" ";
	 }
	 cout<<endl;
	 }
};
void main()
{
	clrscr():
	Inser i;
	i.sort();
	getch();
}
