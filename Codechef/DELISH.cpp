#include<iostream>
using namespace std;
 
int main()
{
    int t;long long d[10000],maxi[10000],maxl[10000],mini[10000],minl[10000],max;
        cin>>t;
        while(t--)
        {
                int n;
                cin>>n;
                for(int i=0;i<n;i++) cin>>d[i];
                
                maxi[0]=d[0];mini[0]=d[0];
                for(int i=1;i<n-1;i++)
                {
                        if(maxi[i-1]>0) maxi[i]=maxi[i-1]+d[i];
                        else maxi[i]=d[i];
                        
                        if(mini[i-1]<0) mini[i]=mini[i-1]+d[i];
                        else mini[i]=d[i];
                }
                
                maxl[n-2]=d[n-1];minl[n-2]=d[n-1];
                for(int i=n-3;i>=0;i--)
                {
                        if(maxl[i+1]>0) maxl[i]=maxl[i+1]+d[i+1];
                        else maxl[i]=d[i+1];
                        
                        if(minl[i+1]<0) minl[i]=minl[i+1]+d[i+1];
                        else minl[i]=d[i+1];
                }
                
                max=maxi[0]-minl[0];
                for(int i=0;i<n-1;i++)
                        if((maxi[i]-minl[i])>max) max=(maxi[i]-minl[i]);

                for(int i=0;i<n-1;i++)
                        if((maxl[i]-mini[i])>max) max=(maxl[i]-mini[i]);

                cout<<max<<endl;
        }
        return 0;
}
