#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define pii pair< int, int >
#define MAX 185
#define INF (1<<30)
char grid[MAX][MAX];
int graph[MAX][MAX];
int R, C;

/*
	Solution.
		BFS, but you have to do it once, otherwise if you try doing BFS for each position it'll be TLE (I know :P)
		so basically put into the queue each white (1) pixel and and set it's distance equals to 0, and the distance 
		for the black pixels equals to something BIG, then just do the normal BFS. :)

	Notes.
		http://apps.topcoder.com/forums/;jsessionid=61B18C2F90D8E14B038F8F3F7412A163?module=Thread&threadID=680765&start=0&mc=5#1262594
*/

inline bool inRange(int i, int j)
{
	return (i>=0 && i<R && j>=0 && j<C);
}

void bfs(pii s)
{
	pii u;
	int d;
	queue< pii > Q;
	Q.push(s);
	
	while(!Q.empty())
	{
		u = Q.front();
		Q.pop();
		FOR(i, (u.first-1), (u.first+1))
			FOR(j, (u.second-1), (u.second+1))
				if(inRange(i,j))
				{
					d = abs(i-s.first) + abs(j-s.second);
					if(graph[i][j] > d)
					{
						graph[i][j] = d; // replacing the previous by d as d is small than the previous one
						Q.push(pii(i,j));
					}
				}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &R, &C);
		REP(i,R) scanf("%s", grid[i]);

		REP(i,R) 
            REP(j,C) 
                graph[i][j] = (grid[i][j]=='0')? INF : 0; // setting distance to INF for black and 0 for white

		REP(i,R)
			REP(j,C)
				if(grid[i][j]=='1') // if white then BFS
					bfs(pii(i,j));

		REP(i,R)
		{
			FOR(j,0,(C-1)) 
                printf("%d ", graph[i][j]);
			printf("\n");
		}
	}
	return 0;
}
