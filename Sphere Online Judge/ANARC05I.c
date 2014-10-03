#include <stdio.h>

#define MAX 2002

int grid[MAX][MAX];
char str[MAX/2];

int main()
{
	int t = 1, i, cnt, x, y;
	while(scanf("%s", str)==1)
	{
		if(str[0]=='Q') break;
		cnt=0,x=y=1001,grid[x][y]=t; // marks the t case at the center of the plot
		//grid[1001][1001] is the center of the plot
		for(i=0; str[i]!='Q'; i++) // traverses the whole string
		{
			switch(str[i])
			{
			case 'U': y += 1; break;
			case 'D': y -= 1; break;
			case 'R': x += 1; break;
			case 'L': x -= 1; break;
			}
			if(grid[x][y]==t) cnt++;
			else grid[x][y] = t;
		}
		printf("%d\n", cnt);
		t++;
	}
	return 0;
}
