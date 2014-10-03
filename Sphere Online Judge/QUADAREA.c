#include<stdio.h>
#include<math.h>
int main()
{
    int test;
    double a,b,c,d,s,ans;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        s=(a+b+c+d)/2;
        ans=sqrt(((s-a)*(s-b)*(s-c)*(s-d)));
        printf("%0.2lf\n",ans);
    }
    system("pause");
    
}
