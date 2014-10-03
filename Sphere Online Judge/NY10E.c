#include <stdio.h>
void step(long long int *arr)                                           /* modify the array to one up the case it belongs to e.g. from 4 digit to 5 digit numbers */
{
    int i;
    for (i = 1; i < 10; i++) { arr[i] += arr[i-1]; }
}


int main(void)
{
    int iters;
    int x, y;
    
    scanf("%d", &iters);
    
    while (iters--)
    {
        scanf("%d %d", &x, &y);
        y--;
        
        long long int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };      /* this array has the answer of the 1 digit number case */
        while (y--) { step(arr); }                                      /* modify the array to satisfy the y digit number case */
        
        printf("%d %lld\n", x, arr[9]);
    }
    return 0;
}
