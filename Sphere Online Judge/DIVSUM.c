#include <stdio.h>
#include <math.h>

int sum_div(int caes)                                                           /* calculates the sum of divisors of the number caes */
{
  int sum_of_divs;
  int i;
  int end;

  sum_of_divs = 1;
  end = (int)sqrt(caes);
  
  for (i = 2; i <= end; i++) {                                                  /* you'll have to do a bit of thinking here */
    if (caes%i == 0) {                                                          /* e.g. 20 has 1, 2, 4, 5, 10 as it's divisors */
      sum_of_divs += (i + caes/i);                                              /* so the loop, runs with i = 2, 3, 4 only */
    }                                                                           /* when i = 2, both 2 and 10 are added to the sum_of divs */
  }                                                                             /* when i = 4, both 4 and 5 are added */

  if((end*end)==caes) {                                                         /* if caes is a perfect square, e.g. 25, */
    sum_of_divs -= end;                                                         /* it's divisors will be 1, 5, 5. In that case, */
  }                                                                             /* our sum_of_divs will have an extra 5, the previous line handles such cases. */

  return sum_of_divs;
}

int main(void)
{
  int iters;  
  scanf("%d", &iters);
  
  int caes;

  while (iters--) {
    scanf("%d", &caes);
    printf("%d\n", sum_div(caes));
  }
  
  return 0;
}
