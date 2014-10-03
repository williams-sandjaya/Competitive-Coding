// This problem is kind of cryptic in first reading but reading carefully reveals that it simply asking about (x1^2+x2^2+x3^2) 
//where x_1,x_2,x_3 is root of cubic equation. [roots are the coordinates of the aircraft relative to the radar.].
// a=-(x1+x2+x3), b=x1*x2+x2*x3+x1*x3 , c=-(x1*x2*x3) .
#include<stdio.h>
int main()
{
   long long int a,b,c,r;
   int t;
   int i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
                    scanf("%lld %lld %lld",&a,&b,&c);
                    r=((a*a)-(2*b));
                    printf("%lld\n",r);
                    }
                    system("pause");
                    }
                    
