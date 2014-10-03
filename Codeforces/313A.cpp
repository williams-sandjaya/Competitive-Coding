#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n;
    if (n>=0) 
    {
        cout<<n<<endl; 
        return 0;
    }
        
    n=-n; 
    int m1=(n/10)%10; // gets the 2nd last digit
    int m2 = n%10; // gets the last digit

    m=(n/100*10+m2) < (n/10) ? (n/100*10+m2) : (n/10) ;
    cout<<-m<<endl; 
    return 0;
}
