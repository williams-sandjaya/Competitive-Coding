#include<cstdio>
using namespace std;
 
int main()
{
    int t=0;
    scanf("%d",&t);
    while(t--)
    {
        double probability;
        scanf("%lf",&probability);
        if(probability-0.5<0.0000000000) probability=1.0-probability;
        printf("%.14lf\n",(probability*(3.0-2.0*probability)*10000.0));
    }
    return 0;
}
