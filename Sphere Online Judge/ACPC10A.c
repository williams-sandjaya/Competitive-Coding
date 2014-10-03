#include <stdio.h>


int main (void)
{
    int a, b, c;

    while (1)                                   /* continue forever */
    {
        scanf("%d %d %d", &a, &b, &c);

        if (a==0 && b==0 && c==0) break;        /* stop if input is "0 0 0" */

        else if (a+c == (2*b))                  /* check if AP */
        {
            printf("AP %d\n", c*2-b);
        }

        else if (a*c == b*b)                    /* check if GP */
        {
            printf("GP %d\n", c*c/b);
        }
    }
    return 0;
}
