
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

#include <algorithm>

using namespace std;





const double EPS = 1e-9;
const int INF = 99999999999;
int a[MX], b[MX];

int main() {

	int i,j,n,m,res,tmp,cs;
	cin>>cs;
	while(cs--){
	    cin>>n;
	    for(i=0;i<n;i++)cin>>a[i];
	    sort(a,a+n);

	    cin>>m;
	    for(i=0;i<m;i++)cin>>b[i];
	    sort(b,b+m);
	    b[m] = INF;
	    res=INF;
	    for(i=0;i<n;i++){
	        j=lower_bound(b,b+m,a[i])-b;
	        tmp=_abs(b[j]-a[i]);
	        res=_min(tmp,res);
	        if(j-1>=0){
	            tmp=_abs(b[j-1]-a[i]);
                res=_min(tmp,res);
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
