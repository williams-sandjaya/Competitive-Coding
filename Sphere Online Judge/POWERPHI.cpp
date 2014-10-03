#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
#define CPY(d, s) memcpy(d, s, sizeof(s))
#define i64 long long
const int MOD = 1000000007;
i64 base[2][2] = {{1, 1},{1, 0}}, mat[2][2], unit[2][2] = {{1,0},{0,1}};

void mul(i64 a[2][2], i64 b[2][2]) 
{
	i64 temp[2][2] = {0};
	int i, j, k;
	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			for(k = 0; k < 2; k++) 
            {
				temp[i][j] += a[i][k] * b[k][j];
				temp[i][j] %= MOD;
			}
	CPY(a, temp);
}

void expo(i64 n) 
{
	if(n==0) CPY(mat, unit);
	else if(n&1) 
    {
		expo(n-1);
		mul(mat, base);
	}
	else 
    {
		expo(n>>1);
		mul(mat, mat);
	}
}

int main() 
{

	int t;
	i64 n, res;
	scanf("%d", &t);
	while(t--) 
    {
		scanf("%lld", &n);
		if(n==0) {printf("1\n"); continue; }
        else if(n==1) { printf("2\n"); continue; }
		expo(n);
		res = mat[0][0]+mat[1][1];
		printf("%lld\n", res % MOD);
	}
	return 0;
}
