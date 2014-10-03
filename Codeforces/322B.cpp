#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int r,g,b,i,k,res=0;
    cin>>r>>g>>b;
    
    for(i=0;i<3;i++)
    {
    	if(r<i || g<i || b<i) break;
    	res = max(res, ( (r-i)/3+(g-i)/3+(b-i)/3+i ) ); // make 0,1,2 mixing bouquets
    }
    
    cout<<res<<endl;
}
