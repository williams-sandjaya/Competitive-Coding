#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    int n;vector<int> v;vector<int>::iterator it;int x;vector<int> v_left;
    scanf("%d",&n);
    
    while(n!=0)
    {
       scanf("%d",&x);
       v.push_back(x);
       n--;
    }
    
    long sum2=*(v.begin()); // right hand
    long sum1=0; // left hand
    int i=1;
    
    for(it=v.begin()+i;it!=v.end();it++)
    {
        if(sum1>=sum2) // for right hand
        sum2=sum2+(*it);
        
        else // for left hand
        {
             sum1=sum1+(*it);
             v_left.push_back(i+1);
        }
        i++;
    }
    
    for(int i=0;i<v_left.size();i++)
    printf("%d\n", v_left[i]);
    
    system ("pause");
    return 0;
}
