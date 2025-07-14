/*
Write a program to compute sin x for given x. The user should supply x and a positive integer n. 
We compute the sine of x using the series and the computation should use all terms in the series 
up through the term involving xn
					sin x = x - x3/3! + x5/5! - x7/7! + x9/9! ........
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

  for (i = 1; i <= n; i += 2)
  {
    p = 1;
    fact = 1;
    for (j = 1; j <= i; j++)
    {
      p = p * x;
      fact = fact * j;
    }
    sign =  - 1 * sign;
    sum += sign * p / fact;
  }

  printf("sin %0.2f = %f", x, sum);

  return 0;
}