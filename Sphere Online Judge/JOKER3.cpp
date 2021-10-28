#include <bits/stdc++.h>
using namespace std;
int test,n,arr[1000000];
int main(){
	scanf("%d",&test);
	while(test--){
		int knive = 0;
		scanf("%d",&n);
		arr[n+5];
		int dp[n+5];
	    for(int i=1;i<=n;i++){
			scanf("%d",&arr[i]);
	        if(arr[i] == 1){
	        	knive++;
				arr[i] = -1;
	        }else if(arr[i] == 0){
				arr[i] = 1;
			}
			 
	    }
		if(arr[1]==1) dp[1] = 1;
		else if(arr[1] == -1)dp[1] = -1;
	    int maxx = dp[1];
	    for(int i=2;i<=n;i++){
	    	dp[i] = max(arr[i]+dp[i-1],arr[i]);
	    	maxx = max(maxx,dp[i]);
	    }
	    printf("%d\n",maxx+knive);
	}
	return 0;
}
