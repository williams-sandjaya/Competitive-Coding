#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int tc,i,o=0,n,ans,x,j,deg[10],used[1000]={0},sg[100333]={0}; //sg[i] - Sprague-Grundy's number for a group of i stones.
    scanf("%d", &tc);
    for(i = 1; i <= 7; i++)
    {
        deg[i] = 1;
        for(j = 1; j <= i; j++)
            deg[i] = deg[i] * i;
    }
    for(i = 1; i <=100000; i++)
    {
        o++;
        for(j = 1; deg[j] <= i; j++)
            used[sg[i-deg[j]]] = o; // mark all reachable positions with 'o'
        for(j = 0; j < 1000; j++)
            if(used[j] != o)
            {
                sg[i] = j; // finding MEX
                break;
            }
    }
    while(tc--)
    {
        ans = 0;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            ans ^= sg[x];
        }
        if(ans)
           printf("Little Chef\n");
        else
           printf("Head Chef\n");
    }
}
