#include<stdio.h>
#include<conio.h>

void radix_sort(int arr[], int n);

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

 printf("\nArray elements before Radix Sort:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }

 radix_sort(a,n);

 printf("\nArray elemants after Radix Sort:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}

void radix_sort(int arr[],int n)
{
 int bucket[10][5],buck[10],b[10];
 int i,j,k,l,num,div,large,passes;

 div=1;
 num=0;
 large=arr[0];

 for(i=0;i<n;i++)
 {
  if(arr[i]>large)
  {
	large=arr[i];
  }

  while(large>0)
  {
	num++;
	large=large/10;
  }

  for(passes=0;passes<num;passes++)
  {
	for(k=0;k<10;k++)
	{
	 buck[k]=0;
	}
	for(i=0;i<n;i++)
	{
	 l=((arr[i]/div)%10);
	 bucket[l][buck[l]++]=arr[i];
	}
	i=0;
	for(k=0;k<10;k++)
	{
	 for(j=0;j<buck[k];j++)
	 {
	  arr[i++]=bucket[k][j];
	 }
	}
	div=div*10;
  }
 }
}
