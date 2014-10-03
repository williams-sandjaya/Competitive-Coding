#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
/*
http://oeis.org/A000788
http://oeis.org/A000788/a000788.txt
http://oeis.org/A000788/b000788.txt
*/ 
 
unsigned long long cal(unsigned long long n)
{
        unsigned long long  v = 0;
        for (unsigned long long bit = 1; bit <= n; bit <<= 1)
                v += (((n>>1)&~(bit-1)) + ((n&bit) ? (n&((bit<<1)-1))-(bit-1) : 0))%1000000007;
        return v%1000000007;
}
 
int main()
{
unsigned long long  test=0,n;
 
cin >> test;
 
    while(test--)
    {
    cin >> n;
    cout << cal(n) << endl;
    }

return 0;
}
