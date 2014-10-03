#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

typedef double ld;

template< class T > T sq(const T &x) { return x * x; }


struct point {
	ld x, y;
};

inline ld dist(point a, point b) { // a has the initial co-ordinates
	return sqrt(sq(a.x-b.x) + sq(a.y-b.y));
}

int main() {
	point p, q;
	ld res = 0.0;
	scanf("%*[^(](%lf, %lf).", &p.x, &p.y); // initial point
	while(scanf("%*[^(](%lf, %lf).", &q.x, &q.y)==2) {
		res += dist(p, q);
		printf("The salesman has traveled a total of %.3lf kilometers.\n", res);
		p = q;
	}
	return 0;
}
