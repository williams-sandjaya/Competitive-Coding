#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <algorithm> // 8809141298
using namespace std;
#define CLR(p) memset(p, 0, sizeof(p))
int main() {

	int T,n,u;
	int cn[110];
	cin>>T;
	while(T--) {
		cin>>n;
		CLR(cn);
		while(n--) {
			cin>>u;
			cn[u]++;
		}
		int i,r=-1,v=-1;
		for(i=0;i<=100;i++) if(cn[i] && !(cn[i]%i) && (cn[i]>r || (cn[i]==r && i<v))) {
			r=cn[i];
			v=i;
		}
		cout<<v<<'\n';
	}
	return 0;
}
