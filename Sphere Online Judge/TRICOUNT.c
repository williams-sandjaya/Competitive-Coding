#include <stdio.h>
int main (void)
{  
    int iters;
    long long int caes;
    long long int answer;
    scanf("%d", &iters);
    
    while (iters--)
    {
        scanf("%lld", &caes);
        answer = ((caes)*(caes+2)*(2*caes + 1)) / 8;
        printf("%lld\n", answer);
    }
    return 0;
}
