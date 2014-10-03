/*
We can simply move by greedy method — only moves when it takes the boat closer to the destination.
*/
#include <stdio.h>
#define N 100002
char s[N];

int ABS (int u) 
{
	if (u>0) return u;
	return -u;
}

int main() 
{
	int n, x, y, ex, ey, i, j;
	int dx[]={0, -1, 0, 1};
	int dy[]={1, 0, -1, 0};
	scanf ("%d%d%d%d%d", &n, &x, &y, &ex, &ey);
	char dir[]="NWSE";
	scanf ("%s", s);

	if (x==ex && y==ey) // if source,destination data is same
    { 
		puts("0");
		return 0;
	}

	for (i=0; i<n; i++) 
    {
		for (j=0; j<4; j++) if (s[i]==dir[j]) break; // gets direction
		int p=ABS(x-ex) + ABS(y-ey); // distance to be moved before
		x += dx[j]; y += dy[j]; // move
		int q=ABS(x-ex) + ABS(y-ey); // distance to be moved after
		if (p<q) x -= dx[j], y -= dy[j]; // if(distance to be moved before < distance to be moved after) then move back to the previous position
		if (x==ex && y==ey) break;
	}
	if (i==n) puts("-1"); // if still (x!=ex && y!=ey) 
	else printf ("%d\n", i+1); // print the steps
}
