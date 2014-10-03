#include <stdio.h>

const int inf = 2139062143;
int tri[100000][3];

inline int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int n, i, j, a, b, c, d, cs = 1;
	while(scanf("%d", &n)==1 && n) {
		for(i = 0; i < n; i++)
			for(j = 0; j < 3; j++)
				scanf("%d", &tri[i][j]);
				
		tri[0][0] = inf; // 1st row , left most node
		tri[0][2] += tri[0][1]; // 1st row , value right most node = value of right most node + value of middle node
		
		for(i = 1; i < n; i++) {
			for(j = 0; j < 3; j++) {
				a = (j==2)? inf : tri[i-1][j+1];
				b = tri[i-1][j];
				c = (j==0)? inf : tri[i-1][j-1];
				d = (j==0)? inf : tri[i][j-1];
				tri[i][j] += min(min(a, b), min(c, d));
			}
		}
		
		printf("%d. %d\n", cs++, tri[n-1][1]); // last row , middle node
	}
	return 0;
}
