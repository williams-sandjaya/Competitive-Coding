#include <iostream>
using namespace std;
long n,mini,sum,i,k,ar[500]={};
int main() {
    cin>>n;mini=1000000;
    for (i=1;i<2*n;i++) {
        cin>>ar[i];
        if (ar[i]<0) {
            k++;ar[i]=-ar[i];
        }
        sum+=ar[i];mini=min(mini,ar[i]);
    }
    if ((n%2==1)||(k%2==0)) cout<<sum<<"\n";
    else cout <<sum-2*mini<<"\n";
    return 0;
}
