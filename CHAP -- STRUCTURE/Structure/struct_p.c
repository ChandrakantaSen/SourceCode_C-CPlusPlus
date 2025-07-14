/* Example of structure using pointer */

#include <stdio.h>
#include <string.h>

struct student 
{
     int id;
     char name[30];
     float percentage;
};

void main()
{
     int i;
	  struct student record1 = {1, "Raju", 90.5};
     struct student *ptr;

     ptr = &record1;     

         printf("\n***Records of STUDENT***\n");
         printf("  Id is: %d \n", ptr->id);
         printf("  Name is: %s \n", ptr->name);
			printf("  Percentage is: %f \n\n", ptr->percentage);
}