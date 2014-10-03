#include<stdio.h>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
int total;vector<int> list;vector<int> ans;int ar[100000];

        scanf("%d",&total);
        for(int i=0;i<100000;i++) ar[i] = 0; // ban the numbers
        
        for(int i=0;i<total;i++)
        {
            int x;
            scanf("%d",&x);
            list.push_back(x); // store the numbers in list
            ar[x] = 1; // unban the numbers
        }
        sort(list.begin(), list.end()); // sort the numbers
 
        ans.push_back(list[0]); // get the 1st number
        ans.push_back(list[1]); // get the 2nd number
        
        int diff = list[1] - list[0]; // difference of 2nd and 1st number
        int ban = list[1] + diff; // the number which completes this AP
        if(ban<100000) ar[ban] = 0; // ban the number which completes this AP
 
        for(int i=2;i<total;i++)
        {
            int x = list[i]; // get the next number
            if(ar[x]==1) // if the number is not banned
            {
                int len = ans.size();
                for(int j=0;j<len;j++)
                {
                    diff = x - ans[j]; // gets the difference
                    ban = x+diff; // the number which completes this AP
                    if(ban<100000) ar[ban] = 0; // ban the number which completes this AP      
                }
                ans.push_back(x); // store the number as all it's possible AP forming numbers are now banned
            }
        }
                printf("%d\n",ans.size()); // print size
                for(int i=0;i<ans.size();i++) printf("%d ",ans[i]); // print the answer
                system("pause");
}
