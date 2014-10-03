#include <cstdio>
typedef long long LL;
const LL M = 1000000007;
int main(void){
        int t; scanf("%d", &t);
        while(t--){
                int n; scanf("%d", &n); --n;
                LL r = 1, mult = 2;
                while(n){
                        if(n & 1) r = (r * mult) % M; // n is a power of 2 ?
                        mult = (mult * mult) % M;
                        n/=2;
                }
                printf("%lld\n", r);
        }               
        return 0;
}
