#include<stdio.h>
#include<malloc.h>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int n, m, min, array[104][104], dp[104][104], check[104][104];

void calculate()
{
    int i, j, temp1, temp2;char temp_store[104];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",temp_store);
        for(j=0;j<m;j++)
        {
            if(temp_store[j]=='0')
            array[i][j]=0;
 
            if(temp_store[j]=='1')
            array[i][j]=1;
        }
    }
    
    for(i=0;i<n;i++) array[i][m]=0;
    for(i=0;i<m;i++) array[n][i]=0;
 
    
    dp[0][0]= array[0][0]+ array[1][0]+ array[0][1];
    for(i=1;i<m-1;i++)
    {
        dp[0][i]= dp[0][i-1] + array[1][i]+ array[0][i+1];
        check[0][i]= 1;
    } 
    dp[0][m-1]= dp[0][m-2]+ array[1][m-1];
    check[0][m-1]=1;
 
 
    for(i=1;i<n-1;i++)
    {
        dp[i][0]= dp[i-1][0] + array[i][1] + array[i+1][0];
        check[i][0]= 2;
    }   
    dp[n-1][0]= dp[n-2][0] + array[n-1][1];
    check[n-1][0]=2;
    
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(check[i][j-1]== 1)
                temp1= dp[i][j-1]+ array[i+1][j]+ array[i-1][j]+ array[i][j+1];
            else
                temp1= dp[i][j-1]+ array[i+1][j]               + array[i][j+1];
 
            if(check[i-1][j]== 2)
                temp2= dp[i-1][j]+ array[i+1][j] + array[i][j-1]+ array[i][j+1];
            else
                temp2= dp[i-1][j]+ array[i+1][j]                + array[i][j+1];
 
            if(temp1<temp2)
            {
                dp[i][j]= temp1;
                check[i][j]=1;
            }
            if(temp2<temp1)
            {
                dp[i][j]= temp2;
                check[i][j]= 2;
            }
            if(temp2==temp1)
            {
                dp[i][j]=temp1;
                check[i][j]=3;
            }
        }
    }
    printf("%d\n",dp[n-1][m-1]); // top-bottom approach
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    calculate();
    return 0;
}
