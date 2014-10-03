#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000001

int a[MAX];

int main() {
	int i, j;
	double left, right, v;
	a[1] = 2;
	left = log(2.0);
	
	for(i=j=2; i<MAX; i++) {
		v = log((double)i);
		for(++j; ;j++) {
			left += log((double)j);
			right = v*j;
			if(left > right) {
				a[i] = j;
				break;
			}
		}
	}
	
	
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n); // n>1
		printf("%d\n", a[n]);
	}
	
	
	return 0;
}
