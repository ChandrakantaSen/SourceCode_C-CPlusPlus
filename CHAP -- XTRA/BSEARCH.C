/***************************************************************/
/*   It is the program to find a number using Binary Search    */
/***************************************************************/

main()
{
int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int found=0,max=15,min=1,mid,t,count=1;
clrscr();
printf("Enter the number "); scanf("%d",&t);
printf("\n The number of visited nodes\n");
while(max>=min)
{
 mid=(max+min)/2; printf("%5d",mid);
 if(a[mid-1]==t)
  { found=1;break;}
 else if(t<a[mid-1])
   max=mid-1;
 else
   min=mid+1;
 count++;
}
 if(found==0)
 { printf("   ( %d -> Not found)",t);}
 else
  { printf("(found)"); }
  printf("\n\nThe number of times the loop has executed = %d",count); getch();
  }
