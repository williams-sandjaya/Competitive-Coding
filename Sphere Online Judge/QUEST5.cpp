#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 10101;
struct bar 
{
	int x, y;
} b[MAX];

bool comp(const bar &a, const bar &b) 
{
	return (a.y < b.y);
}

int main() {
	int t, i, n, nail, last;
	scanf("%d", &t);
	while(t--) 
    {
		scanf("%d", &n);
		for(i=0; i<n; i++) 
        {
			scanf("%d%d", &b[i].x, &b[i].y);
		}
		sort(b, b+n, comp);
		nail = 0;
		last = -1;
		for(i=0; i<n; i++) 
        {
			if(b[i].x > last)
             {
				nail++;
				last = b[i].y;
			}
		}
		printf("%d\n", nail);
	}
	return 0;
}
