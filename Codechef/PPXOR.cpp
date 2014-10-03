#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#define mod 1000000007
using namespace std;

int main()
{
	long long t,n,i;
 	cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],x[n],pow=1,ans=0;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
 
        x[0]=a[0];
        for(i=1;i<n;i++)
            x[i]=x[i-1]^a[i];
 
        for(int j=0;j<=31; j++)
        {
            long long zero, one=0;
            for(i=0;i<n;i++)
                if(x[i]&pow)
                   one++;
        
            zero=n-one+1;
            ans+=zero*one*pow;
            pow<<=1;
        }
        cout<<ans<<endl;  
    } 
}
