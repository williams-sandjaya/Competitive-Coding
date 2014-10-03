#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include <cstring>
using namespace std;

int main()
{
long long test=0;
scanf("%lld",&test);

    while(test--)
    {
         string s1,s2;
         // put in s1
         cin>>s1;
         int len = s1.length();
         
         // put in s2
         if(len%2!=0)
         for(int i=0;i<len;i++)
         {
           if(i==(len/2)) continue;
           else s2+=s1[i];
         }
         else if (len%2==0)
         s2 = s1;
         int actuallen= s2.length();
         
         // check if it's a LAPIN
         int buffer[26];
         for(int i=0;i<26;i++)
         buffer[i]=0;
         for(int i=0;i<len/2;i++)
         buffer[s2[i]-'a']++;
         for(int i=len/2;i<len;i++)
         buffer[s2[i]-'a']--;
         int ans=0;
         for(int i=0;i<26;i++)
         if(buffer[i]==0)
         ans++;
         
         // print
         if(ans==26) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }

system("pause");
return 0;
}
