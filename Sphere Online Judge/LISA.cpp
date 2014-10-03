#include<iostream>
#include<algorithm>
#include<cstring>
char arr[1000], oprtr[1000];
using namespace std;
int main()
{
    long long int test, i, j;
    scanf("%lld", &test);
    //scanf("n");
    while (test--) {
        long long int numbers[1000];
        gets(arr);
        long long int k = 0, p = 0, n = 0, o = 0;
        for (i = 0; i < strlen(arr); i++) {
            if (i % 2 == 0)
                numbers[n++] = arr[i] - '0';
            else
                oprtr[o++] = arr[i];
        }
        long long int dp[n][n];
        for (i = 0; i < n; i++)
            dp[i][i] = numbers[i];
        int l;
        for (l = 2; l <= n; l++) {
            for (i = 0; i <= n - l; i++) {
                j = i + l - 1;
                dp[i][j] = 0;
                for (k = i; k <= j - 1; k++) {
                    if (oprtr[k] == '+')
                        dp[i][j] = max(dp[i][j], dp[i][k] + dp[k + 1][j]);
                    else
                        dp[i][j] = max(dp[i][j], dp[i][k] * dp[k + 1][j]);
                    // printf("dp(%d,%d)=%dn",i,j,dp[i][j]);
                }
            }
        }
        printf("%lld ", dp[0][n - 1]);
        for (l = 2; l <= n; l++) {
            for (i = 0; i <= n - l; i++) {
                j = i + l - 1;
                dp[i][j] = 10000000;
                for (k = i; k <= j - 1; k++) {
                    if (oprtr[k] == '+')
                        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j]);
                    else
                        dp[i][j] = min(dp[i][j], dp[i][k] * dp[k + 1][j]);
                    // printf("dp(%d,%d)=%dn",i,j,dp[i][j]);
                }
            }
        }
        printf("%lld\n", dp[0][n - 1]);
 
    }
    return 0;
 
 
}
