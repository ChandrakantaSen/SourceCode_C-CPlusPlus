#include<stdio.h>
#include<conio.h>

void quicksort(int b[10],int first,int last);

void main()
{
 int a[20],n,i;
 clrscr();
 printf("Enter the number of elements to be sorted:\n");
 scanf("%d",&n);
 
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 printf("\nArray elements before quick sort:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 
 quicksort(a,0,n-1);
 
 printf("\n\nArray elements after quick sort:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}

void quicksort(int b[10],int first,int last)
{
 int pivot,j,temp,i;
 if(first<last)
 {
  pivot=first;
  i=first;
  j=last;
  while(i<j)
  {
	while(b[i]<=b[pivot] && i<last)
	i++;
	while(b[j]>b[pivot])
	j--;
	if(i<j)
	{
	 temp=b[i];
	 b[i]=b[j];
    b[j]=temp;
   }
  }
  temp=b[pivot];
  b[pivot]=b[j];
  b[j]=temp;
  
  quicksort(b,first,j-1);
  quicksort(b,j+1,last);
 }
}