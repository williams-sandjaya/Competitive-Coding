#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
 
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int modes_buffer1[10002],i,n,max1,max2,max3,count,ans,k,z,r;int modes_buffer2[10002];int modes_buffer3[10002];k=0;max2=0;int mode_cal1[27]={0};int mode_cal2[27]={0};
        cin>>s;
        n=s.length();                                       
    
        for(i=0;i<n;i++)
        {
            max1=0;
            while(s[i]!='#' && i<n)
            {
                mode_cal1[s[i]-'a']++; //current segment
                mode_cal2[s[i]-'a']++; //till now all the egments
                max1=max(max1,mode_cal1[s[i]-'a']); // mode in current segment
                max2=max(max2,mode_cal2[s[i]-'a']); // mode considering segments from left to right
                i++;
            }
            modes_buffer1[k]=max1; // modes of each segment
            modes_buffer2[k]=max2; // modes considering segments from left to right
            k++;
            if(s[i]=='#')
            {
                count++; // count #'s
                for(r=0;r<27;r++)
                mode_cal1[r]=0; // initialise 
            }
        }
    
    int mode_cal3[27]={0};max3=0;z=k;
        for(i=n-1;i>=0;i--)
        {
            while(s[i]!='#' && i>=0)
            {
                mode_cal3[s[i]-'a']++;
                max3=max(max3,mode_cal3[s[i]-'a']); // mode considering segments from right to left
                i--;
            }
            if(i!=n-1)
            {
                modes_buffer3[k-1]=max3; // mode considering segments from right to left in reverse order
                k--;
            }
            if(s[i]=='#')
            continue;
        }
        
            ans=0;
            if(count<3) // not sufficient segments
            cout<<"0"<<endl;
            else
            {
                for(i=0;i<z-3;i++)
                {
                    if(modes_buffer2[i]!=0 && modes_buffer1[i+1]!=0 && modes_buffer1[i+2]!=0 && modes_buffer3[i+3]!=0)
                    ans=max(ans,(modes_buffer2[i]+modes_buffer1[i+1]+modes_buffer1[i+2]+modes_buffer3[i+3]));
                }
                ans+=3;
                if(ans<7)
                ans=0;
                cout<<ans<<endl;
            }
        }
    return 0;
}
