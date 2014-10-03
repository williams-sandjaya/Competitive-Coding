#include <cstdio>
#include <cstdlib>
#include <cstring>
const int MOD = 1000000007;
int sum[26];
char s[100009], n[8];
 
int main() 
{
	int test, i, v, tmp, ret;
	test = atoi(fgets(n, 7, stdin));
	while(test--)
    {
		fgets(s, 100008, stdin);
		memset(sum,0,sizeof(sum));
		sum[s[0]-'A'] = 1;
		ret = 2;
		
		for(i = 1; s[i] > 32; i++) 
        {
			v = s[i]-'A';
			tmp = ret - sum[v] + MOD; 
            if(tmp >= MOD) tmp -= MOD;
			ret = ret + tmp; 
            if(ret >= MOD) ret -= MOD;
			sum[v] = sum[v] + tmp; 
            if(sum[v] >= MOD) sum[v] -= MOD;
		}
		printf("%d\n", ret);
		
	}
	return 0;
}
