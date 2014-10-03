#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n,count[4];
    scanf("%d",&n);
    char ar[2][2*n];
    
    for(int i=0;i<2*n;i++)
            cin>>ar[0][i];

    for(int k=0;k<2*n;k+=2)
    {
        memset(count,0,sizeof(count));
        count[(int)ar[0][k]-'A']=1;
        count[(int)ar[0][k+1]-'A']=1;
        
        for(int i=0,j=0;i<4;i++)
        {
            if(count[i]==0)
            {
               ar[1][k+j]=(char)(i+'A');
               j++;
            }
        }
        
        if(ar[1][k-1]==ar[1][k])
        {
          char temp=ar[1][k];
          ar[1][k]=ar[1][k+1];
          ar[1][k+1]=temp;
        }    
    }
    
    for(int i=0;i<2*n;i++)
    cout<<ar[1][i];
    cout<<endl;
    
    system ("pause");
    return 0;
}
