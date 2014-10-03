#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

// Returns the maximum value that can be put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
}
 
int main()
{
    int W, n;
    cin >> W >> n;
        
    int val[n],wt[n];
    for(int i=0;i<n;i++)
    cin >> wt[i] >> val[i] ;    
    
    printf("%d", knapSack(W, wt, val, n)); // total maximum value from the best choice of items for your trip.
    return 0;
}
// Time Complexity: O(nW) where n is the number of items and W is the capacity of knapsack.
