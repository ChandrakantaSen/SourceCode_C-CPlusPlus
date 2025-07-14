/***** Shell.C ******/
/*********** Program for shell sort of randam 20 numbers ********/
#include <stdio.h>
#include <stdlib.h>
void shell_sort(int array[], int size)  /* FUNCTION DECLARATION */
{
   int temp, gap, i, exchange_occurred;
   gap = size / 2;
   do {
	do {
	     exchange_occurred = 0;
	     for (i = 0; i < size - gap; i++)
	      {
		if (array[i] > array[i + gap])
		 {
		    temp = array[i];
		    array[i] = array[i + gap];
		    array[i + gap] = temp;
		    exchange_occurred = 1;
		 }
	      }
	   } while (exchange_occurred);
	 gap=gap/2;
	} while (gap);
}
/****************************************************************/
  void main()
  {
	int values[20],i;
	clrscr();
	printf(" ******** SHELL SORT ********\n");
	printf(" Unsorted list is as follows \n");
	for(i=0;i<20;i++)          /* Generating Randam Numbers */
	{
	   values[i] = rand() % 100;
	   printf("%4d", values[i]);
	}
	shell_sort(values, 20);   /* Calling the function      */
	printf("\n Sorted list is as follows \n");
	for(i=0;i<20;i++)
	  printf("%4d",values[i]);
    getch();
  }
/***************************************************************/