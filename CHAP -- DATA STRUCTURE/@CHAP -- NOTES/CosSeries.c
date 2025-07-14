/*
	Write a program to compute cosine of x. The user should supply x and a positive integer n. 
	We compute the cosine of x using the series and the computation should use all terms in the 
	series up through the term involving x^n.
	cos x = 1 - x2/2! + x4/4! - x6/6! .....
*/
#include <stdio.h>

int main()
{
    int i, j, n, fact, sign =  - 1;
    float x, p, sum = 0;

    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
    {
        p = 1;
        fact = 1;

        for (j = 1; j <= i; j++)
        {
            p = p * x;
            fact = fact * j;
        }

        sum += sign * p / fact;
        sign =  - 1 * sign;
    }

    printf("cos %0.2f = %f", x, 1+sum);

    return 0;
}