/*
hint--
AB^2+AC^2=4*R*R;
AB^2+AC=S;
in above question given S should be maximum so to fullfill that condition AB should be maximum.
from above two equation--
S=4*R*R+AC-AC^2;
by doing some mathematics to find minimum value of AC the value after solving calculation is AC=0.5;
put that value in equation-
S=4*R*R+AC-AC^2;
S=4*R*R+0.25;
*/
#include <stdio.h>
int main()
{
        int t,i=1;
        double r,s;
        scanf("%d",&t);
        while(t--)
        {
        scanf("%lf",&r);
        s=4*r*r+0.25;
        printf("Case %d: ",i);
        printf("%.2lf\n",s);
        i=i+1;
        }
        return 0;
}
