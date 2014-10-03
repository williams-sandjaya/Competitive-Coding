#include<cstdio>
int main()
{  int ar[100000];int i;
    ar[0]=1;
  for(i=1;i<10000;i+=8)
  {  ar[i]=ar[i-1]+6;
     ar[i+1]=ar[i]+4;
     ar[i+2]=ar[i+1]+2;
     ar[i+3]=ar[i+2]+4;
     ar[i+4]=ar[i+3]+2;
     ar[i+5]=ar[i+4]+4;
     ar[i+6]=ar[i+5]+6;
     ar[i+7]=ar[i+6]+2;
                         }
                         
                         int test;int n;
                         scanf("%d",&test);
                         while(test--){
                                       scanf("%d",&n);
                         printf("%d\n",ar[n-1]);
                         }
                         
                         return 0;
    }
    
    
/*#include<cstdio>
int main()
{
    int ar[100000];
    }
*/
/*#include<cstdio>
int main()
{
int t;
long long i;long long n;



scanf("%lld",&t);
while(t--){
long long d=0;
scanf("%lld",&n);
for(i=0;;i++)
{
if(i%2 !=0 && i%3!=0 && i%5!=0) d++;
if(d==n){ printf("%lld\n",i);break;}
}
           
           }

return 0;
}*/

