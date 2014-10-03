#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
long long test=0,i,ans=0,count,last_length;
scanf("%lld",&test);

    while(test--)
    {
         char str[1000001];
         scanf("%s",str);
         count = 0;last_length = 0;ans = 0;
         
         for(i=0;i<strlen(str);i++)
         {
               if(str[i]=='.')
               count++;
               else
               {
                   if(count>last_length) 
                   {
                       ans++;
                       last_length = count;
                   }
                   count = 0;
               }
                           
         } 
            
         cout << ans << endl;
    }
return 0;
}
