#include<stdio.h>
#include<math.h>
typedef long long LL;
int main()
{
    LL test;
    LL i;
    scanf("%lld", &test);
    for (i = 0; i < test; i++) {
 
        LL N, M, K;
        LL count = 0;
        float max,max1,max2;
        scanf("%lld %lld %lld", &N, &M, &K);
        printf("Case #%lld: ", i + 1);
        LL ans = N * K * M - 1;
        printf("%lld ", ans);
 
        while (N != 1 || K != 1 || M != 1) {
            count++;

            
            max1 = (N>M?N:M);
            max2 = max1>K?max1:K;
            max=max2;
 
         
            if (((LL) max) == N) {
                N = (LL) ceil(max / 2);
                continue;
            } else if ((LL) max == M) {
                M = (long) ceil(max / 2);
                continue;
            } else if ((LL) max == K)
                K = (LL) ceil(max / 2);
        }
        printf("%lld\n", count);
    }
    
    system("pause");
}
