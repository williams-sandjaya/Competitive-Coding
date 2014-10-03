#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cwctype>
#include <cctype>
#include <cstring>
#include <climits>
using namespace std;

void printArray(long long * a, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%lld\t", a[i]);
	}
	printf("\n");
}

int main()
{
    int t;
    int n;
    int k;
    int *a = new int[100000];
    scanf("%d", &t);
    while(t > 0)
	{
        t--;
        int i;
        scanf("%d %d", &n, &k);
        for(i=0; i<n; i++)
            scanf("%d", &(a[i]));

        long long* largestContSumFromStart = new long long[n];
        long long* largestContSumFromEnd = new long long[n];
        
        //populate largestContSumFromStart array
        long long max_sum = INT_MIN;
        long long curr_sum = 0;
        for(i=0; i<n; i++)
		{
            curr_sum = curr_sum +  a[i];
            curr_sum = max(curr_sum, (long long)(a[i]));
            max_sum = max(max_sum, curr_sum);
            largestContSumFromStart[i] = max_sum;
        }
        
        // populate largestContSumFromEnd array
        max_sum = INT_MIN;
        curr_sum = 0;
        for(i=n-1; i>=0; i--)
		{
			curr_sum = curr_sum + a[i];
			curr_sum = max(curr_sum, (long long)(a[i]));
            max_sum = max(max_sum, curr_sum);
            largestContSumFromEnd[i] = max_sum;
        }
        
        max_sum = INT_MIN; 
        curr_sum = 0;
        for(i=1; i<(n-k); i++)
		{
			curr_sum = largestContSumFromStart[i-1] + largestContSumFromEnd[i+k];
			max_sum = max(max_sum, curr_sum);
        }
        
        printf("%lld\n", max_sum); 
    }
}
