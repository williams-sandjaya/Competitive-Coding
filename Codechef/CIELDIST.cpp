#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<cmath>
#include<stack>
#include<utility>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
               
    int ds,dt,d;
        cin>>ds>>dt>>d;
        if(ds+dt<=d)
        {
            cout<<d-ds-dt<<endl;
        }else if(d+min(ds, dt)<=max(ds, dt))
        {
            cout<<max(ds, dt)-(d+min(ds, dt))<<endl;
        }else
            cout<<0<<endl;
               
    }
    return 0;
}
/*int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    double ds,dt,d,ans;
    scanf("%lf%lf%lf",&ds,&dt,&d);
    
   double pol=d/2;
   
   if(ds<pol && (d-dt) >= pol)
   ans=pol-ds + ((d-dt)-pol);
   
   if(ds<pol && (d-dt) < pol && (d-dt)>ds)
   ans=(d-dt)-ds;
   
   if(ds<pol && (d-dt) < pol && (d-dt)<=ds)
   ans=0;
   
   if(ds>pol && pol<(d-dt) && (d-dt)>ds)
    ans=(d-dt)-ds;
   
   if(ds>pol && pol<(d-dt) && (d-dt)<=ds)
   ans=0;
   
   if(ds>pol && pol>=(d-dt) )
   ans=0;
   
   if(ds==pol && (d-dt)>pol)
   ans = (d-dt)-pol;
   
   if(ds==pol && (d-dt)<=pol)
   ans=0;
   
   printf("%.16lf\n",ans);
   ans=0;
    
}
    

return 0;
//system("pause");
}*/
