#include <stdio.h>
int main() {
    long long int t,n,i,j,k,z=0,bazinga=0;
    scanf("%lld",&t);
    while(t--)
    {
        z=0;
        scanf("%lld%lld",&n,&k);
        int ans=2;
        if(k>n/2){printf("-1\n");}
        else
        {
            long long ar[k];
            for(i=k+2;i<=k+k*2;i+=2)
                {
                ar[z++]=i;
           // printf("%lld\n",ar[z-1]);
                }
            
         long long ar1[k];bazinga=0;long long s=0;   
         for(i=0;i<z;i+=1)
         for(j=i+1;j<z;j+=1)
         {
         if(ar[i]*ar[j]>n){s++; continue;}
         
         if(bazinga!=k)
         ar1[bazinga++]=ar[i]*ar[j];
         }
        // printf("%lld ",ar[i]*ar[j]);
        
        for(i=0;i<=10;i+=1)
                {
           //     ar[z++]=i;
            printf("%lld\n",ar1[i]);
                }
         
            printf("\n");
        }
    }
  return 0;
}
