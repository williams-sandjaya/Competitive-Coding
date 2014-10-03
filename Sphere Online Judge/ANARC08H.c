#include <stdio.h>
typedef long LL;
 
int main()
{
    LL n, k, ans, i;
 
    while (1) {
        scanf("%ld %ld", &n, &k);
        if (n == 0 && k == 0)
            break;
        ans = 0;LL t=1;
        for (i = 1; i < n; i++) {
            ans = (ans + k) % (i + 1);
          // ans = (ans + (i + 1)*k) % (i + 1);
          //t++;k=t*k;
        }
        printf("%ld %ld %ld\n", n, k, ans + 1);
    }
    return 0;
}
