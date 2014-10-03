#include<stdio.h>
int main()
{
    long long int test,n;
    scanf("%lld",&test);
    long long int a;
    int i,j;long long int sum=0;
    for(i=0;i<test;i++)
    {
                        printf("\n");
                        scanf("%lld",&n);
                       
                       for(j=0;j<n;j++)
                       {
                                       
                             scanf("%lld",&a);
                             sum=(sum+a)%n;
          
                                       }
                                       
                                       if(sum%n==0)
                                       printf("YES\n");
                                       else
                                       printf("NO\n");
                        
                        sum=0;
                       
                       
                       }
    
    return 0 ;    
}
/*
C++ implementation

#include<iostream>
#include<cstring>
using namespace std;
int main (){
int t,n,i;
long long  a,sum;
cin>>t;
while(t--)
{
    cout<<endl;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=(sum+a)%n;
    }
    if(sum%n==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
} 
*/
