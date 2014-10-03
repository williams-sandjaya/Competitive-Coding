#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include <cstring>
#define MOD 3046201
using namespace std;
long long factorial[3000005], inverseFactorial[3000005];long SegmentTree[300005];

long long power(long long a,long long b) // returns a^b%MOD
{
    if(b==0)
        return 1;
        
        long long temporary;
        temporary = power(a, b/2);
        temporary = (temporary*temporary)%MOD;
        if(b&1)
                temporary = (temporary*a)%MOD;
        return temporary;
}

int initialize() // calculates factorial[] and inverseFactorial[]
{
        int i;
        factorial[0] = factorial[1] = 1;
        for(i = 2 ; i<=3000000 ; i++)
                factorial[i] = (i*factorial[i-1])%MOD;

        inverseFactorial[3000000] = power(factorial[3000000], MOD-2);
        for(i=2999999 ; i>=0 ; i--)
                inverseFactorial[i] = ((i+1)*inverseFactorial[i+1])%MOD;
    return 0;
}

long long nCr(int i, int j) // returns nCr
{
        return ((factorial[i]*inverseFactorial[j])%MOD * inverseFactorial[i-j])%MOD ;
}

int BuildSegmentTree(long index, int *arr, long left, long right) // builds SegmentTree
{
        if(left>right)
                return 0;
        if(left==right)
        {
            SegmentTree[index] = arr[left];
            return 0;
        }
        BuildSegmentTree(2*index, arr, left, (left+right)/2);
        BuildSegmentTree(2*index+1, arr, (left+right)/2 + 1, right);
        SegmentTree[index] = SegmentTree[2*index] + SegmentTree[2*index+1];
    return 0;
}

long GetSum(long index, long LeftRange, long RightRange, long left, long right) // gets the sum within a given range
{
        if( LeftRange>=left && RightRange<=right )  // .| |.
        {
                return SegmentTree[index];
        }
        else if(RightRange<left || LeftRange>right) // ..| |  or  | |..
                return 0;
        else
                return (GetSum(2*index, LeftRange, (LeftRange+RightRange)/2, left, right)+GetSum(2*index+1, (LeftRange+RightRange)/2+1, RightRange, left, right));
}

int update(long index, long LeftRange, long RightRange, long i, int diff) // updates the SegmentTree
{
        if(i<LeftRange || i>RightRange)
                return 0;
        SegmentTree[index] += diff;
        if(LeftRange != RightRange)
        {
                update(2*index, LeftRange, (LeftRange+RightRange)/2, i, diff);
                update(2*index+1, (LeftRange+RightRange)/2+1, RightRange, i, diff);
        }
    return 0;
}

long long Query(long sum, int n) // returns number of fair ways
{
        long b1, b2, a1, a2;long long ans;
        a1 = sum/n + 1;
        a2 = sum/n;
        b1 = sum%n;
        b2 = n - b1;
        ans = ( factorial[sum]*power(inverseFactorial[a1], b1) )%MOD;
        ans = ( ans*power(inverseFactorial[a2], b2) )%MOD;
        ans = ( ans*nCr(n, b1) )%MOD;
        return ans;
}

int main()
{
        int n, arr[100005], q, x, y;char str[10];int i;long sum;
        initialize();
        scanf("%d", &n);
        for(i=0 ; i<n ; i++) scanf("%d",&arr[i]);
        scanf("%d",&q);
        BuildSegmentTree(1, arr, 0, n-1);
        while(q--)
        {
                scanf("%s", str);scanf("%d%d", &x, &y);
                if(str[0] == 'c')
                {
                        update(1, 0, n-1, x-1, y-arr[x-1]);
                        arr[x-1] = y;
                }
                else
                {
                        sum = GetSum(1, 0, n-1, x-1, y-1);
                        if(sum==0) printf("1\n");
                        else printf("%lld\n", Query(sum, y-x+1));
                }
        }
        
        return 0;
}
