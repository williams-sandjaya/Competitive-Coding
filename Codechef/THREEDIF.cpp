#include<cstdio>
#include <algorithm>
using namespace std;
#define rem 1000000007
 
int main(void){
    
    long long int i,j,a[3],t,tmp,ans;
    scanf("%lld", &t);
    while(t--){
          scanf("%lld %lld %lld", &a[0], &a[1], &a[2]);
         sort(a,a+3);
           a[1] -= 1;
           a[2] -= 2;
           for(i=0;i<3;++i)
           {
               a[i] %= rem;
           }
           ans = (a[0]*a[1])%rem;
           ans *= a[2];
           ans %= rem;    
           printf("%lld\n", ans);  
    }
    return 0;
}
 
