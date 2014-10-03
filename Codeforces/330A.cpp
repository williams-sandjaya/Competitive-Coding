#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
using namespace std;
char data[20][20];
bool row[20];
bool col[20];
 
int main()
{
    int r, c;
    while (scanf("%d%d",&r,&c) != EOF)
    {
        int Nr=r,Nc=c;
        memset(row, 1, sizeof(row));
        memset(col, 1, sizeof(col));
        for (int i = 0; i < r; i++)
        {
            scanf("%s",data[i]);
            for (int j = 0; j < c; j++)
            {
                if (data[i][j] == 'S')
                {
                    if(row[i]==1)       
                       Nr--;
                    if(col[j]==1)  
                       Nc--;
                    row[i]=0;
                    col[j]=0;   
                }
            }
        }
        printf("%d\n", Nr*c + Nc*r - Nc*Nr);
    }
}
