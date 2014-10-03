#include <iostream>
using namespace std;
long long a[110000]={};
long i,n,m,c,t,v,p=1;
int main() {
    cin >> n >> m;
    for (i=1;i<=n;i++) {
        cin >> c >> t;
        a[i]=a[i-1]+c*t;
    }
    for (i=0;i<m;i++) {
        cin >> v;
        while (a[p]<v) p++;
        cout << p << endl;
    }
    return 0;
}
