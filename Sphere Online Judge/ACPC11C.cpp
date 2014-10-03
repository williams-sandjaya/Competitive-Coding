#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }

const int INF = 0x7f7f7f7f;
const int MAX = 100009;

int L[MAX];

int main() {

	int test, i, n, sum, mn, res, x, y;
	cin >> test;
	
	while(test--) {
	    cin >> n;
	    for(i = 0; i < n; i++) {
	        cin >> L[i];
	    }
	    for(i = sum = 0; i < n; i++) sum += L[i];
	    
	   y=0, x = 0, res = INF;
	    
	    for(i = 0; i < n; i++) {
            y = sum - x - L[i];
            mn = 2*_min(x, y) + _max(x, y);
            res = _min(res, mn);
            x += L[i];
	    }
	    cout << res << endl;
	}
	return 0;
}
