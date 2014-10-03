#include <iostream>
#include <map>
using namespace std;
typedef long long LL;
map<LL, LL> s;
LL sol;
 
LL solve(LL n){
    if(n <= 11) return n;
    
    if(s.count(n)) return s[n];
    
    LL aux = solve(n/2LL) + solve(n/3LL) + solve(n/4LL);
    sol = max(sol, aux);
    s[n] = aux;
    
    return aux;
}
int main() {
    LL n;
    while(scanf("%lld", &n) != EOF){
        sol = n;
        solve(n);
        printf("%lld\n", sol);
    }
}
