/* WAP to find the area & perimeter of a rectangle */
#include<stdio.h>
#include<conio.h>

void main()
{
    int length,breadth,area,perimeter;
    printf("\nEnter the length: ");
    scanf("%d",&length);

    printf("\nEnter the breadth: ");
    scanf("%d",&breadth);

    area = (length * breadth);
    perimeter = 2*(length + breadth);

    printf("\nArea is: %d",area);
    printf("\nPerimeter is: %d",perimeter);
}
