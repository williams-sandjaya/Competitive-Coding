#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
int main()
{
    int t,caes=1;double p0,p1,ti,p;
    cin >> t;
    
    while(t--)
    {
        cin >> p0 >> p1 >> ti >> p ;
        double rate = log2(p/p0)/log2(p1/p0);
        printf ("Scenario #%d: %.2lf\n",caes, rate*ti);
        caes++;
    }
}
