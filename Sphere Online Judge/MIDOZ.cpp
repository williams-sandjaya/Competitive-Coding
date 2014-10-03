#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
using namespace std;
int main()
{
    int test;int n,k,i,sum=0;int candies[100];
    scanf("%d",&test);
    while(test--){
    scanf("%d%d",&n,&k);
    //scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {scanf("%d",&candies[i]);
    sum+=((candies[i])/k);}
    
    printf("%d\n",sum);
    sum=0;
    }


system("pause");
}
