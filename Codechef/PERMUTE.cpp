// Rajarshi Sarkar , BIT Mesra
#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<stack>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<utility>
using namespace std;
long long mod = 1000000007;
 
    long long power(long long base, long long exp, long long mod)
    {
        if (!exp) return 1 % mod;
        if (exp & 1) return power(base, exp - 1, mod) * base % mod;
        long long res = power(base ,exp >> 1, mod);
        return (res*res) % mod;
    }
 
            
 
int main()
{
    long long test=0,i,j,n,m,sum=0,ans=0,factorial[1000000];
    factorial[0]=1;
    for(i=1;i<1000001;i++)
        factorial[i]=i*factorial[i-1]%mod;
     
    cin >> test;
     
        while(test--)
        {
            cin >> n >> m;
            
            long long diff,base_factorial,total_power,ans=0;
            diff = m-n;
            base_factorial = factorial[diff+1];
            total_power = abs(diff+1-n);
            
            if(total_power%2==0)
                ans = base_factorial%mod*power(diff,total_power/2,mod)%mod*power(diff+1,total_power/2,mod)%mod;
            else if(total_power%2==1)
                ans = base_factorial%mod*power(diff,total_power/2 + 1,mod)%mod*power(diff+1,total_power/2,mod)%mod;
            cout << ans%mod << endl;
    }
 
system("pause");
return 0;
}
