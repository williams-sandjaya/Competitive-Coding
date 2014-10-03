#include <cstdio>
#include <algorithm>
using namespace std;

#define MAXR 1234
#define MAXC 5678

int R[MAXR+1], C[MAXC+1], cR[MAXR+1], cC[MAXC+1]; // cR[MAXR+1], cC[MAXC+1] main cheeze hai,jahan pe finally sab kuch store ho raha hai

inline int m(int x, int y)
{
	return (R[x]-1)*MAXC + C[y]; // simple method of 2d matrix traversal
	// note that R[x] and C[y] are quivalent to CR[] and cC[] // so they also store the interchanging rows/columns
}

inline void getxy(int w, int &x, int &y)
{
	int p = (w+MAXC-1) / MAXC; // p = kon sa row number hona chahiye tha
	int q = (w-1) % MAXC + 1; // q = kon sa column number hona chahiye tha
	x = cR[p]; // gets the actual row number
	y = cC[q]; // gets the actual column number
}

int main()
{
	int i, x, y, w;
	char s[5];
	for(i=1; i<=1234; i++) R[i] = cR[i] = i;
	for(i=1; i<=5678; i++) C[i] = cC[i] = i;
	while(scanf("%s", s)==1)
	{
		switch(s[0])
		{
		case 'R': 
			scanf("%d %d", &x, &y); // 24,30
			swap(R[x], R[y]); // 24,30 -> 30,24
			cR[R[x]] = x; // 24
			cR[R[y]] = y; // 30
		break;
		case 'C':
			scanf("%d %d", &x, &y);
			swap(C[x], C[y]);
			cC[C[x]] = x;
			cC[C[y]] = y;
		break;
		case 'Q':
			scanf("%d %d", &x, &y);
			printf("%d\n", m(x, y));
		break;
		case 'W':
			scanf("%d", &w);
			getxy(w, x, y);
			printf("%d %d\n", x, y);
		}
	}
	return 0;
}
