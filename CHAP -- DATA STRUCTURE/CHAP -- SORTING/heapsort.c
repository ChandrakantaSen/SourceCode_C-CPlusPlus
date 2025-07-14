#include<stdio.h>
#include<conio.h>
void heapsort(int a[50], int n);
void heapify(int[], int);
void adjust(int[], int);
void main()
{
 int a[50],n,i;
 clrscr();
 printf("Enter the no. of elements to be sorted:\n");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 printf("\nArray elements before Heapsort:\n");
 for(i=0;i<n;i++)
   printf("%d\t",a[i]);
 heapsort(a,n);
 printf("\nArray elements after Heapsort:\n");
 for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }
 getch();
}
void heapsort(int a[50], int n)
{
 int i,t;
 heapify(a,n);
 for(i=n-1;i>0;i--)
 {
  t=a[0];
  a[0]=a[i];
  a[i]=t;
  adjust(a,i);
 }
}
void heapify(int a[50], int n)
{
 int item,i,j,k;
 for(k=1;k<n;k++)
 {
  item=a[k];
  i=k;
  j=(i-1)/2;
  while((i>0) && (item>a[j]))
  {
   a[i] = a[j];
   i=j;
   j=(i-1)/2;
  }
  a[i]=item;
 }
}
void adjust(int a[50], int n)
{
 int item,i,j;
 j=0;
 item=a[j];
 i=2*j+1;
 while(i<=n-1)
 {
  if(i+1<=n-1)
  if(a[i]<a[i+1])
  i++;
  if(item<a[i])
  {
   a[j]=a[i];
   j=i;
   i=2*j+1;
  }
  else
  break;
 }
 a[j]=item;
}