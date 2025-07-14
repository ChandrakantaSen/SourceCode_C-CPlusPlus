#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20];
 int i,j,k,temp,n;
 clrscr();
 printf("Enter the number of elements to be sorted:\n");
 scanf("%d",&n);
 printf("Enter the elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=n/2;i>0;i=i/2)
 {
  for(j=i;j<n;j++)
  {
   for(k=j-i;k>=0;k=k-i)
   {
    if(a[k+i]>=a[k])
    {
     break;
    }
    else
    {
     temp=a[k];
     a[k]=a[k+i];
     a[k+i]=temp;
    }
   }
  }
 }
 printf("\nArray elements after shell sorting are:\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 getch();
}