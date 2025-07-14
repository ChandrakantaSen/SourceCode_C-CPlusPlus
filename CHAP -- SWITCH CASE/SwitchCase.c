/* Switch Case Statement - Menu Driven Program */
#include<stdio.h>
#include<conio.h>

void main()
{
	int ch;
	printf("1. Addition of two numbers");
	printf("\n2. Substration of two numbers");
	printf("\n3. Average of two numbers");
	printf("\n4. Find area & perimeter of rectangle");
	printf("\n5. Convert temparature - Celcius to Fareheit");

	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
					int a,b,c;
					printf("\nEnter the numbers: ");
					scanf("%d %d",&a,&b);
					c = (a + b);
					printf("\nSum is: %d",c);
					break;
		case 2:
					int a1,b1,c1;
					printf("\nEnter the numbers: ");
					scanf("%d %d",&a1,&b1);
					c1 = (a1 - b1);
					printf("\nDifference is: %d",c1);
					break;
		case 3:
					int a2,b2,c2;
					printf("\nEnter the numbers: ");
					scanf("%d %d",&a2,&b2);
					c2 = (a2 + b2)/2;
					printf("\nAverage is: %d",c2);
					break;
		case 4:
					int length,breadth,area,perimeter;
					printf("\nEnter the length: ");
					scanf("%d",&length);
					printf("\nEnter the breadth: ");
					scanf("%d",&breadth);

					area = (length * breadth);
					perimeter = 2*(length + breadth);

					printf("\nArea is: %d",area);
					printf("\nPerimeter is: %d",perimeter);
					break;
		case 5:
					float cel,faren;
					printf("\nEnter the celcius temparature: ");
					scanf("%f",&cel);

					faren = ((9*cel)/5)+32;
					printf("\nFarenheit Value is: %f",faren);
					break;
		default: 
					printf("wrong Input...");
	}
}
