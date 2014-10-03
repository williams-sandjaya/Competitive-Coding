#include <cstdio>
        #include <cstring>
        #include <algorithm>
        #include <string>
        using namespace std;
        #define MAXR 50
        #define MAXC 50
        char s[MAXR+10][MAXC+10];
 
        typedef struct 
        {
                int off,on;
        }node;
 
        bool cmp(node a,node b)
        {
                return a.off > b.off;
        }
 
        bool leastOns(node a,node b)
        {
                return a.on < b.on ;
        }
 
        int main()
        {
                int t,n,m,k,i,j,cnt,maxOn,maxOff;
                scanf("%d",&t);
                while(t--)
                {
                        cnt=maxOn=maxOff=0;
                        scanf("%d %d %d",&n,&m,&k);
                        node a[n];
                        
                        for(i=0;i<n;i++)
                        {
                                a[i].off=a[i].on=0;
                        }
                        
                        for(i=0;i<n;i++)
                                scanf("%s",s[i]);
                        
                        for(i=0;i<n;i++)
                        {
                                for(j=0;j<m;j++)
                                {
                                        if(s[i][j]=='.')
                                        {
                                                a[i].off++;
                                                
                                        }
                                        else
                                        { 
                                                a[i].on++;
                                        }
                                }
                        }
                        
                        sort(a,a+n,cmp);//sort as per decreasing offs
                        for(i=0;i<n;i++)
                        {
                                if(k<=0)break;
                                //swap on-offs
                                if(a[i].off == 0)break;
                                a[i].on = a[i].on ^ a[i].off;
                                a[i].off = a[i].on ^ a[i].off;
                                a[i].on = a[i].on ^ a[i].off;
                                k--;
                        }
                        //if still chances are left , start with least on's and swap
                        sort(a,a+n,leastOns);
                        i=0;
                        //printf("k: %d\n",k);
                        while(k>0)
                        {
                                a[i].on = a[i].on ^ a[i].off;
                                a[i].off = a[i].on ^ a[i].off;
                                a[i].on = a[i].on ^ a[i].off;
                                k--;
                                i++;
                                if(i==n)
                                {
                                        i=0;
                                        sort(a,a+n,leastOns);
                                }
                        }
                        for(i=0;i<n;i++)
                                cnt+=a[i].on;
                        printf("%d\n",cnt);     
                }
                return 0;
        }
