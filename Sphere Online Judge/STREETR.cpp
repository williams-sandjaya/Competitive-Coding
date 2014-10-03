#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b)
{
    if(b) return gcd( b, a % b );
	return a;    
}


int main()
{
    int N , n1, n2,X[100000],g,s=0;
    cin>>N;
    cin>>n1; // first coordinate
    for(int i=0;i<N-1;i++)
    {
        cin>>n2;
        X[i]=n2-n1; // stores the difference of coordinates 
        n1=n2; // moves the previous coordinate to the next one
    }
    g=gcd(X[0],X[1]); // gcd of diff between tree(1,2) and dff between tree (2,3)
    for(int i=2;i<N-1;i++)
    {
        g=gcd(g,X[i]); // gcd looping
    } 
    // g is the ultimate gcd now (that's what i call it)
    for(int i=0;i<N-1;i++)
    {
        s+=((X[i]/g)-1); // [(diff/ultimate gcd) -1]  ka summation
    }
    cout<<s<<endl;
    return 0;
}
