#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, d, alpha, beta, gamma, delta;
	double D, L, HA, HB, ERR;
	double h, hl, hr, pi = acos(-1.0);
	int test, cs = 1;
	scanf("%d%lf%lf%lf%lf%lf", &test, &D, &L, &HA, &HB, &ERR);
	while(test--) {
		scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
		if(a>0.0 && a<90.0 && b>0.0 && b <90.0 && c>0.0 && c<90.0 && d>90.0 && d<180.0) {
			d = 180.0 - d;
			alpha = a * pi / 180.0; // convert to radian
			beta = b * pi / 180.0; // convert to radian
			gamma = c * pi / 180.0; // convert to radian 
			delta = d * pi / 180.0; // convert to radian
			h = tan(gamma) * (D * tan(delta) / (tan(delta) + tan(gamma))); // last two
			hl = HA + h / sin(gamma) * tan(alpha); // 1st and 4th
			hr = HB + h / sin(delta) * tan(beta); // 2nd and 3rd
			if(fabs(hl - hr) > ERR) printf("%d ERROR\n", cs++);
			else printf("%d %d\n", cs++, (int)((hl + hr) / 2.0 + 0.5));
		}
		else printf("%d DISQUALIFIED\n", cs++);
	}
	return 0;
}
